class CfgPatches 
{
	class xKrak3nsRaptorPelts
	{
		units[] = 
		{
			"Animal_dbo_raptor",
			"Animal_dbo_raptorB",
			"Animal_dbo_raptorblue",
			"Animal_dbo_idrex",
			"Animal_dbo_tricero",
			"Animal_dbo_trex",
			"Pelt_Raptor",
			"Pelt_RaptorB",
			"Pelt_RaptorBlue",
			"Pelt_RaptorIdrex",
			"Pelt_Tricero",
			"Pelt_TRex"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"DZ_Data",
			"DZ_Data_Bliss",
			"DZ_Gear_Consumables",
			"DZ_AI_Bliss",
			"DZ_Animals",
			"DZ_Animals_Bliss",
			"DZ_Animals_ursus_arctos",
			"dbo_raptor"
		};
	};
};
class CfgMods
{
	class xKrak3nsRaptorPelts
	{
		dir = "xKrak3nsRaptorPelts";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "xKrak3nsRaptorPelts";
		credits = "DeanosBeano/Vanmag/liquidrock/Tree";
		author = "xKrak3n";
		authorID = "999";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"World"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"xKrak3nsRaptorPelts/scripts/4_world"};
			};
		};
	};
};
class CfgVehicles
{
	class Pelt_Base;
	class Animal_UrsusArctos;

	// Green Raptor
	class Animal_dbo_raptor: Animal_UrsusArctos
	{
		scope = 2;
		model = "\dbo\animals\dbo_raptor\dbo_raptor.p3d";
		displayName = "Raptor";
		descriptionShort = "$The Most reliable Fossil ever Found";
		collidesWithCharacterOnDeath = 0;
		storageCategory=2;
		class Cargo
		{
			itemsCargoSize[]={10,10};
			allowOwnedCargoManipulation=1;
			openable=1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 600;
					healthLevels[] = {{1,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0,{}}};
				};
				class Blood
				{
					hitpoints = 1200;
				};
				class Shock
				{
					hitpoints = 1200;
				};
			};
		    class DamageZones
		    {
		        class Zone_Head
		        {
		            componentNames[] = {"Zone_Head"};
		            transferToZonesNames[] = {};
		            transferToZonesCoefs[] = {};
		            fatalInjuryCoef = 0.15;
		            canBleed = 0;
		            class Health
		            {
		                hitpoints = 420; // 70% of GlobalHealth hitpoints (600)
		                transferToGlobalCoef = 1;
		            };
		            class Blood: Health
		            {
		                hitpoints = 0;
		            };
		            class Shock: Health
		            {
		                hitpoints = 0;
		            };
		        };
		        class Zone_Neck: Zone_Head
		        {
		            componentNames[] = {"Zone_Neck"};
		            transferToZonesNames[] = {};
		            transferToZonesCoefs[] = {};
		            fatalInjuryCoef = 0.05;
		            class Health: Health
		            {
		                hitpoints = 420; // 70% of GlobalHealth hitpoints (600)
		            };
		        };
		        class Zone_Chest: Zone_Head
		        {
		            componentNames[] = {"Zone_Chest"};
		            transferToZonesNames[] = {};
		            transferToZonesCoefs[] = {};
		            fatalInjuryCoef = 0.05;
		            class Health: Health
		            {
		                hitpoints = 540; // 90% of GlobalHealth hitpoints (600)
		            };
		        };
		        class Zone_Belly: Zone_Head
		        {
		            componentNames[] = {"Zone_Belly"};
		            transferToZonesNames[] = {};
		            transferToZonesCoefs[] = {};
		            fatalInjuryCoef = 0.05;
		            class Health: Health
		            {
		                hitpoints = 540; // 90% of GlobalHealth hitpoints (600)
		            };
		        };
		        class Zone_Spine: Zone_Head
		        {
		            componentNames[] = {"Zone_Spine_Front", "Zone_Spine_Back"};
		            transferToZonesNames[] = {};
		            transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.05;
					class Health: Health
					{
						hitpoints = 420; // 70% of GlobalHealth hitpoints (600)
					};
				};
				class Zone_Pelvis: Zone_Head
				{
					componentNames[] = {"Zone_Pelvis"};
					transferToZonesNames[] = {"Zone_Spine"};
					transferToZonesCoefs[] = {0.5};
					fatalInjuryCoef = 0.05;
					class Health: Health
					{
						hitpoints = 540; // 90% of GlobalHealth hitpoints (600)
					};
				};
				class Zone_Legs: Zone_Head
				{
					componentNames[] = {"Zone_Legs_Front","Zone_Legs_Back"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0;
					class Health: Health
					{
						hitpoints = 420; // 70% of GlobalHealth hitpoints (600)
					};
				};
			};
		};
		class Skinning
		{
			class ObtainedPelt
			{
				item="Pelt_Raptor";
				count=1;
				itemZones[]=
				{
					"Zone_Chest",
					"Zone_Belly"
				};
				quantityCoef=1;
				transferToolDamageCoef=1;
			};
		};
	};

	// Green Raptor Small
	class Animal_dbo_raptorB: Animal_dbo_raptor
	{
		scope = 2;
		model = "\dbo\animals\dbo_raptor\dbo_raptor.p3d";
		displayName = "Green Raptor";
		descriptionShort = "The Most reliable Fossil ever Found  but smaller";
		collidesWithCharacterOnDeath = 0;
		storageCategory=2;
		class Cargo
		{
			itemsCargoSize[]={10,10};
			allowOwnedCargoManipulation=1;
			openable=1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 500;
					healthLevels[] = {{1,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0,{}}};
				};
				class Blood
				{
					hitpoints = 1000;
				};
				class Shock
				{
					hitpoints = 1000;
				};
			};
		    class DamageZones
		    {
		        class Zone_Head
		        {
		            componentNames[] = {"Zone_Head"};
		            transferToZonesNames[] = {};
		            transferToZonesCoefs[] = {};
		            fatalInjuryCoef = 0.15;
		            canBleed = 0;
		            class Health
		            {
		                hitpoints = 350; // 70% of GlobalHealth hitpoints (500)
		                transferToGlobalCoef = 1;
		            };
		            class Blood: Health
		            {
		                hitpoints = 0;
		            };
		            class Shock: Health
		            {
		                hitpoints = 0;
		            };
		        };
		        class Zone_Neck: Zone_Head
		        {
		            componentNames[] = {"Zone_Neck"};
		            transferToZonesNames[] = {};
		            transferToZonesCoefs[] = {};
		            fatalInjuryCoef = 0.05;
		            class Health: Health
		            {
		                hitpoints = 350; // 70% of GlobalHealth hitpoints (500)
		            };
		        };
		        class Zone_Chest: Zone_Head
		        {
		            componentNames[] = {"Zone_Chest"};
		            transferToZonesNames[] = {};
		            transferToZonesCoefs[] = {};
		            fatalInjuryCoef = 0.05;
		            class Health: Health
		            {
		                hitpoints = 450; // 90% of GlobalHealth hitpoints (500)
		            };
		        };
		        class Zone_Belly: Zone_Head
		        {
		            componentNames[] = {"Zone_Belly"};
		            transferToZonesNames[] = {};
		            transferToZonesCoefs[] = {};
		            fatalInjuryCoef = 0.05;
		            class Health: Health
		            {
		                hitpoints = 450; // 90% of GlobalHealth hitpoints (500)
		            };
		        };
		        class Zone_Spine: Zone_Head
		        {
		            componentNames[] = {"Zone_Spine_Front", "Zone_Spine_Back"};
		            transferToZonesNames[] = {};
		            transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.05;
					class Health: Health
					{
						hitpoints = 350; // 70% of GlobalHealth hitpoints (500)
					};
				};
				class Zone_Pelvis: Zone_Head
				{
					componentNames[] = {"Zone_Pelvis"};
					transferToZonesNames[] = {"Zone_Spine"};
					transferToZonesCoefs[] = {0.5};
					fatalInjuryCoef = 0.05;
					class Health: Health
					{
						hitpoints = 450; // 90% of GlobalHealth hitpoints (500)
					};
				};
				class Zone_Legs: Zone_Head
				{
					componentNames[] = {"Zone_Legs_Front","Zone_Legs_Back"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0;
					class Health: Health
					{
						hitpoints = 350; // 70% of GlobalHealth hitpoints (500)
					};
				};
			};
		};
		class Skinning
		{
			class ObtainedPelt
			{
				item="Pelt_RaptorB";
				count=1;
				itemZones[]=
				{
					"Zone_Chest",
					"Zone_Belly"
				};
				quantityCoef=1;
				transferToolDamageCoef=1;
			};
		};
	};

	// Blue Raptor
	class Animal_dbo_raptorblue: Animal_dbo_raptor
	{
		scope = 2;
		model = "\dbo\animals\dbo_raptor\dbo_raptorblue.p3d";
		displayName = "Blue Raptor";
		descriptionShort = "$The Most reliable Blue Fossil ever Found ";
		collidesWithCharacterOnDeath = 0;
		storageCategory=2;
		class Cargo
		{
			itemsCargoSize[]={10,10};
			allowOwnedCargoManipulation=1;
			openable=1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 800;
					healthLevels[] = {{1,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0,{}}};
				};
				class Blood
				{
					hitpoints = 1600;
				};
				class Shock
				{
					hitpoints = 1600;
				};
			};
			class DamageZones
			{
			    class Zone_Head
			    {
			        componentNames[] = {"Zone_Head"};
			        transferToZonesNames[] = {};
			        transferToZonesCoefs[] = {};
			        fatalInjuryCoef = 0.15;
			        canBleed = 0;
			        class Health
			        {
			            hitpoints = 560; // 70% of GlobalHealth hitpoints (800)
			            transferToGlobalCoef = 1;
			        };
			        class Blood: Health
			        {
			            hitpoints = 0;
			        };
			        class Shock: Health
			        {
			            hitpoints = 0;
			        };
			    };
			    class Zone_Neck: Zone_Head
			    {
			        componentNames[] = {"Zone_Neck"};
			        transferToZonesNames[] = {};
			        transferToZonesCoefs[] = {};
			        fatalInjuryCoef = 0.05;
			        class Health: Health
			        {
			            hitpoints = 560; // 70% of GlobalHealth hitpoints (800)
			        };
			    };
			    class Zone_Chest: Zone_Head
			    {
			        componentNames[] = {"Zone_Chest"};
			        transferToZonesNames[] = {};
			        transferToZonesCoefs[] = {};
			        fatalInjuryCoef = 0.05;
			        class Health: Health
			        {
			            hitpoints = 720; // 90% of GlobalHealth hitpoints (800)
			        };
			    };
			    class Zone_Belly: Zone_Head
			    {
			        componentNames[] = {"Zone_Belly"};
			        transferToZonesNames[] = {};
			        transferToZonesCoefs[] = {};
			        fatalInjuryCoef = 0.05;
			        class Health: Health
			        {
			            hitpoints = 720; // 90% of GlobalHealth hitpoints (800)
			        };
			    };
			    class Zone_Spine: Zone_Head
			    {
			        componentNames[] = {"Zone_Spine_Front", "Zone_Spine_Back"};
			        transferToZonesNames[] = {};
			        transferToZonesCoefs[] = {};
			        fatalInjuryCoef = 0.05;
			        class Health: Health
			        {
			            hitpoints = 560; // 70% of GlobalHealth hitpoints (800)
			        };
			    };
			    class Zone_Pelvis: Zone_Head
			    {
			        componentNames[] = {"Zone_Pelvis"};
			        transferToZonesNames[] = {"Zone_Spine"};
			        transferToZonesCoefs[] = {0.5};
			        fatalInjuryCoef = 0.05;
			        class Health: Health
			        {
			            hitpoints = 720; // 90% of GlobalHealth hitpoints (800)
			        };
			    };
			    class Zone_Legs: Zone_Head
			    {
			        componentNames[] = {"Zone_Legs_Front", "Zone_Legs_Back"};
			        transferToZonesNames[] = {};
			        transferToZonesCoefs[] = {};
			        fatalInjuryCoef = 0;
			        class Health: Health
			        {
			            hitpoints = 560; // 70% of GlobalHealth hitpoints (800)
			        };
			    };
			};
		};
		class Skinning
		{
			class ObtainedPelt
			{
				item="Pelt_RaptorBlue";
				count=1;
				itemZones[]=
				{
					"Zone_Chest",
					"Zone_Belly"
				};
				quantityCoef=1;
				transferToolDamageCoef=1;
			};
		};
	};

	// Grey Raptor
	class Animal_dbo_idrex: Animal_dbo_raptor
	{
		scope = 2;
		model = "\dbo\animals\dbo_raptor\dbo_idrex.p3d";
		displayName = "Idrex";
		descriptionShort = "The Most IDrex looking deformed Dianasour ever seen";
		collidesWithCharacterOnDeath = 0;
		storageCategory=2;
		class Cargo
		{
			itemsCargoSize[]={10,10};
			allowOwnedCargoManipulation=1;
			openable=1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000;
					healthLevels[] = {{1,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0,{}}};
				};
				class Blood
				{
					hitpoints = 2000;
				};
				class Shock
				{
					hitpoints = 2000;
				};
			};
			class DamageZones
			{
				class Zone_Head
				{
					componentNames[] = {"Zone_Head"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.1;
					canBleed = 0;
					class Health
					{
						hitpoints = 700; // 70% of GlobalHealth hitpoints (1000)
						transferToGlobalCoef = 1;
					};
					class Blood: Health
					{
						hitpoints = 0;
					};
					class Shock: Health
					{
						hitpoints = 0;
					};
				};
				class Zone_Neck: Zone_Head
				{
					componentNames[] = {"Zone_Neck"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.1;
					class Health
					{
						hitpoints = 700; // 70% of GlobalHealth hitpoints (1000)
						transferToGlobalCoef = 1;
					};
				};
				class Zone_Belly: Zone_Head
				{
					componentNames[] = {"Zone_Belly"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.01;
					class Health: Health
					{
						hitpoints = 900; // 90% of GlobalHealth hitpoints (1000)
					};
				};
				class Zone_Pelvis: Zone_Head
				{
					componentNames[] = {"Zone_Pelvis"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.01;
					class Health: Health
					{
						hitpoints = 900; // 90% of GlobalHealth hitpoints (1000)
					};
				};
				class Zone_Legs: Zone_Head
				{
					componentNames[] = {"Zone_Legs"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.01;
					class Health: Health
					{
						hitpoints = 700; // 70% of GlobalHealth hitpoints (1000)
						transferToGlobalCoef = 0;
					};
				};
			};
		};
		class Skinning
		{
			class ObtainedPelt
			{
				item="Pelt_RaptorIdrex";
				count=1;
				itemZones[]=
				{
					"Zone_Chest",
					"Zone_Belly"
				};
				quantityCoef=1;
				transferToolDamageCoef=1;
			};
		};
	};

	// Tricero
	class Animal_dbo_tricero: Animal_UrsusArctos
	{
		scope = 2;
		model = "\dbo\animals\dbo_raptor\dbo_tricero.p3d";
		displayName = "Bastard";
		descriptionShort = "big spikes";
		collidesWithCharacterOnDeath = 0;
		storageCategory=2;
		class Cargo
		{
			itemsCargoSize[]={10,10};
			allowOwnedCargoManipulation=1;
			openable=1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1200;
					healthLevels[] = {{1,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0,{}}};
				};
				class Blood
				{
					hitpoints = 2400;
				};
				class Shock
				{
					hitpoints = 2400;
				};
			};
			class DamageZones
			{
				class Zone_Head
				{
					componentNames[] = {"Zone_Head"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.1;
					canBleed = 0;
					class Health
					{
						hitpoints = 1240; // 70% of GlobalHealth hitpoints (1200)
						transferToGlobalCoef = 1;
					};
					class Blood: Health
					{
						hitpoints = 0;
					};
					class Shock: Health
					{
						hitpoints = 0;
					};
				};
				class Zone_Neck: Zone_Head
				{
					componentNames[] = {"Zone_Neck"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.1;
					class Health
					{
						hitpoints = 1240; // 70% of GlobalHealth hitpoints (1200)
						transferToGlobalCoef = 1;
					};
				};
				class Zone_Belly: Zone_Head
				{
					componentNames[] = {"Zone_Belly"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.01;
					class Health: Health
					{
						hitpoints = 1480; // 90% of GlobalHealth hitpoints (1200)
					};
				};
				class Zone_Pelvis: Zone_Head
				{
					componentNames[] = {"Zone_Pelvis"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.01;
					class Health: Health
					{
						hitpoints = 1480; // 90% of GlobalHealth hitpoints (1200)
					};
				};
				class Zone_Legs: Zone_Head
				{
					componentNames[] = {"Zone_Legs"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.01;
					class Health: Health
					{
						hitpoints = 1240; // 70% of GlobalHealth hitpoints (1200)
						transferToGlobalCoef = 0;
					};
				};
			};
		};
		class Skinning
		{
			class ObtainedPelt
			{
				item="Pelt_Tricero";
				count=1;
				itemZones[]=
				{
					"Zone_Chest",
					"Zone_Belly"
				};
				quantityCoef=1;
				transferToolDamageCoef=1;
			};
		};
	};
	
	// T-Rex
	class Animal_dbo_trex: Animal_UrsusArctos
	{
		scope = 2;
		model = "\dbo\animals\dbo_raptor\dbo_trex.p3d";
		displayName = "Terrence Rex";
		descriptionShort = "The Most Feared Chicken Ever";
		collidesWithCharacterOnDeath = 0;
		storageCategory=2;
		class Cargo
		{
			itemsCargoSize[]={10,10};
			allowOwnedCargoManipulation=1;
			openable=1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1500;
					healthLevels[] = {{1,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0,{}}};
				};
				class Blood
				{
					hitpoints = 3000;
				};
				class Shock
				{
					hitpoints = 3000;
				};
			};
			class DamageZones
			{
				class Zone_Head
				{
					componentNames[] = {"Zone_Head"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.1;
					canBleed = 0;
					class Health
					{
						hitpoints = 1050; // 70% of GlobalHealth hitpoints (1500)
						transferToGlobalCoef = 1;
					};
					class Blood: Health
					{
						hitpoints = 0;
					};
					class Shock: Health
					{
						hitpoints = 0;
					};
				};
				class Zone_Neck: Zone_Head
				{
					componentNames[] = {"Zone_Neck"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.1;
					class Health
					{
						hitpoints = 1050; // 70% of GlobalHealth hitpoints (1500)
						transferToGlobalCoef = 1;
					};
				};
				class Zone_Belly: Zone_Head
				{
					componentNames[] = {"Zone_Belly"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.01;
					class Health: Health
					{
						hitpoints = 1350; // 90% of GlobalHealth hitpoints (1500)
					};
				};
				class Zone_Pelvis: Zone_Head
				{
					componentNames[] = {"Zone_Pelvis"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.01;
					class Health: Health
					{
						hitpoints = 1350; // 90% of GlobalHealth hitpoints (1500)
					};
				};
				class Zone_Legs: Zone_Head
				{
					componentNames[] = {"Zone_Legs"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.01;
					class Health: Health
					{
						hitpoints = 1050; // 70% of GlobalHealth hitpoints (1500)
						transferToGlobalCoef = 0;
					};
				};
			};
		};
		class Skinning
		{
			class ObtainedPelt
			{
				item="Pelt_TRex";
				count=1;
				itemZones[]=
				{
					"Zone_Chest",
					"Zone_Belly"
				};
				quantityCoef=1;
				transferToolDamageCoef=1;
			};
		};
	};


	// Pelt Base Classes
	class RaptorPelt_base: Pelt_Base
	{
		scope=1;
		displayName="THIS SHOULDNT BE HERE";
		descriptionShort="If you pick this item up or see it in the trader, let a server admin know so they can remove it.";
		model="\dz\gear\consumables\Pelt_Wolf.p3d";
		weight=1000;
		itemSize[]={5,3};
		peltGain=5;
		leatherYield=4;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\consumables\data\pelt_wolf.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\consumables\data\pelt_wolf.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\consumables\data\pelt_wolf_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\consumables\data\pelt_wolf_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\consumables\data\pelt_wolf_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class TRexPelt_base: Pelt_Base
	{
		scope=1;
		displayName="THIS SHOULDNT BE HERE";
		descriptionShort="If you pick this item up or see it in the trader, let a server admin know so they can remove it.";
		model="\dz\gear\consumables\Pelt_Bear.p3d";
		weight=2000;
		itemSize[]={8,5};
		peltGain=5;
		leatherYield=12;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=2500;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\consumables\data\pelt_bear.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\consumables\data\pelt_bear.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\consumables\data\pelt_bear_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\consumables\data\pelt_bear_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\consumables\data\pelt_bear_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};


	// Raptor Pelts
	class Pelt_Raptor: RaptorPelt_base
	{
		scope=2;
		displayName="Raptor Flesh - Green";
		descriptionShort="This skin was once worn by a green raptor.";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = 
		{
			"xKrak3nsRaptorPelts\data\peltRaptor\peltRaptor_co.paa"
		};
		hiddenSelectionsMaterials[] = {"xKrak3nsRaptorPelts\data\peltRaptor\peltRaptor.rvmat"};
	};

	// RaptorB Pelts
	class Pelt_RaptorB: RaptorPelt_base
	{
		scope=2;
		displayName="Raptor Flesh";
		descriptionShort="Skin from a raptor. Still warm and smells great.";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = 
		{
			"xKrak3nsRaptorPelts\data\peltRaptorB\peltRaptorB_co.paa"
		};
		hiddenSelectionsMaterials[] = {"xKrak3nsRaptorPelts\data\peltRaptorB\peltRaptorB.rvmat"};
	};

	// RaptorBlue Pelts
	class Pelt_RaptorBlue: RaptorPelt_base
	{
		scope=2;
		displayName="Raptor Flesh - Blue";
		descriptionShort="This flesh once failed to protect it's owner from bullets.";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = 
		{
			"xKrak3nsRaptorPelts\data\peltRaptorBlue\peltRaptorBlue_co.paa"
		};
		hiddenSelectionsMaterials[] = {"xKrak3nsRaptorPelts\data\peltRaptorBlue\peltRaptorBlue.rvmat"};
	};

	// RaptorIdrex Pelts
	class Pelt_RaptorIdrex: RaptorPelt_base
	{
		scope=2;
		displayName="Idrex Raptor Flesh";
		descriptionShort="This skin was probably worn by one of those balding grey raptors.";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = 
		{
			"xKrak3nsRaptorPelts\data\peltRaptorIdrex\peltRaptorIdrex_co.paa"
		};
		hiddenSelectionsMaterials[] = {"xKrak3nsRaptorPelts\data\peltRaptorIdrex\peltRaptorIdrex.rvmat"};
	};

	// Tricero Pelts
	class Pelt_Tricero: TRexPelt_base
	{
		scope=2;
		displayName="Tricero Flesh";
		descriptionShort="The Tricero that used to own this skin is probably shivering somewhere.";
		hiddenSelections[] = {"camo","zbytek"};
		hiddenSelectionsTextures[] = 
		{
			"xKrak3nsRaptorPelts\data\peltTricero\peltTricero_co.paa",
			"xKrak3nsRaptorPelts\data\peltTricero\peltTricero_co.paa"
		};
		hiddenSelectionsMaterials[] = {"xKrak3nsRaptorPelts\data\peltTricero\peltTricero.rvmat"};
	};

	// T-Rex Pelts
	class Pelt_TRex: TRexPelt_base
	{
		scope=2;
		displayName="T-Rex Flesh";
		descriptionShort="So you shot down the big angry boy... and then you stole it's skin?";
		hiddenSelections[] = {"camo","zbytek"};
		hiddenSelectionsTextures[] = 
		{
			"xKrak3nsRaptorPelts\data\peltTRex\peltTRex_co.paa",
			"xKrak3nsRaptorPelts\data\peltTRex\peltTRex_co.paa"
		};
		hiddenSelectionsMaterials[] = {"xKrak3nsRaptorPelts\data\peltTRex\peltTRex.rvmat"};
	};

};