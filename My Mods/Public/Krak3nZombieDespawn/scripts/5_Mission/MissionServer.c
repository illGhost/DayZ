modded class MissionServer
{

	float m_Trader_AnimalCleanupUpdateTimerMax = 5;
	float m_Trader_AnimalCleanupUpdateTimer = 0;
	
	override void OnUpdate(float timeslice)
	{
		super.OnUpdate(timeslice);

		m_Trader_AnimalCleanupUpdateTimer += timeslice;
		if (m_Trader_AnimalCleanupUpdateTimer >= m_Trader_AnimalCleanupUpdateTimerMax)
		{
			m_Trader_AnimalCleanupUpdateTimer = 0;

			for (int n = 0; n < m_Trader_TraderPositions.Count(); n++)
			{
				vector orientation = Vector(0, 0, 0);
				int safezoneDiameter = m_Trader_TraderSafezones.Get(n) * 2;
				vector edgeLength = Vector(safezoneDiameter, safezoneDiameter, safezoneDiameter);
				array<Object> excludedObjects = new array<Object>;
				array<Object> collidedObjects = new array<Object>;
				
				if (GetGame().IsBoxColliding(m_Trader_TraderPositions.Get(n), orientation, edgeLength, excludedObjects, collidedObjects))
				{
					for (int o = 0; o < collidedObjects.Count(); o++)
					{
						string objectClass = collidedObjects.Get(o).GetType();

						if (objectClass.Contains("Animal_", "ZmbM_", "dbo_", "DZNC_", "deer_", "bear_", "wolf_", "ZmbF_", "kck_", "Mutant01_", "Diesel_Mutant02_", "Mutant_", "JugBear", "JugbearGL"))
						GetGame().ObjectDelete(collidedObjects.Get(o));	
					}
				}
			}
		}
	}

	void readTraderVariables()
	{
		TraderMessage.ServerLog("[TRADER] DEBUG START");

		FileHandle file_index = OpenFile(m_Trader_VariableFilePath, FileMode.READ);
		
		if ( file_index == 0 )
		{
			TraderMessage.ServerLog("[TRADER] FOUND NO TRADERVARIABLE FILE!");
			return;
		}

		int variableCounter = 0;
		
		string line_content = "";
		while (variableCounter <= 500 && !line_content.Contains("<FileEnd>"))
		{
			bool validEntry = false;

			line_content = "";
			int char_count = FGets( file_index,  line_content );
			line_content = FileReadHelper.TrimComment(line_content);

			if (line_content.Contains("<AnimalCleanupTimer>"))
			{
				line_content.Replace("<AnimalCleanupTimer>", "");
				line_content = FileReadHelper.TrimComment(line_content);

				m_Trader_AnimalCleanupUpdateTimer = line_content.ToFloat();
				validEntry = true;

				TraderMessage.ServerLog("[TRADER] ANIMALCLEANUPTIMER = " + line_content);
			}
			if (validEntry)
				variableCounter++;
		}

		CloseFile(file_index);

		TraderMessage.ServerLog("[TRADER] DONE END!");
	}
}