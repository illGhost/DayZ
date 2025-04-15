class CfgPatches
{
	class ParagonArmorBuff
	{
		requiredAddons[] = 
        {
            "DZ_Data",
            "DZ_Characters_Vests",
            "DZ_Scripts",
            "Paragon_Ammo_12x55",
            "Paragon_Ammo_20mm",
            "Paragon_Ammo_50",
            "Paragon_Ammo_300BLK",
            "Paragon_Ammo_338",
            "Paragon_Ammo_408",
            "Paragon_Ammo_Plasma"
        };
		units[] = {};
		weapons[] = {};
	};
};
class CfgAmmo
{
	class DefaultAmmo;
	class Bullet_Base;

	class Paragon_Bullet_Plasma: Bullet_Base
	{
		scope = 2;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 1;
			class Health
			{
				damage = 2250;
			};
			class Blood
			{
				damage = 2250;
			};
			class Shock
			{
				damage = 2250;
			};
		};
	};
    class Paragon_Bullet_408: Bullet_Base
	{
		scope = 2;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 1;
			class Health
			{
				damage = 900;
			};
			class Blood
			{
				damage = 175;
			};
			class Shock
			{
				damage = 175;
			};
		};
	};
    class Paragon_Bullet_338: Bullet_Base
	{
		scope = 2;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 1;
			class Health
			{
				damage = 450;
			};
			class Blood
			{
				damage = 450;
			};
			class Shock
			{
				damage = 450;
			};
		};
	};
    class Paragon_Bullet_300BLK: Bullet_Base
	{
		scope = 2;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 1;
			class Health
			{
				damage = 130;
			};
			class Blood
			{
				damage = 130;
			};
			class Shock
			{
				damage = 130;
			};
		};
	};
    class Paragon_Bullet_50: Bullet_Base
	{
		scope = 2;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 1;
			class Health
			{
				damage = 1500;
			};
			class Blood
			{
				damage = 1500;
			};
			class Shock
			{
				damage = 1500;
			};
		};
	};
    class Paragon_Bullet_20mm: Bullet_Base
	{
		scope = 2;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 1;
			class Health
			{
				damage = 2100;
			};
			class Blood
			{
				damage = 2100;
			};
			class Shock
			{
				damage = 2100;
			};
		};
	};
    class Paragon_Bullet_12x55: Bullet_Base
	{
		scope = 2;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 1;
			class Health
			{
				damage = 1350;
			};
			class Blood
			{
				damage = 1350;
			};
			class Shock
			{
				damage = 1350;
			};
		};
	};
};
class CfgMagazines
{
	class Ammunition_Base;
	class Paragon_Ammo_Plasma: Ammunition_Base
	{
		scope = 2;
		descriptionShort = "The Plasma bullet does 2250 damage and a speed of 3000m/s";
	};
    class Paragon_Ammo_408: Ammunition_Base
	{
		scope = 2;
		descriptionShort = "The 408 bullet does 900 damage and a speed of 1600m/s";
    };
    class Paragon_Ammo_338: Ammunition_Base
	{
		scope = 2;
		descriptionShort = "The 338 bullet does 450 damage and a speed of 1000m/s";
    };
    class Paragon_Ammo_300BLK: Ammunition_Base
	{
		scope = 2;
		descriptionShort = "The 300 Blackout bullet does 130 damage and a speed of 1000m/s";
	};
    class Paragon_Ammo_50: Ammunition_Base
	{
		scope = 2;
		descriptionShort = "The 50 BMG bullet does 1500 damage and a speed of 2000m/s";
	};
    class Paragon_Ammo_20mm: Ammunition_Base
	{
		scope = 2;
		descriptionShort = "The 20mm bullet does 2100 damage and a speed of 3000m/s";
	};
    class Paragon_Ammo_12x55: Ammunition_Base
	{
		scope = 2;
		descriptionShort = "the 12.7x55 bullet does 1350 damage and a speed of 2000m/s";
    };
};