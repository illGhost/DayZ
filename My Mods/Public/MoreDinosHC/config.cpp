class CfgPatches 
{
	class MoreDinosHC
	{
		units[] = 
		{
			"Animal_dbo_raptor",
			"Animal_dbo_raptor_BABY",
			"Animal_dbo_raptor_ADULT",
			"Animal_dbo_raptorB",
			"Animal_dbo_raptorB_BABY",
			"Animal_dbo_raptorB_ADULT",
			"Animal_dbo_raptorblue",
			"Animal_dbo_raptorblue_BABY",
			"Animal_dbo_raptorblue_ADULT",
			"Animal_dbo_idrex",
			"Animal_dbo_idrex_BABY",
			"Animal_dbo_idrex_ADULT",
			"Animal_dbo_tricero",
			"Animal_dbo_tricero_BABY",
			"Animal_dbo_tricero_ADULT",
			"Animal_dbo_trex",
			"Animal_dbo_trex_BABY",
			"Animal_dbo_trex_ADULT",
			"Animal_dbo_trex_GIANTCHICKEN",
			"MD_Pelt_Raptor",
			"MD_Pelt_RaptorBaby",
			"MD_Pelt_RaptorAdult",
			"MD_Pelt_RaptorB",
			"MD_Pelt_RaptorBBaby",
			"MD_Pelt_RaptorBAdult",
			"MD_Pelt_RaptorBlue",
			"MD_Pelt_RaptorBlueBaby",
			"MD_Pelt_RaptorBlueAdult",
			"MD_Pelt_RaptorIdrex",
			"MD_Pelt_RaptorIdrexBaby",
			"MD_Pelt_RaptorIdrexAdult",
			"MD_Pelt_Tricero",
			"MD_Pelt_TriceroBaby",
			"MD_Pelt_TriceroAdult",
			"MD_Pelt_TRex",
			"MD_Pelt_TRexBaby",
			"MD_Pelt_TRexAdult",
			"MD_Pelt_TRexGiant"
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
	class MoreDinosHC
	{
		dir = "MoreDinosHC";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "MoreDinosHC";
		credits = "DeanosBeano/Vanmag/liquidrock/Tree/Rayman";
		author = "xKrak3n";
		authorID = "999";
		version = "1.2";
		extra = 0;
		type = "mod";
		dependencies[] = {"World"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"MoreDinosHC/scripts/4_world"};
			};
		};
	};
};
class CfgVehicles 
{
	class Pelt_Base;
	class Animal_UrsusArctos;

	// Green Raptor Big
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
		            hitpoints = 500;
		            healthLevels[] = {{1, {}}, {0.7, {}}, {0.5, {}}, {0.3, {}}, {0, {}}};
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
				item="MD_Pelt_Raptor";
				count=1;
				itemZones[]=
				{
					"Zone_Chest",
					"Zone_Belly"
				};
				quantityCoef=1;
				transferToolDamageCoef=1;
			};
			class ObtainedSteaks
			{
				item = "RaptorSteakMeat";
				count = 2;
				itemZones[] = {"Zone_Chest","Zone_Belly","Zone_Pelvis"};
				countByZone[] = {2,2};
				quantityMinMaxCoef[] = {0.1,1};
			};
			class ObtainedLard
			{
				item = "Lard";
				count = 1;
				quantityMinMaxCoef[] = {0.2,1};
			};
			class ObtainedGuts
			{
				item = "Guts";
				count = 1;
				quantityMinMaxCoef[] = {0.5,0.8};
			};
			class ObtainedBones
			{
				item = "Bone";
				count = 1;
				quantityMinMaxCoef[] = {0.3,1};
				transferToolDamageCoef = 1;
			};
		};
	};
	class Animal_dbo_raptor_BABY: Animal_dbo_raptor
	{
		scope = 2;
		model = "\dbo\animals\dbo_raptor\dbo_raptor.p3d";
		displayName = "Baby Raptor";
		descriptionShort = "$The Most reliable Fossil ever Found  ";
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
					hitpoints = 250;
					healthLevels[] = {{1,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0,{}}};
				};
				class Blood
				{
					hitpoints = 500;
				};
				class Shock
				{
					hitpoints = 500;
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
		                hitpoints = 175; // 70% of GlobalHealth hitpoints (250)
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
		                hitpoints = 175; // 70% of GlobalHealth hitpoints (250)
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
		                hitpoints = 225; // 90% of GlobalHealth hitpoints (250)
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
		                hitpoints = 225; // 90% of GlobalHealth hitpoints (250)
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
						hitpoints = 175; // 70% of GlobalHealth hitpoints (250)
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
						hitpoints = 225; // 90% of GlobalHealth hitpoints (250)
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
						hitpoints = 175; // 70% of GlobalHealth hitpoints (250)
					};
				};
			};
		};
		class Skinning
		{
			class ObtainedPelt
			{
				item="MD_Pelt_RaptorBaby";
				count=1;
				itemZones[]=
				{
					"Zone_Chest",
					"Zone_Belly"
				};
				quantityCoef=1;
				transferToolDamageCoef=1;
			};
			class ObtainedSteaks
			{
				item = "RaptorSteakMeat";
				count = 1;
				itemZones[] = {"Zone_Chest","Zone_Belly","Zone_Pelvis"};
				countByZone[] = {2,2};
				quantityMinMaxCoef[] = {0.1,1};
			};
			class ObtainedLard
			{
				item = "Lard";
				count = 1;
				quantityMinMaxCoef[] = {0.2,1};
			};
			class ObtainedGuts
			{
				item = "Guts";
				count = 1;
				quantityMinMaxCoef[] = {0.5,0.8};
			};
			class ObtainedBones
			{
				item = "Bone";
				count = 1;
				quantityMinMaxCoef[] = {0.3,1};
				transferToolDamageCoef = 1;
			};
		};
	};
	class Animal_dbo_raptor_ADULT: Animal_dbo_raptor
	{
		scope = 2;
		model = "\dbo\animals\dbo_raptor\dbo_raptor.p3d";
		displayName = "Adult Raptor";
		descriptionShort = "$The Most reliable Fossil ever Found  ";
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
					hitpoints = 750;
					healthLevels[] = {{1,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0,{}}};
				};
				class Blood
				{
					hitpoints = 1500;
				};
				class Shock
				{
					hitpoints = 1500;
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
		                hitpoints = 525; // 70% of GlobalHealth hitpoints (750)
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
		                hitpoints = 525; // 70% of GlobalHealth hitpoints (750)
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
		                hitpoints = 675; // 90% of GlobalHealth hitpoints (750)
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
		                hitpoints = 675; // 90% of GlobalHealth hitpoints (750)
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
						hitpoints = 525; // 70% of GlobalHealth hitpoints (750)
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
						hitpoints = 675; // 90% of GlobalHealth hitpoints (750)
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
						hitpoints = 525; // 70% of GlobalHealth hitpoints (750)
					};
				};
			};
		};
		class Skinning
		{
			class ObtainedPelt
			{
				item="MD_Pelt_RaptorAdult";
				count=2;
				itemZones[]=
				{
					"Zone_Chest",
					"Zone_Belly"
				};
				quantityCoef=1;
				transferToolDamageCoef=1;
			};
			class ObtainedSteaks
			{
				item = "RaptorSteakMeat";
				count = 9;
				itemZones[] = {"Zone_Chest","Zone_Belly","Zone_Pelvis"};
				countByZone[] = {2,2};
				quantityMinMaxCoef[] = {0.1,1};
			};
			class ObtainedLard
			{
				item = "Lard";
				count = 4;
				quantityMinMaxCoef[] = {0.2,1};
			};
			class ObtainedGuts
			{
				item = "Guts";
				count = 4;
				quantityMinMaxCoef[] = {0.5,0.8};
			};
			class ObtainedBones
			{
				item = "Bone";
				count = 4;
				quantityMinMaxCoef[] = {0.3,1};
				transferToolDamageCoef = 1;
			};
		};
	};

	// Green Raptor Small
	class Animal_dbo_raptorB: Animal_dbo_raptor
	{
		scope = 2;
		model = "\dbo\animals\dbo_raptor\dbo_raptor.p3d";
		displayName = "Raptor Juvenile";
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
					hitpoints = 350;
					healthLevels[] = {{1,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0,{}}};
				};
				class Blood
				{
					hitpoints = 700;
				};
				class Shock
				{
					hitpoints = 700;
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
		                hitpoints = 245; // 70% of GlobalHealth hitpoints (350)
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
		                hitpoints = 245; // 70% of GlobalHealth hitpoints (350)
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
		                hitpoints = 315; // 90% of GlobalHealth hitpoints (350)
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
		                hitpoints = 315; // 90% of GlobalHealth hitpoints (350)
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
						hitpoints = 245; // 70% of GlobalHealth hitpoints (350)
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
						hitpoints = 315; // 90% of GlobalHealth hitpoints (350)
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
						hitpoints = 245; // 70% of GlobalHealth hitpoints (350)
					};
				};
			};
		};
		class Skinning
		{
			class ObtainedPelt
			{
				item="MD_Pelt_RaptorB";
				count=1;
				itemZones[]=
				{
					"Zone_Chest",
					"Zone_Belly"
				};
				quantityCoef=1;
				transferToolDamageCoef=1;
			};
			class ObtainedSteaks
			{
				item = "RaptorSteakMeat";
				count = 2;
				itemZones[] = {"Zone_Chest","Zone_Belly","Zone_Pelvis"};
				countByZone[] = {2,2};
				quantityMinMaxCoef[] = {0.1,1};
			};
			class ObtainedLard
			{
				item = "Lard";
				count = 1;
				quantityMinMaxCoef[] = {0.2,1};
			};
			class ObtainedGuts
			{
				item = "Guts";
				count = 1;
				quantityMinMaxCoef[] = {0.5,0.8};
			};
			class ObtainedBones
			{
				item = "Bone";
				count = 1;
				quantityMinMaxCoef[] = {0.3,1};
				transferToolDamageCoef = 1;
			};
		};
	};
	class Animal_dbo_raptorB_BABY: Animal_dbo_raptorB
	{
		scope = 2;
		model = "\dbo\animals\dbo_raptor\dbo_raptor.p3d";
		displayName = "Green Raptor Baby";
		descriptionShort = "The Most reliable Fossil ever Found  but smaller  ";
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
					hitpoints = 200;
					healthLevels[] = {{1,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0,{}}};
				};
				class Blood
				{
					hitpoints = 400;
				};
				class Shock
				{
					hitpoints = 400;
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
		                hitpoints = 140; // 70% of GlobalHealth hitpoints (200)
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
		                hitpoints = 140; // 70% of GlobalHealth hitpoints (200)
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
		                hitpoints = 180; // 90% of GlobalHealth hitpoints (200)
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
		                hitpoints = 180; // 90% of GlobalHealth hitpoints (200)
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
						hitpoints = 140; // 70% of GlobalHealth hitpoints (200)
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
						hitpoints = 180; // 90% of GlobalHealth hitpoints (200)
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
						hitpoints = 140; // 70% of GlobalHealth hitpoints (200)
					};
				};
			};
		};
		class Skinning
		{
			class ObtainedPelt
			{
				item="MD_Pelt_RaptorBBaby";
				count=1;
				itemZones[]=
				{
					"Zone_Chest",
					"Zone_Belly"
				};
				quantityCoef=1;
				transferToolDamageCoef=1;
			};
			class ObtainedSteaks
			{
				item = "RaptorSteakMeat";
				count = 1;
				itemZones[] = {"Zone_Chest","Zone_Belly","Zone_Pelvis"};
				countByZone[] = {2,2};
				quantityMinMaxCoef[] = {0.1,1};
			};
			class ObtainedLard
			{
				item = "Lard";
				count = 1;
				quantityMinMaxCoef[] = {0.2,1};
			};
			class ObtainedGuts
			{
				item = "Guts";
				count = 1;
				quantityMinMaxCoef[] = {0.5,0.8};
			};
			class ObtainedBones
			{
				item = "Bone";
				count = 1;
				quantityMinMaxCoef[] = {0.3,1};
				transferToolDamageCoef = 1;
			};
		};
	};
	class Animal_dbo_raptorB_ADULT: Animal_dbo_raptorB
	{
		scope = 2;
		model = "\dbo\animals\dbo_raptor\dbo_raptor.p3d";
		displayName = "Green Raptor Adult";
		descriptionShort = "The Most reliable Fossil ever Found  but smaller  ";
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
				item="MD_Pelt_RaptorBAdult";
				count=2;
				itemZones[]=
				{
					"Zone_Chest",
					"Zone_Belly"
				};
				quantityCoef=1;
				transferToolDamageCoef=1;
			};
			class ObtainedSteaks
			{
				item = "RaptorSteakMeat";
				count = 2;
				itemZones[] = {"Zone_Chest","Zone_Belly","Zone_Pelvis"};
				countByZone[] = {2,2};
				quantityMinMaxCoef[] = {0.1,1};
			};
			class ObtainedLard
			{
				item = "Lard";
				count = 2;
				quantityMinMaxCoef[] = {0.2,1};
			};
			class ObtainedGuts
			{
				item = "Guts";
				count = 1;
				quantityMinMaxCoef[] = {0.5,0.8};
			};
			class ObtainedBones
			{
				item = "Bone";
				count = 1;
				quantityMinMaxCoef[] = {0.3,1};
				transferToolDamageCoef = 1;
			};
		};
	};

	// Raptor Blue
	class Animal_dbo_raptorblue: Animal_dbo_raptor
	{
		scope = 2;
		model = "\dbo\animals\dbo_raptor\dbo_raptorblue.p3d";
		displayName = "Blue Raptor";
		descriptionShort = "$The Most reliable Blue Fossil ever Found";
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
		};
		class Skinning
		{
			class ObtainedPelt
			{
				item="MD_Pelt_RaptorBlue";
				count=1;
				quantityCoef=1;
				transferToolDamageCoef=1;
			};
			class ObtainedSteaks
			{
				item = "RaptorSteakMeat";
				count = 2;
				quantityMinMaxCoef[] = {0.1,1};
			};
			class ObtainedLard
			{
				item = "Lard";
				count = 1;
				quantityMinMaxCoef[] = {0.2,1};
			};
			class ObtainedGuts
			{
				item = "Guts";
				count = 1;
				quantityMinMaxCoef[] = {0.5,0.8};
			};
			class ObtainedBones
			{
				item = "Bone";
				count = 1;
				quantityMinMaxCoef[] = {0.3,1};
				transferToolDamageCoef = 1;
			};
		};
	};
	class Animal_dbo_raptorblue_BABY: Animal_dbo_raptorblue
	{
		scope = 2;
		model = "\dbo\animals\dbo_raptor\dbo_raptorblue.p3d";
		displayName = "Blue Raptor Baby";
		descriptionShort = "$The Most reliable Blue Fossil ever Found  ";
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
				item="MD_Pelt_RaptorBlueBaby";
				count=1;
				itemZones[]=
				{
					"Zone_Chest",
					"Zone_Belly"
				};
				quantityCoef=1;
				transferToolDamageCoef=1;
			};
			class ObtainedSteaks
			{
				item = "RaptorSteakMeat";
				count = 1;
				itemZones[] = {"Zone_Chest","Zone_Belly","Zone_Pelvis"};
				countByZone[] = {2,2};
				quantityMinMaxCoef[] = {0.1,1};
			};
			class ObtainedLard
			{
				item = "Lard";
				count = 1;
				quantityMinMaxCoef[] = {0.2,1};
			};
			class ObtainedGuts
			{
				item = "Guts";
				count = 1;
				quantityMinMaxCoef[] = {0.5,0.8};
			};
			class ObtainedBones
			{
				item = "Bone";
				count = 1;
				quantityMinMaxCoef[] = {0.3,1};
				transferToolDamageCoef = 1;
			};
		};
	};
	class Animal_dbo_raptorblue_ADULT: Animal_dbo_raptorblue
	{
		scope = 2;
		model = "\dbo\animals\dbo_raptor\dbo_raptorblue.p3d";
		displayName = "Blue Raptor Adult";
		descriptionShort = "$The Most reliable Blue Fossil ever Found  ";
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
		            hitpoints = 1000; // Base hitpoints for the animal
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
		            fatalInjuryCoef = 0.15;
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
		            fatalInjuryCoef = 0.05;
		            class Health: Health
		            {
		                hitpoints = 700; // 70% of GlobalHealth hitpoints (1000)
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
		                hitpoints = 900; // 90% of GlobalHealth hitpoints (1000)
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
		                hitpoints = 900; // 90% of GlobalHealth hitpoints (1000)
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
		                hitpoints = 700; // 70% of GlobalHealth hitpoints (1000)
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
		                hitpoints = 900; // 90% of GlobalHealth hitpoints (1000)
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
		                hitpoints = 700; // 70% of GlobalHealth hitpoints (1000)
		            };
		        };
		    };
		};
		class Skinning
		{
			class ObtainedPelt
			{
				item="MD_Pelt_RaptorBlueAdult";
				count=2;
				itemZones[]=
				{
					"Zone_Chest",
					"Zone_Belly"
				};
				quantityCoef=1;
				transferToolDamageCoef=1;
			};
			class ObtainedSteaks
			{
				item = "RaptorSteakMeat";
				count = 2;
				itemZones[] = {"Zone_Chest","Zone_Belly","Zone_Pelvis"};
				countByZone[] = {2,2};
				quantityMinMaxCoef[] = {0.1,1};
			};
			class ObtainedLard
			{
				item = "Lard";
				count = 2;
				quantityMinMaxCoef[] = {0.2,1};
			};
			class ObtainedGuts
			{
				item = "Guts";
				count = 1;
				quantityMinMaxCoef[] = {0.5,0.8};
			};
			class ObtainedBones
			{
				item = "Bone";
				count = 1;
				quantityMinMaxCoef[] = {0.3,1};
				transferToolDamageCoef = 1;
			};
		};
	};

	// Idrex
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
		            fatalInjuryCoef = 0.15;
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
		            fatalInjuryCoef = 0.05;
		            class Health: Health
		            {
		                hitpoints = 700; // 70% of GlobalHealth hitpoints (1000)
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
		                hitpoints = 900; // 90% of GlobalHealth hitpoints (1000)
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
		                hitpoints = 900; // 90% of GlobalHealth hitpoints (1000)
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
						hitpoints = 700; // 90% of GlobalHealth hitpoints (1000)
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
						hitpoints = 900; // 90% of GlobalHealth hitpoints (1000)
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
						hitpoints = 700; // 90% of GlobalHealth hitpoints (1000)
					};
				};
			};
		};
		class Skinning
		{
			class ObtainedPelt
			{
				item="MD_Pelt_RaptorIdrex";
				count=1;
				itemZones[]=
				{
					"Zone_Chest",
					"Zone_Belly"
				};
				quantityCoef=1;
				transferToolDamageCoef=1;
			};
			class ObtainedSteaks
			{
				item = "RaptorSteakMeat";
				count = 2;
				itemZones[] = {"Zone_Chest","Zone_Belly","Zone_Pelvis"};
				countByZone[] = {2,2};
				quantityMinMaxCoef[] = {0.1,1};
			};
			class ObtainedLard
			{
				item = "Lard";
				count = 2;
				quantityMinMaxCoef[] = {0.2,1};
			};
			class ObtainedGuts
			{
				item = "Guts";
				count = 3;
				quantityMinMaxCoef[] = {0.5,0.8};
			};
			class ObtainedBones
			{
				item = "Bone";
				count = 3;
				quantityMinMaxCoef[] = {0.3,1};
				transferToolDamageCoef = 1;
			};
		};
	};
	class Animal_dbo_idrex_BABY: Animal_dbo_idrex
	{
		scope = 2;
		model = "\dbo\animals\dbo_raptor\dbo_idrex.p3d";
		displayName = "Baby Idrex";
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
				item="MD_Pelt_RaptorIdrexBaby";
				count=1;
				itemZones[]=
				{
					"Zone_Chest",
					"Zone_Belly"
				};
				quantityCoef=1;
				transferToolDamageCoef=1;
			};
			class ObtainedSteaks
			{
				item = "RaptorSteakMeat";
				count = 1;
				itemZones[] = {"Zone_Chest","Zone_Belly","Zone_Pelvis"};
				countByZone[] = {2,2};
				quantityMinMaxCoef[] = {0.1,1};
			};
			class ObtainedLard
			{
				item = "Lard";
				count = 1;
				quantityMinMaxCoef[] = {0.2,1};
			};
			class ObtainedGuts
			{
				item = "Guts";
				count = 1;
				quantityMinMaxCoef[] = {0.5,0.8};
			};
			class ObtainedBones
			{
				item = "Bone";
				count = 2;
				quantityMinMaxCoef[] = {0.3,1};
				transferToolDamageCoef = 1;
			};
		};
	};
	class Animal_dbo_idrex_ADULT: Animal_dbo_idrex
	{
		scope = 2;
		model = "\dbo\animals\dbo_raptor\dbo_idrex.p3d";
		displayName = "Grown-Up Idrex";
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
        	        fatalInjuryCoef = 0.15;
        	        canBleed = 0;
        	        class Health
        	        {
        	            hitpoints = 840; // 70% of GlobalHealth hitpoints (1200)
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
        	            hitpoints = 840; // 70% of GlobalHealth hitpoints (1200)
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
        	            hitpoints = 1080; // 90% of GlobalHealth hitpoints (1200)
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
        	            hitpoints = 1080; // 90% of GlobalHealth hitpoints (1200)
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
        	            hitpoints = 840; // 70% of GlobalHealth hitpoints (1200)
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
        	            hitpoints = 1080; // 90% of GlobalHealth hitpoints (1200)
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
        	            hitpoints = 840; // 70% of GlobalHealth hitpoints (1200)
        	        };
        	    };
			};
		};
		class Skinning
		{
			class ObtainedPelt
			{
				item="MD_Pelt_RaptorIdrexAdult";
				count=2;
				itemZones[] = 
				{
					"Zone_Chest",
					"Zone_Belly"
				};
				quantityCoef=1;
				transferToolDamageCoef=1;
			};
			class ObtainedSteaks
			{
				item = "RaptorSteakMeat";
				count = 2;
				itemZones[] = {"Zone_Chest","Zone_Belly","Zone_Pelvis"};
				countByZone[] = {2,2};
				quantityMinMaxCoef[] = {0.1,1};
			};
			class ObtainedLard
			{
				item = "Lard";
				count = 2;
				quantityMinMaxCoef[] = {0.2,1};
			};
			class ObtainedGuts
			{
				item = "Guts";
				count = 1;
				quantityMinMaxCoef[] = {0.5,0.8};
			};
			class ObtainedBones
			{
				item = "Bone";
				count = 2;
				quantityMinMaxCoef[] = {0.3,1};
				transferToolDamageCoef = 1;
			};
		};
	};

	// Tricero
	class Animal_dbo_tricero: Animal_UrsusArctos
	{
		scope = 2;
		model = "\dbo\animals\dbo_raptor\dbo_tricero.p3d";
		displayName = "Fat Bastard Dino";
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
				item="MD_Pelt_Tricero";
				count=1;
				itemZones[]=
				{
					"Zone_Pelvis",
					"Zone_Belly"
				};
				quantityCoef=1;
				transferToolDamageCoef=1;
			};
			class ObtainedSteaks
			{
				item = "RaptorSteakMeat";
				count = 3;
				itemZones[] = {"Zone_Belly","Zone_Pelvis"};
				countByZone[] = {2,2};
				quantityMinMaxCoef[] = {0.1,1};
			};
			class ObtainedLard
			{
				item = "Lard";
				count = 3;
				quantityMinMaxCoef[] = {0.2,1};
			};
			class ObtainedGuts
			{
				item = "Guts";
				count = 2;
				quantityMinMaxCoef[] = {0.5,0.8};
			};
			class ObtainedBones
			{
				item = "Bone";
				count = 2;
				quantityMinMaxCoef[] = {0.3,1};
				transferToolDamageCoef = 1;
			};
		};
	};
	class Animal_dbo_tricero_BABY: Animal_dbo_tricero
	{
		scope = 2;
		model = "\dbo\animals\dbo_raptor\dbo_tricero.p3d";
		displayName = "Baby Bastard";
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
				item="MD_Pelt_TriceroBaby";
				count=1;
				itemZones[]=
				{
					"Zone_Pelvis",
					"Zone_Belly"
				};
				quantityCoef=1;
				transferToolDamageCoef=1;
			};
			class ObtainedSteaks
			{
				item = "RaptorSteakMeat";
				count = 2;
				itemZones[] = {"Zone_Belly","Zone_Pelvis"};
				countByZone[] = {2,2};
				quantityMinMaxCoef[] = {0.1,1};
			};
			class ObtainedLard
			{
				item = "Lard";
				count = 2;
				quantityMinMaxCoef[] = {0.2,1};
			};
			class ObtainedGuts
			{
				item = "Guts";
				count = 1;
				quantityMinMaxCoef[] = {0.5,0.8};
			};
			class ObtainedBones
			{
				item = "Bone";
				count = 1;
				quantityMinMaxCoef[] = {0.3,1};
				transferToolDamageCoef = 1;
			};
		};
	};
	class Animal_dbo_tricero_ADULT: Animal_dbo_tricero
	{
		scope = 2;
		model = "\dbo\animals\dbo_raptor\dbo_tricero.p3d";
		displayName = "Bigger Bastard";
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
					hitpoints = 1400;
					healthLevels[] = {{1,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0,{}}};
				};
				class Blood
				{
					hitpoints = 2800;
				};
				class Shock
				{
					hitpoints = 2800;
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
						hitpoints = 1080; // 70% of GlobalHealth hitpoints (1400)
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
						hitpoints = 1080; // 70% of GlobalHealth hitpoints (1400)
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
						hitpoints = 1360; // 90% of GlobalHealth hitpoints (1400)
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
						hitpoints = 1360; // 90% of GlobalHealth hitpoints (1400)
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
						hitpoints = 1080; // 70% of GlobalHealth hitpoints (1400)
						transferToGlobalCoef = 0;
					};
				};
			};
		};
		class Skinning
		{
			class ObtainedPelt
			{
				item="MD_Pelt_TriceroAdult";
				count=2;
				itemZones[]=
				{
					"Zone_Pelvis",
					"Zone_Belly"
				};
				quantityCoef=1;
				transferToolDamageCoef=1;
			};
			class ObtainedSteaks
			{
				item = "RaptorSteakMeat";
				count = 3;
				itemZones[] = {"Zone_Belly","Zone_Pelvis"};
				countByZone[] = {2,2};
				quantityMinMaxCoef[] = {0.1,1};
			};
			class ObtainedLard
			{
				item = "Lard";
				count = 3;
				quantityMinMaxCoef[] = {0.2,1};
			};
			class ObtainedGuts
			{
				item = "Guts";
				count = 1;
				quantityMinMaxCoef[] = {0.5,0.8};
			};
			class ObtainedBones
			{
				item = "Bone";
				count = 2;
				quantityMinMaxCoef[] = {0.3,1};
				transferToolDamageCoef = 1;
			};
		};
	};

	// T-Rex
	class Animal_dbo_trex: Animal_UrsusArctos
	{	
		scope = 2;
		model = "\dbo\animals\dbo_raptor\dbo_trex.p3d";
		displayName = "Terrence Rex";
		descriptionShort = "The Most Feared Chicken ever";
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
				item="MD_Pelt_TRex";
				count=1;
				itemZones[]=
				{
					"Zone_Pelvis",
					"Zone_Belly"
				};
				quantityCoef=1;
				transferToolDamageCoef=1;
			};
			class ObtainedSteaks
			{
				item = "TrexSteakMeat";
				count = 3;
				itemZones[] = {"Zone_Belly","Zone_Pelvis"};
				countByZone[] = {4,4};
				quantityMinMaxCoef[] = {0.5,1};
			};
			class ObtainedLard
			{
				item = "Lard";
				count = 3;
				quantityMinMaxCoef[] = {0.2,1};
			};
			class ObtainedGuts
			{
				item = "Guts";
				count = 1;
				quantityMinMaxCoef[] = {0.5,0.8};
			};
			class ObtainedBones
			{
				item = "Bone";
				count = 1;
				quantityMinMaxCoef[] = {0.3,1};
				transferToolDamageCoef = 1;
			};
		};
	};
	class Animal_dbo_trex_BABY: Animal_dbo_trex
	{
		scope = 2;
		model = "\dbo\animals\dbo_raptor\dbo_trex.p3d";
		displayName = "Baby Terrence Rex";
		descriptionShort = "The Most Feared Chicken ever";
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
				item="MD_Pelt_TRexBaby";
				count=1;
				itemZones[]=
				{
					"Zone_Pelvis",
					"Zone_Belly"
				};
				quantityCoef=1;
				transferToolDamageCoef=1;
			};
			class ObtainedSteaks
			{
				item = "TrexSteakMeat";
				count = 2;
				itemZones[] = {"Zone_Belly","Zone_Pelvis"};
				countByZone[] = {4,4};
				quantityMinMaxCoef[] = {0.5,1};
			};
			class ObtainedLard
			{
				item = "Lard";
				count = 2;
				quantityMinMaxCoef[] = {0.2,1};
			};
			class ObtainedGuts
			{
				item = "Guts";
				count = 2;
				quantityMinMaxCoef[] = {0.5,0.8};
			};
			class ObtainedBones
			{
				item = "Bone";
				count = 2;
				quantityMinMaxCoef[] = {0.3,1};
				transferToolDamageCoef = 1;
			};
		};
	};
	class Animal_dbo_trex_ADULT: Animal_dbo_trex
	{
		scope = 2;
		model = "\dbo\animals\dbo_raptor\dbo_trex.p3d";
		displayName = "Mr. Terrence Rex";
		descriptionShort = "The Most Feared Chicken ever";
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
					hitpoints = 2000;
					healthLevels[] = {{1,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0,{}}};
				};
				class Blood
				{
					hitpoints = 4000;
				};
				class Shock
				{
					hitpoints = 4000;
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
						hitpoints = 1400; // 70% of GlobalHealth hitpoints (2000)
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
						hitpoints = 1400; // 70% of GlobalHealth hitpoints (2000)
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
						hitpoints = 1600; // 90% of GlobalHealth hitpoints (2000)
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
						hitpoints = 1600; // 90% of GlobalHealth hitpoints (2000)
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
						hitpoints = 1400; // 70% of GlobalHealth hitpoints (2000)
						transferToGlobalCoef = 0;
					};
				};
			};
		};
		class Skinning
		{
			class ObtainedPelt
			{
				item="MD_Pelt_TRexAdult";
				count=2;
				itemZones[]=
				{
					"Zone_Pelvis",
					"Zone_Belly"
				};
				quantityCoef=1;
				transferToolDamageCoef=1;
			};
			class ObtainedSteaks
			{
				item = "TrexSteakMeat";
				count = 3;
				itemZones[] = {"Zone_Belly","Zone_Pelvis"};
				countByZone[] = {4,4};
				quantityMinMaxCoef[] = {0.5,1};
			};
			class ObtainedLard
			{
				item = "Lard";
				count = 3;
				quantityMinMaxCoef[] = {0.2,1};
			};
			class ObtainedGuts
			{
				item = "Guts";
				count = 2;
				quantityMinMaxCoef[] = {0.5,0.8};
			};
			class ObtainedBones
			{
				item = "Bone";
				count = 2;
				quantityMinMaxCoef[] = {0.3,1};
				transferToolDamageCoef = 1;
			};
		};
	};
	class Animal_dbo_trex_GIANTCHICKEN: Animal_dbo_trex
	{
		scope = 2;
		model = "\dbo\animals\dbo_raptor\dbo_trex.p3d";
		displayName = "THE BIGGEST Terrence Rex";
		descriptionShort = "The Most Feared Chicken ever";
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
					hitpoints = 5000;
					healthLevels[] = {{1,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0,{}}};
				};
				class Blood
				{
					hitpoints = 5000;
				};
				class Shock
				{
					hitpoints = 5000;
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
						hitpoints = 3500; // 70% of GlobalHealth hitpoints (5000)
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
						hitpoints = 3500; // 70% of GlobalHealth hitpoints (5000)
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
						hitpoints = 4500; // 90% of GlobalHealth hitpoints (5000)
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
						hitpoints = 4500; // 90% of GlobalHealth hitpoints (5000)
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
						hitpoints = 3500; // 70% of GlobalHealth hitpoints (5000)
						transferToGlobalCoef = 0;
					};
				};
			};
		};
		class Skinning
		{
			class ObtainedPelt
			{
				item="MD_Pelt_TRexGiant";
				count=2;
				itemZones[]=
				{
					"Zone_Pelvis",
					"Zone_Belly"
				};
				quantityCoef=1;
				transferToolDamageCoef=1;
			};
			class ObtainedSteaks
			{
				item = "TrexSteakMeat";
				count = 5;
				itemZones[] = {"Zone_Belly","Zone_Pelvis"};
				countByZone[] = {4,4};
				quantityMinMaxCoef[] = {0.5,1};
			};
			class ObtainedLard
			{
				item = "Lard";
				count = 5;
				quantityMinMaxCoef[] = {0.2,1};
			};
			class ObtainedGuts
			{
				item = "Guts";
				count = 3;
				quantityMinMaxCoef[] = {0.5,0.8};
			};
			class ObtainedBones
			{
				item = "Bone";
				count = 3;
				quantityMinMaxCoef[] = {0.3,1};
				transferToolDamageCoef = 1;
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
		weight=600;
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
								"MoreDinosHC\data\peltRaptor\peltRaptor.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"MoreDinosHC\data\peltRaptor\peltRaptor.rvmat"
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
		weight=1200;
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
								"MoreDinosHC\data\peltTRex\peltTRex.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"MoreDinosHC\data\peltTRex\peltTRex.rvmat"
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
	class MD_Pelt_Raptor: RaptorPelt_base
	{
		scope=2;
		displayName="Raptor Flesh - Green";
		descriptionShort="This skin was once worn by a green raptor.";
		itemSize[]={5,3};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = 
		{
			"MoreDinosHC\data\peltRaptor\peltRaptor_co.paa"
		};
		hiddenSelectionsMaterials[] = {"MoreDinosHC\data\peltRaptor\peltRaptor.rvmat"};
	};
	class MD_Pelt_RaptorBaby: RaptorPelt_base
	{
		scope=2;
		displayName="Baby Raptor Flesh - Green";
		descriptionShort="Little bastards got some teeth, eh? Where are your morals?";
		itemSize[]={5,3};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = 
		{
			"MoreDinosHC\data\peltRaptor\peltRaptor_co.paa"
		};
		hiddenSelectionsMaterials[] = {"MoreDinosHC\data\peltRaptor\peltRaptor.rvmat"};
	};
	class MD_Pelt_RaptorAdult: RaptorPelt_base
	{
		scope=2;
		displayName="Adult Raptor Flesh - Green";
		descriptionShort="This was peeled from the back of an adult dino that was likely just relaxing on their day off.";
		itemSize[]={5,3};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = 
		{
			"MoreDinosHC\data\peltRaptor\peltRaptor_co.paa"
		};
		hiddenSelectionsMaterials[] = {"MoreDinosHC\data\peltRaptor\peltRaptor.rvmat"};
	};

	// RaptorB Pelts
	class MD_Pelt_RaptorB: RaptorPelt_base
	{
		scope=2;
		displayName="Raptor Flesh";
		descriptionShort="Skin from a raptor. Still warm and smells like cheese.";
		itemSize[]={5,3};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = 
		{
			"MoreDinosHC\data\peltRaptorB\peltRaptorB_co.paa"
		};
		hiddenSelectionsMaterials[] = {"MoreDinosHC\data\peltRaptorB\peltRaptorB.rvmat"};
	};
	class MD_Pelt_RaptorBBaby: RaptorPelt_base
	{
		scope=2;
		displayName="Baby Raptor Flesh";
		descriptionShort="Skin from a baby raptor. Does not smell like cheese.";
		itemSize[]={5,3};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = 
		{
			"MoreDinosHC\data\peltRaptorB\peltRaptorB_co.paa"
		};
		hiddenSelectionsMaterials[] = {"MoreDinosHC\data\peltRaptorB\peltRaptorB.rvmat"};
	};
	class MD_Pelt_RaptorBAdult: RaptorPelt_base
	{
		scope=2;
		displayName="Adult Raptor Flesh";
		descriptionShort="Skin from an adult raptor. Smells like really old cheese.";
		itemSize[]={5,3};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = 
		{
			"MoreDinosHC\data\peltRaptorB\peltRaptorB_co.paa"
		};
		hiddenSelectionsMaterials[] = {"MoreDinosHC\data\peltRaptorB\peltRaptorB.rvmat"};
	};

	// RaptorBlue Pelts
	class MD_Pelt_RaptorBlue: RaptorPelt_base
	{
		scope=2;
		displayName="Raptor Flesh - Blue";
		descriptionShort="This flesh once failed to protect it's owner from bullets.";
		itemSize[]={5,3};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = 
		{
			"MoreDinosHC\data\peltRaptorBlue\peltRaptorBlue_co.paa"
		};
		hiddenSelectionsMaterials[] = {"MoreDinosHC\data\peltRaptorBlue\peltRaptorBlue.rvmat"};
	};
	class MD_Pelt_RaptorBlueBaby: RaptorPelt_base
	{
		scope=2;
		displayName="Baby Raptor Flesh - Blue";
		descriptionShort="This was taken from a baby dino. A blue baby dino that's probably shivering as you read this.";
		itemSize[]={5,3};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = 
		{
			"MoreDinosHC\data\peltRaptorBlue\peltRaptorBlue_co.paa"
		};
		hiddenSelectionsMaterials[] = {"MoreDinosHC\data\peltRaptorBlue\peltRaptorBlue.rvmat"};
	};
	class MD_Pelt_RaptorBlueAdult: RaptorPelt_base
	{
		scope=2;
		displayName="Adult Raptor Flesh - Blue";
		descriptionShort="This skin came from an adult blue raptor..";
		itemSize[]={5,3};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = 
		{
			"MoreDinosHC\data\peltRaptorBlue\peltRaptorBlue_co.paa"
		};
		hiddenSelectionsMaterials[] = {"MoreDinosHC\data\peltRaptorBlue\peltRaptorBlue.rvmat"};
	};

	// RaptorIdrex Pelts
	class MD_Pelt_RaptorIdrex: RaptorPelt_base
	{
		scope=2;
		displayName="Idrex Raptor Flesh";
		descriptionShort="This skin was probably worn by one of those balding gray raptors.";
		itemSize[]={5,3};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = 
		{
			"MoreDinosHC\data\peltRaptorIdrex\peltRaptorIdrex_co.paa"
		};
		hiddenSelectionsMaterials[] = {"MoreDinosHC\data\peltRaptorIdrex\peltRaptorIdrex.rvmat"};
	};
	class MD_Pelt_RaptorIdrexBaby: RaptorPelt_base
	{
		scope=2;
		displayName="Baby Idrex Raptor Flesh";
		descriptionShort="Another skinned baby? This one appears to have been suffering from hair loss. Tragic.";
		itemSize[]={5,3};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = 
		{
			"MoreDinosHC\data\peltRaptorIdrex\peltRaptorIdrex_co.paa"
		};
		hiddenSelectionsMaterials[] = {"MoreDinosHC\data\peltRaptorIdrex\peltRaptorIdrex.rvmat"};
	};
	class MD_Pelt_RaptorIdrexAdult: RaptorPelt_base
	{
		scope=2;
		displayName="Adult Idrex Raptor Flesh";
		descriptionShort="This loose skin must have been worn by the grandfather of all balding raptors.";
		itemSize[]={5,3};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = 
		{
			"MoreDinosHC\data\peltRaptorIdrex\peltRaptorIdrex_co.paa"
		};
		hiddenSelectionsMaterials[] = {"MoreDinosHC\data\peltRaptorIdrex\peltRaptorIdrex.rvmat"};
	};

	// Tricero Pelts
	class MD_Pelt_Tricero: TRexPelt_base
	{
		scope=2;
		displayName="Tricero Flesh";
		descriptionShort="This skin was definitely not stolen from the body of a Tricero.";
		weight=1800;
		itemSize[]={7,4};
		hiddenSelections[] = {"camo","zbytek"};
		hiddenSelectionsTextures[] = 
		{
			"MoreDinosHC\data\peltTricero\peltTricero_co.paa",
			"MoreDinosHC\data\peltTricero\peltTricero_co.paa"
		};
		hiddenSelectionsMaterials[] = {"MoreDinosHC\data\peltTricero\peltTricero.rvmat"};
	};
	class MD_Pelt_TriceroBaby: TRexPelt_base
	{
		scope=2;
		displayName="Baby Tricero Flesh";
		descriptionShort="This skin was created by a Baby Tricero and then stolen by a hunter.";
		weight=1800;
		itemSize[]={7,4};
		hiddenSelections[] = {"camo","zbytek"};
		hiddenSelectionsTextures[] = 
		{
			"MoreDinosHC\data\peltTricero\peltTricero_co.paa",
			"MoreDinosHC\data\peltTricero\peltTricero_co.paa"
		};
		hiddenSelectionsMaterials[] = {"MoreDinosHC\data\peltTricero\peltTricero.rvmat"};
	};
	class MD_Pelt_TriceroAdult: TRexPelt_base
	{
		scope=2;
		displayName="Adult Tricero Flesh";
		descriptionShort="This skin once belonged to a massive Tricero.";
		weight=1800;
		itemSize[]={7,4};
		hiddenSelections[] = {"camo","zbytek"};
		hiddenSelectionsTextures[] = 
		{
			"MoreDinosHC\data\peltTricero\peltTricero_co.paa",
			"MoreDinosHC\data\peltTricero\peltTricero_co.paa"
		};
		hiddenSelectionsMaterials[] = {"MoreDinosHC\data\peltTricero\peltTricero.rvmat"};
	};

	// T-Rex Pelts
	class MD_Pelt_TRex: TRexPelt_base
	{
		scope=2;
		displayName="T-Rex Flesh";
		descriptionShort="So you took it down and then stole it's skin?";
		weight=2000;
		itemSize[]={8,5};
		hiddenSelections[] = {"camo","zbytek"};
		hiddenSelectionsTextures[] = 
		{
			"MoreDinosHC\data\peltTRex\peltTRex_co.paa",
			"MoreDinosHC\data\peltTRex\peltTRex_co.paa"
		};
		hiddenSelectionsMaterials[] = {"MoreDinosHC\data\peltTRex\peltTRex.rvmat"};
	};
	class MD_Pelt_TRexBaby: TRexPelt_base
	{
		scope=2;
		displayName="Baby T-Rex Flesh";
		descriptionShort="You want a cookie for skinning a baby? There's no cookies for you here.";
		weight=1500;
		itemSize[]={8,5};
		hiddenSelections[] = {"camo","zbytek"};
		hiddenSelectionsTextures[] = 
		{
			"MoreDinosHC\data\peltTRex\peltTRex_co.paa",
			"MoreDinosHC\data\peltTRex\peltTRex_co.paa"
		};
		hiddenSelectionsMaterials[] = {"MoreDinosHC\data\peltTRex\peltTRex.rvmat"};
	};
	class MD_Pelt_TRexAdult: TRexPelt_base
	{
		scope=2;
		displayName="Adult T-Rex Flesh";
		descriptionShort="Some rough skin from a small angry boi that doesn't exfoliate.";
		weight=2500;
		itemSize[]={8,5};
		hiddenSelections[] = {"camo","zbytek"};
		hiddenSelectionsTextures[] = 
		{
			"MoreDinosHC\data\peltTRex\peltTRex_co.paa",
			"MoreDinosHC\data\peltTRex\peltTRex_co.paa"
		};
		hiddenSelectionsMaterials[] = {"MoreDinosHC\data\peltTRex\peltTRex.rvmat"};
	};
	class MD_Pelt_TRexGiant: TRexPelt_base
	{
		scope=2;
		displayName="Giant T-Rex Flesh";
		descriptionShort="You stopped the big angry boi during his rampage, so here's his skin as a reward.";
		weight=3000;
		itemSize[]={8,5};
		hiddenSelections[] = {"camo","zbytek"};
		hiddenSelectionsTextures[] = 
		{
			"MoreDinosHC\data\peltTRex\peltTRex_co.paa",
			"MoreDinosHC\data\peltTRex\peltTRex_co.paa"
		};
		hiddenSelectionsMaterials[] = {"MoreDinosHC\data\peltTRex\peltTRex.rvmat"};
	};

};