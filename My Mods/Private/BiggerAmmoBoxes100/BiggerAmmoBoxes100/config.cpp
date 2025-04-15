class CfgPatches
{
	class Krak3nsBiggerAmmoBoxes100
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Ammunition"
		};
	};
};
class CfgVehicles
{
    class Box_Base;

// Vanilla
	class AmmoBox_556x45_100Rnd: Box_Base
	{
		scope=2;
		displayName="5.56x45 - 100 Round Box";
		descriptionShort="A box of ammo that holds 100 rounds of 5.56x45";
		model="\dz\weapons\ammunition\556_20RoundBox.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		weight=85;
		class Resources
		{
			class Ammo_556x45
			{
				value=100;
				variable="quantity";
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset="ammoboxUnpack_SoundSet";
					id=70;
				};
			};
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"BiggerAmmoBoxes100\data\AmmoBox_556x45_100Rnd_co.paa"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset="ammoboxUnpack_SoundSet";
					id=70;
				};
			};
		};
	};
	class AmmoBox_556x45Tracer_100Rnd: Box_Base
	{
		scope=2;
		displayName="5.56x45 Tracer - 100 Round Box";
		descriptionShort="A box of ammo that holds 100 rounds of 5.56x45 Tracer";
		model="\dz\weapons\ammunition\556_20RoundBox.p3d";
		debug_ItemCategory=5;
		iconType=1;
		rotationFlags=17;
		weight=85;
		class Resources
		{
			class Ammo_556x45Tracer
			{
				value=100;
				variable="quantity";
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset="ammoboxUnpack_SoundSet";
					id=70;
				};
			};
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"BiggerAmmoBoxes100\data\AmmoBox_556x45Tracer_100Rnd_co.paa"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset="ammoboxUnpack_SoundSet";
					id=70;
				};
			};
		};
	};
    class AmmoBox_308Win_100Rnd: Box_Base
	{
		scope=2;
		displayName="308 Winchester - 100 Round Box";
		descriptionShort="A box of ammo that holds 100 rounds of 308 Winchester";
		model="\dz\weapons\ammunition\308Win_20RoundBox.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		weight=205;
        class Resources
		{
			class Ammo_308Win
			{
				value=100;
				variable="quantity";
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset="ammoboxUnpack_SoundSet";
					id=70;
				};
			};
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"BiggerAmmoBoxes100\data\AmmoBox_308Win_100Rnd_co.paa"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset="ammoboxUnpack_SoundSet";
					id=70;
				};
			};
		};
	};
    class AmmoBox_308WinTracer_100Rnd: Box_Base
	{
		scope=2;
		displayName="308 Winchester Tracer - 100 Round Box";
		descriptionShort="A box of ammo that holds 100 rounds of 308 Winchester Tracer";
		model="\dz\weapons\ammunition\308Win_20RoundBox.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		weight=185;
        class Resources
		{
			class Ammo_308WinTracer
			{
				value=100;
				variable="quantity";
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset="ammoboxUnpack_SoundSet";
					id=70;
				};
			};
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"BiggerAmmoBoxes100\data\AmmoBox_308WinTracer_100Rnd_co.paa"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset="ammoboxUnpack_SoundSet";
					id=70;
				};
			};
		};
	};
    class AmmoBox_762x54_100Rnd: Box_Base
	{
		scope=2;
		displayName="7.62x54 - 100 Round Box";
		descriptionShort="A box of ammo that holds 100 rounds of 7.62x54";
		model="\dz\weapons\ammunition\762_20RoundBox.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		weight=185;
        class Resources
		{
			class Ammo_762x54
			{
				value=100;
				variable="quantity";
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset="ammoboxUnpack_SoundSet";
					id=70;
				};
			};
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"BiggerAmmoBoxes100\data\AmmoBox_762x54_100Rnd_co.paa"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset="ammoboxUnpack_SoundSet";
					id=70;
				};
			};
		};
	};
    class AmmoBox_762x54Tracer_100Rnd: Box_Base
	{
		scope=2;
		displayName="7.62x54 Tracer - 100 Round Box";
		descriptionShort="A box of ammo that holds 100 rounds of 7.62x54 Tracer";
		model="\dz\weapons\ammunition\762_20RoundBox.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		weight=185;
        class Resources
		{
			class Ammo_762x54Tracer
			{
				value=100;
				variable="quantity";
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset="ammoboxUnpack_SoundSet";
					id=70;
				};
			};
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"BiggerAmmoBoxes100\data\AmmoBox_762x54Tracer_100Rnd_co.paa"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset="ammoboxUnpack_SoundSet";
					id=70;
				};
			};
		};
	};
    class AmmoBox_762x39_100Rnd: Box_Base
	{
		scope=2;
		displayName="7.62x39 - 100 Round Box";
		descriptionShort="A box of ammo that holds 100 rounds of 7.62x39";
		model="\dz\weapons\ammunition\762x39_20RoundBox.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		weight=165;
        class Resources
		{
			class Ammo_762x39
			{
				value=100;
				variable="quantity";
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset="ammoboxUnpack_SoundSet";
					id=70;
				};
			};
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"BiggerAmmoBoxes100\data\AmmoBox_762x39_100Rnd_co.paa"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset="ammoboxUnpack_SoundSet";
					id=70;
				};
			};
		};
	};
    class AmmoBox_762x39Tracer_100Rnd: Box_Base
	{
		scope=2;
		displayName="7.62x39 Tracer - 100 Round Box";
		descriptionShort="A box of ammo that holds 100 rounds of 7.62x39 Tracer";
		model="\dz\weapons\ammunition\762x39_20RoundBox.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		weight=165;
        class Resources
		{
			class Ammo_762x39Tracer
			{
				value=100;
				variable="quantity";
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset="ammoboxUnpack_SoundSet";
					id=70;
				};
			};
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"BiggerAmmoBoxes100\data\AmmoBox_762x39Tracer_100Rnd_co.paa"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset="ammoboxUnpack_SoundSet";
					id=70;
				};
			};
		};
	};
    class AmmoBox_357_100Rnd: Box_Base
	{
		scope=2;
		displayName=".357 - 100 Round Box";
		descriptionShort="A box of ammo that holds 100 rounds of .357";
		model="\dz\weapons\ammunition\357_20RoundBox.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		weight=165;
        class Resources
		{
			class Ammo_357
			{
				value=100;
				variable="quantity";
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset="ammoboxUnpack_SoundSet";
					id=70;
				};
			};
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"BiggerAmmoBoxes100\data\AmmoBox_357_100Rnd_co.paa"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset="ammoboxUnpack_SoundSet";
					id=70;
				};
			};
		};
	};
    class AmmoBox_45ACP_100Rnd: Box_Base
	{
		scope=2;
		displayName="45ACP - 100 Round Box";
		descriptionShort="A box of ammo that holds 100 rounds of 45ACP";
		model="\dz\weapons\ammunition\45acp_25rnd_box.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		weight=305;
        class Resources
		{
			class Ammo_45ACP
			{
				value=100;
				variable="quantity";
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset="ammoboxUnpack_SoundSet";
					id=70;
				};
			};
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"BiggerAmmoBoxes100\data\AmmoBox_45ACP_100Rnd_co.paa"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset="ammoboxUnpack_SoundSet";
					id=70;
				};
			};
		};
	};
    class AmmoBox_9x19_100Rnd: Box_Base
	{
		scope=2;
		displayName="9x19 - 100 Round Box";
		descriptionShort="A box of ammo that holds 100 rounds of 9x19";
		model="\dz\weapons\ammunition\9mm_25rnd_box.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		weight=205;
        class Resources
		{
			class Ammo_9x19
			{
				value=100;
				variable="quantity";
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset="ammoboxUnpack_SoundSet";
					id=70;
				};
			};
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"BiggerAmmoBoxes100\data\AmmoBox_9x19_100Rnd_co.paa"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset="ammoboxUnpack_SoundSet";
					id=70;
				};
			};
		};
	};
    class AmmoBox_380_100Rnd: Box_Base
	{
		scope=2;
		displayName=".380 - 100 Round Box";
		descriptionShort="A box of ammo that holds 100 rounds of .380";
		model="\dz\weapons\ammunition\380auto_35RoundBox.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		weight=215;
        class Resources
		{
			class Ammo_380
			{
				value=100;
				variable="quantity";
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset="ammoboxUnpack_SoundSet";
					id=70;
				};
			};
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"BiggerAmmoBoxes100\data\AmmoBox_380_100Rnd_co.paa"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset="ammoboxUnpack_SoundSet";
					id=70;
				};
			};
		};
	};
    class AmmoBox_00buck_100Rnd: Box_Base
	{
		scope=2;
		displayName="12ga Buckshot - 100 Shell Box";
		descriptionShort="A box of ammo that holds 100 rounds of 12ga Buckshot";
		model="\dz\weapons\ammunition\00Buck_10RoundBox.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		weight=355;
        class Resources
		{
			class Ammo_12gaPellets
			{
				value=100;
				variable="quantity";
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset="ammoboxUnpack_SoundSet";
					id=70;
				};
			};
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"BiggerAmmoBoxes100\data\AmmoBox_00buck_100Rnd_co.paa"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset="ammoboxUnpack_SoundSet";
					id=70;
				};
			};
		};
	};
    class AmmoBox_12gaSlug_100Rnd: Box_Base
	{
		scope=2;
		displayName="12ga Slugs - 100 Shell Box";
		descriptionShort="A box of ammo that holds 100 rounds of 12ga Slugs";
		model="\dz\weapons\ammunition\00Buck_10RoundBox.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		weight=355;
        class Resources
		{
			class Ammo_12gaSlug
			{
				value=100;
				variable="quantity";
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset="ammoboxUnpack_SoundSet";
					id=70;
				};
			};
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"DZ\weapons\ammunition\data\12ga_rifledslug_10roundbox_co.paa"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset="ammoboxUnpack_SoundSet";
					id=70;
				};
			};
		};
	};
    class AmmoBox_12gaRubberSlug_100Rnd: Box_Base
	{
		scope=2;
		displayName="12ga Rubber Slugs - 100 Shell Box";
		descriptionShort="A box of ammo that holds 100 rounds of 12ga Rubber Slugs";
		model="\dz\weapons\ammunition\00Buck_10RoundBox.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		weight=85;
        class Resources
		{
			class Ammo_12gaRubberSlug
			{
				value=100;
				variable="quantity";
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset="ammoboxUnpack_SoundSet";
					id=70;
				};
			};
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"DZ\weapons\ammunition\data\12ga_rubberbaton_box.paa"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset="ammoboxUnpack_SoundSet";
					id=70;
				};
			};
		};
	};
    class AmmoBox_12gaBeanbag_100Rnd: Box_Base
	{
		scope=2;
		displayName="12ga Beanbags - 100 Bag Box";
		descriptionShort="A box of ammo that holds 100 12ga Beanbags";
		model="\dz\weapons\ammunition\00Buck_10RoundBox.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		weight=85;
        class Resources
		{
			class Ammo_12gaBeanbag
			{
				value=100;
				variable="quantity";
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset="ammoboxUnpack_SoundSet";
					id=70;
				};
			};
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"DZ\weapons\ammunition\data\12ga_rubberbaton_box.paa"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset="ammoboxUnpack_SoundSet";
					id=70;
				};
			};
		};
	};
    class AmmoBox_545x39_100Rnd: Box_Base
	{
		scope=2;
		displayName="5.45x39 - 100 Round Box";
		descriptionShort="A box of ammo that holds 100 rounds of 5.45x39";
		model="\dz\weapons\ammunition\545x39_20RoundBox.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		weight=85;
        class Resources
		{
			class Ammo_545x39
			{
				value=100;
				variable="quantity";
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset="ammoboxUnpack_SoundSet";
					id=70;
				};
			};
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"BiggerAmmoBoxes100\data\AmmoBox_545x39_100Rnd_co.paa"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset="ammoboxUnpack_SoundSet";
					id=70;
				};
			};
		};
	};
    class AmmoBox_545x39Tracer_100Rnd: Box_Base
	{
		scope=2;
		displayName="5.45x39 Tracer - 100 Round Box";
		descriptionShort="A box of ammo that holds 100 rounds of 5.45x39 Tracer";
		model="\dz\weapons\ammunition\545x39_20RoundBox.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		weight=85;
        class Resources
		{
			class Ammo_545x39Tracer
			{
				value=100;
				variable="quantity";
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset="ammoboxUnpack_SoundSet";
					id=70;
				};
			};
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"BiggerAmmoBoxes100\data\AmmoBox_545x39Tracer_100Rnd_co.paa"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset="ammoboxUnpack_SoundSet";
					id=70;
				};
			};
		};
	};
    class AmmoBox_9x39AP_100Rnd: Box_Base
	{
		scope=2;
		displayName="9x39 AP - 100 Round Box";
		descriptionShort="A box of ammo that holds 100 rounds of 9x39 AP";
		model="\dz\weapons\ammunition\9x39_20RoundBox.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		weight=325;
        class Resources
		{
			class Ammo_9x39AP
			{
				value=100;
				variable="quantity";
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset="ammoboxUnpack_SoundSet";
					id=70;
				};
			};
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"BiggerAmmoBoxes100\data\AmmoBox_9x39AP_100Rnd_co.paa"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset="ammoboxUnpack_SoundSet";
					id=70;
				};
			};
		};
	};
    class AmmoBox_9x39_100Rnd: Box_Base
	{
		scope=2;
		displayName="9x39 - 100 Round Box";
		descriptionShort="A box of ammo that holds 100 rounds of 9x39";
		model="\dz\weapons\ammunition\9x39_20RoundBox.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		weight=345;
        class Resources
		{
			class Ammo_9x39
			{
				value=100;
				variable="quantity";
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset="ammoboxUnpack_SoundSet";
					id=70;
				};
			};
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"BiggerAmmoBoxes100\data\AmmoBox_9x39AP_100Rnd_co.paa"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset="ammoboxUnpack_SoundSet";
					id=70;
				};
			};
		};
	};
    class AmmoBox_22_100Rnd: Box_Base
	{
		scope=2;
		displayName="22LR - 100 Round Box";
		descriptionShort="A box of ammo that holds 100 rounds of .22LR";
		model="\dz\weapons\ammunition\22_50RoundBox.p3d";
		debug_ItemCategory=5;
		rotationFlags=12;
		weight=155;
        class Resources
		{
			class Ammo_22
			{
				value=100;
				variable="quantity";
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset="ammoboxUnpack_SoundSet";
					id=70;
				};
			};
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"BiggerAmmoBoxes100\data\AmmoBox_22LR_100Rnd_co.paa"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset="ammoboxUnpack_SoundSet";
					id=70;
				};
			};
		};
	};

};