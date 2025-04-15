class CfgPatches
{
	class Krak3nsBiggerAmmoBoxes500
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

	class AmmoBox_556x45_500Rnd: Box_Base
	{
		scope=2;
		displayName="5.56x45 - 500 Round Box";
		descriptionShort="A box of ammo that holds 500 rounds of 5.56x45";
		model="\dz\weapons\ammunition\556_20RoundBox.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		weight=85;
		class Resources
		{
			class Ammo_556x45
			{
				value=500;
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
	};
	class AmmoBox_556x45Tracer_500Rnd: Box_Base
	{
		scope=2;
		displayName="5.56x45 Tracer - 500 Round Box";
		descriptionShort="A box of ammo that holds 500 rounds of 5.56x45 Tracer";
		model="\dz\weapons\ammunition\556_20RoundBox.p3d";
		debug_ItemCategory=5;
		iconType=1;
		rotationFlags=17;
		weight=85;
		class Resources
		{
			class Ammo_556x45Tracer
			{
				value=500;
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
	};
    class AmmoBox_308Win_500Rnd: Box_Base
	{
		scope=2;
		displayName="308 Winchester - 500 Round Box";
		descriptionShort="A box of ammo that holds 500 rounds of 308 Winchester";
		model="\dz\weapons\ammunition\308Win_20RoundBox.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		weight=205;
        class Resources
		{
			class Ammo_308Win
			{
				value=500;
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
	};
    class AmmoBox_308WinTracer_500Rnd: Box_Base
	{
		scope=2;
		displayName="308 Winchester Tracer - 500 Round Box";
		descriptionShort="A box of ammo that holds 500 rounds of 308 Winchester Tracer";
		model="\dz\weapons\ammunition\308Win_20RoundBox.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		weight=185;
        class Resources
		{
			class Ammo_308WinTracer
			{
				value=500;
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
	};
    class AmmoBox_762x54_500Rnd: Box_Base
	{
		scope=2;
		displayName="7.62x54 - 500 Round Box";
		descriptionShort="A box of ammo that holds 500 rounds of 7.62x54";
		model="\dz\weapons\ammunition\762_20RoundBox.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		weight=185;
        class Resources
		{
			class Ammo_762x54
			{
				value=500;
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
	};
    class AmmoBox_762x54Tracer_500Rnd: Box_Base
	{
		scope=2;
		displayName="7.62x54 Tracer - 500 Round Box";
		descriptionShort="A box of ammo that holds 500 rounds of 7.62x54 Tracer";
		model="\dz\weapons\ammunition\762_20RoundBox.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		weight=185;
        class Resources
		{
			class Ammo_762x54Tracer
			{
				value=500;
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
	};
    class AmmoBox_762x39_500Rnd: Box_Base
	{
		scope=2;
		displayName="7.62x39 - 500 Round Box";
		descriptionShort="A box of ammo that holds 500 rounds of 7.62x39";
		model="\dz\weapons\ammunition\762x39_20RoundBox.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		weight=165;
        class Resources
		{
			class Ammo_762x39
			{
				value=500;
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
	};
    class AmmoBox_762x39Tracer_500Rnd: Box_Base
	{
		scope=2;
		displayName="7.62x39 Tracer - 500 Round Box";
		descriptionShort="A box of ammo that holds 500 rounds of 7.62x39 Tracer";
		model="\dz\weapons\ammunition\762x39_20RoundBox.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		weight=165;
        class Resources
		{
			class Ammo_762x39Tracer
			{
				value=500;
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
	};
    class AmmoBox_357_500Rnd: Box_Base
	{
		scope=2;
		displayName=".357 - 500 Round Box";
		descriptionShort="A box of ammo that holds 500 rounds of .357";
		model="\dz\weapons\ammunition\357_20RoundBox.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		weight=165;
        class Resources
		{
			class Ammo_357
			{
				value=500;
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
	};
    class AmmoBox_45ACP_500Rnd: Box_Base
	{
		scope=2;
		displayName="45ACP - 500 Round Box";
		descriptionShort="A box of ammo that holds 500 rounds of 45ACP";
		model="\dz\weapons\ammunition\45acp_25rnd_box.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		weight=305;
        class Resources
		{
			class Ammo_45ACP
			{
				value=500;
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
	};
    class AmmoBox_9x19_500Rnd: Box_Base
	{
		scope=2;
		displayName="9x19 - 500 Round Box";
		descriptionShort="A box of ammo that holds 500 rounds of 9x19";
		model="\dz\weapons\ammunition\9mm_25rnd_box.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		weight=205;
        class Resources
		{
			class Ammo_9x19
			{
				value=500;
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
	};
    class AmmoBox_380_500Rnd: Box_Base
	{
		scope=2;
		displayName=".380 - 500 Round Box";
		descriptionShort="A box of ammo that holds 500 rounds of .380";
		model="\dz\weapons\ammunition\380auto_35RoundBox.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		weight=215;
        class Resources
		{
			class Ammo_380
			{
				value=500;
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
	};
    class AmmoBox_00buck_500Rnd: Box_Base
	{
		scope=2;
		displayName="12ga Buckshot - 500 Shell Box";
		descriptionShort="A box of ammo that holds 500 rounds of 12ga Buckshot";
		model="\dz\weapons\ammunition\00Buck_10RoundBox.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		weight=355;
        class Resources
		{
			class Ammo_12gaPellets
			{
				value=500;
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
	};
    class AmmoBox_12gaSlug_500Rnd: Box_Base
	{
		scope=2;
		displayName="12ga Slugs - 500 Shell Box";
		descriptionShort="A box of ammo that holds 500 rounds of 12ga Slugs";
		model="\dz\weapons\ammunition\00Buck_10RoundBox.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		weight=355;
        class Resources
		{
			class Ammo_12gaSlug
			{
				value=500;
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
	};
    class AmmoBox_12gaRubberSlug_500Rnd: Box_Base
	{
		scope=2;
		displayName="12ga Rubber Slugs - 500 Shell Box";
		descriptionShort="A box of ammo that holds 500 rounds of 12ga Rubber Slugs";
		model="\dz\weapons\ammunition\00Buck_10RoundBox.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		weight=85;
        class Resources
		{
			class Ammo_12gaRubberSlug
			{
				value=500;
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
	};
    class AmmoBox_12gaBeanbag_500Rnd: Box_Base
	{
		scope=2;
		displayName="12ga Beanbags - 500 Bag Box";
		descriptionShort="A box of ammo that holds 500 12ga Beanbags";
		model="\dz\weapons\ammunition\00Buck_10RoundBox.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		weight=85;
        class Resources
		{
			class Ammo_12gaBeanbag
			{
				value=500;
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
	};
    class AmmoBox_545x39_500Rnd: Box_Base
	{
		scope=2;
		displayName="5.45x39 - 500 Round Box";
		descriptionShort="A box of ammo that holds 500 rounds of 5.45x39";
		model="\dz\weapons\ammunition\545x39_20RoundBox.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		weight=85;
        class Resources
		{
			class Ammo_545x39
			{
				value=500;
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
	};
    class AmmoBox_545x39Tracer_500Rnd: Box_Base
	{
		scope=2;
		displayName="5.45x39 Tracer - 500 Round Box";
		descriptionShort="A box of ammo that holds 500 rounds of 5.45x39 Tracer";
		model="\dz\weapons\ammunition\545x39_20RoundBox.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		weight=85;
        class Resources
		{
			class Ammo_545x39Tracer
			{
				value=500;
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
	};
    class AmmoBox_9x39AP_500Rnd: Box_Base
	{
		scope=2;
		displayName="9x39 AP - 500 Round Box";
		descriptionShort="A box of ammo that holds 500 rounds of 9x39 AP";
		model="\dz\weapons\ammunition\9x39_20RoundBox.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		weight=325;
        class Resources
		{
			class Ammo_9x39AP
			{
				value=500;
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
	};
    class AmmoBox_9x39_500Rnd: Box_Base
	{
		scope=2;
		displayName="9x39 - 500 Round Box";
		descriptionShort="A box of ammo that holds 500 rounds of 9x39";
		model="\dz\weapons\ammunition\9x39_20RoundBox.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		weight=345;
        class Resources
		{
			class Ammo_9x39
			{
				value=500;
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
	};
};