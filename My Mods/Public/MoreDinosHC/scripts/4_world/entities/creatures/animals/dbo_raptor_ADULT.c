class Animal_dbo_raptor_ADULT extends Animal_dbo_raptor
{
	override void RegisterHitComponentsForAI()
	{
		m_DefaultHitComponent = "Zone_Chest";
		m_DefaultHitPositionComponent = "Pelvis";
		
		DayZAIHitComponentHelpers.RegisterHitComponent(m_HitComponentsForAI, "Zone_Head", 2);
		DayZAIHitComponentHelpers.RegisterHitComponent(m_HitComponentsForAI, "Zone_Neck", 65);
		DayZAIHitComponentHelpers.RegisterHitComponent(m_HitComponentsForAI, "Zone_Chest", 50);
		DayZAIHitComponentHelpers.RegisterHitComponent(m_HitComponentsForAI, "Zone_Legs_Back", 75);
		DayZAIHitComponentHelpers.RegisterHitComponent(m_HitComponentsForAI, "Zone_Legs_Front", 70);
	}

    void Animal_dbo_raptor_ADULT()
    {
        SetEventMask(EntityEvent.POSTFRAME);
    }
        
    override void EOnPostFrame(IEntity other, int extra)
    {
        float scale = 1.65;
        vector transform[4];
        GetTransform(transform);
        
        transform[0] = transform[0] * scale;
        transform[1] = transform[1] * scale;
        transform[2] = transform[2] * scale;
        
        SetTransform(transform);
        Update();
    }

    override void EOnFrame(IEntity other, float timeSlice) // | EntityEvent.FRAME
    {
        vector rotation = GetYawPitchRoll();
        SetYawPitchRoll(Vector(rotation[0], 0, 0));
    }
    
    override bool IsDanger()
	{
		return true;
	}
}