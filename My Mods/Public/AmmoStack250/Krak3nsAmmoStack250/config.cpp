class CfgPatches
{
	class Krak3ns_Ammo_Stack_250
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Ammunition",
			"DZ_Weapons_Explosives",
			"DZ_Weapons_Projectiles",
			"DZ_Weapons_Magazines"
		};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class Ammunition_Base: Magazine_Base{};

// Vanilla
	class Ammo_45ACP: Ammunition_Base
	{
		count=250;
	};
	class Ammo_308Win: Ammunition_Base
	{
		count=250;
	};
	class Ammo_308WinTracer: Ammunition_Base
	{
		count=250;
	};
	class Ammo_9x19: Ammunition_Base
	{
		count=250;
	};
	class Ammo_380: Ammunition_Base
	{
		count=250;
	};
	class Ammo_556x45: Ammunition_Base
	{
		count=250;
	};
	class Ammo_556x45Tracer: Ammunition_Base
	{
		count=250;
	};
	class Ammo_762x54: Ammunition_Base
	{
		count=250;
	};
	class Ammo_762x54Tracer: Ammunition_Base
	{
		count=250;
	};
	class Ammo_762x39: Ammunition_Base
	{
		count=250;
	};
	class Ammo_762x39Tracer: Ammunition_Base
	{
		count=250;
	};
	class Ammo_9x39: Ammunition_Base
	{
		count=250;
	};
	class Ammo_9x39AP: Ammunition_Base
	{
		count=250;
	};
	class Ammo_22: Ammunition_Base
	{
		count=250;
	};
	class Ammo_12gaPellets: Ammunition_Base
	{
		count=250;
	};
	class Ammo_12gaSlug: Ammunition_Base
	{
		count=250;
	};
	class Ammo_12gaRubberSlug: Ammunition_Base
	{
		count=250;
	};
	class Ammo_357: Ammunition_Base
	{
		count=250;
	};
	class Ammo_545x39: Ammunition_Base
	{
		count=250;
	};
	class Ammo_545x39Tracer: Ammunition_Base
	{
		count=250;
	};
	class Ammo_HuntingBolt: Ammunition_Base
	{
		count=250;
	};
	class Ammo_ImprovisedBolt_1: Ammunition_Base
	{
		count=250;
	};
	class Ammo_ImprovisedBolt_2: Ammunition_Base
	{
		count=250;
	};
	class Ammo_ArrowComposite: Ammunition_Base
	{
		count=250;
	};
	class Ammo_SharpStick: Ammunition_Base
	{
		count=250;
	};
	class Ammo_ArrowPrimitive: Ammunition_Base
	{
		count=250;
	};
	class Ammo_ArrowBoned: Ammunition_Base
	{
		count=250;
	};
	class Ammo_ArrowBolt: Ammunition_Base
	{
		count=250;
	};
	class Ammo_DartSyringe: Ammunition_Base
	{
		count=250;
	};
	class Ammo_CupidsBolt: Ammunition_Base
	{
		count=250;
	};
	class Ammo_Flare: Ammunition_Base
	{
		count=250;
	};
	class Ammo_FlareBlue: Ammunition_Base
	{
		count=250;
	};
	class Ammo_FlareRed: Ammunition_Base
	{
		count=250;
	};
	class Ammo_FlareGreen: Ammunition_Base
	{
		count=250;
	};
	class Ammo_40mm_Explosive: Ammunition_Base
	{
		count=50;
	};
	class Ammo_40mm_ChemGas: Ammunition_Base
	{
		count=50;
	};
	class Ammo_40mm_Smoke_Red: Ammunition_Base
	{
		count=50;
	};
	class Ammo_40mm_Smoke_Green: Ammunition_Base
	{
		count=50;
	};
	class Ammo_40mm_Smoke_White: Ammunition_Base
	{
		count=50;
	};
	class Ammo_40mm_Smoke_Black: Ammunition_Base
	{
		count=50;
	};
	class Grenade_ChemGas: Ammunition_Base
	{
		count=50;
	};
	class RGD5Grenade: Ammunition_Base
	{
		count=50;
	};
	class M67Grenade: Ammunition_Base
	{
		count=50;
	};
	class M18SmokeGrenade: Ammunition_Base
	{
		count=50;
	};
	class RDG2SmokeGrenade: Ammunition_Base
	{
		count=50;
	};

// Ammunition Expansion
	class Ammo_AE792x33: Ammunition_Base
	{
		count=250;
	};
	class Ammo_AE46x30AP: Ammunition_Base
	{
		count=250;
	};
	class Ammo_AE46x30: Ammunition_Base
	{
		count=250;
	};
	class Ammo_AE57x28AP: Ammunition_Base
	{
		count=250;
	};
	class Ammo_AE57x28: Ammunition_Base
	{
		count=250;
	};
	class Ammo_AE762x25: Ammunition_Base
	{
		count=250;
	};
	class Ammo_AE408: Ammunition_Base
	{
		count=250;
	};
	class Ammo_AE792x57: Ammunition_Base
	{
		count=250;
	};
	class Ammo_AE127x99: Ammunition_Base
	{
		count=250;
	};
	class Ammo_AE50AE: Ammunition_Base
	{
		count=250;
	};
	class Ammo_AE300: Ammunition_Base
	{
		count=250;
	};
	class Ammo_AE338: Ammunition_Base
	{
		count=250;
	};
	class Ammo_AE68x43: Ammunition_Base
	{
		count=250;
	};
	class Ammo_AE40mm_HE: Ammunition_Base
	{
		count=250;
	};

// Apes Arsenal
	class Ammo_20mm: Ammunition_Base
	{
		count=250;
	};

// Arzzz Weapons
	class Arzzz_Ammo_127x108: Ammunition_Base
	{
		count=250;
	};
	class Arzzz_Ammo_127x108_HE: Ammunition_Base
	{
		count=250;
	};
	class Arzzz_Ammo_127x99: Ammunition_Base
	{
		count=250;
	};
	class Arzzz_Ammo_127x55: Ammunition_Base
	{
		count=250;
	};
	class Arzzz_Ammo_408: Ammunition_Base
	{
		count=250;
	};
	class Arzzz_Ammo_375: Ammunition_Base
	{
		count=250;
	};
	class Arzzz_Ammo_375S: Ammunition_Base
	{
		count=250;
	};
	class Arzzz_Ammo_338: Ammunition_Base
	{
		count=250;
	};
	class Arzzz_Ammo_Laser: Ammunition_Base
	{
		count=250;
	};
	class Arzzz_Ammo_DROB: Ammunition_Base
	{
		count=250;
	};
	class Arzzz_Ammo_HE: Ammunition_Base
	{
		count=250;
	};

// BallerZ SNAFU Weapon Upgrades and Textures
	class BZ_Ammo_338Cal: Ammunition_Base
	{
		count=250;
	};
	class BZ_Ammo_50Cal: Ammunition_Base
	{
		count=250;
	};
	class BZ_Ammo_145Cal: Ammunition_Base
	{
		count=250;
	};
	class BZ_Ammo_408Cal: Ammunition_Base
	{
		count=250;
	};
	class BZ_Ammo_308Cal: Ammunition_Base
	{
		count=250;
	};

// Better Arma 2 Weapons
	class BAW_Ammo_50BMG: Ammunition_Base
	{
		count=250;
	};
	class BAW_Ammo_8mm: Ammunition_Base
	{
		count=250;
	};

// Bitterroot
    class MF_Ammo_300BLK: Ammunition_Base
    {
        count = 250;
    };
    class MF_Ammo_300BLK_AP: Ammunition_Base
    {
        count = 250;
    };
    class MF_Ammo_300Savage: Ammunition_Base
    {
        count = 250;
    };
    class MF_Ammo_46x30AP: Ammunition_Base
    {
        count = 250;
    };
    class MF_Ammo_65Creedmoor: Ammunition_Base
    {
        count = 250;
    };
    class Remnants_Ammo_300WinMag: Ammunition_Base
    {
        count = 250;
    };

// Buddys Boltz
    class Ammo_HuntingBoltSmoke_White: Ammunition_Base
    {
        count = 250;
    };
    class Ammo_HuntingBoltSmoke_Red: Ammunition_Base
    {
        count = 250;
    };
    class Ammo_HuntingBoltSmoke_Green: Ammunition_Base
    {
        count = 250;
    };
    class Ammo_HuntingBoltSmoke_Black: Ammunition_Base
    {
        count = 250;
    };
    class Ammo_HuntingBoltChem: Ammunition_Base
    {
        count = 20;
    };
    class Ammo_HuntingBoltExplosive: Ammunition_Base
    {
        count = 20;
    };

// Buca Weapons
    class BC_Ammo_20mm: Ammunition_Base
    {
        count = 250;
    };
    class BC_Ammo_50Cal: Ammunition_Base
    {
        count = 250;
    };
    class BC_Ammo_408: Ammunition_Base
    {
        count = 250;
    };
    class BC_Ammo_408AP: Ammunition_Base
    {
        count = 250;
    };
    class BC_Ammo_Rail: Ammunition_Base
    {
        count = 250;
    };
    class BC_Ammo_127x55: Ammunition_Base
    {
        count = 250;
    };
    class BC_Ammo_338: Ammunition_Base
    {
        count = 250;
    };
    class BC_Ammo_46x30mm: Ammunition_Base
    {
        count = 250;
    };

// CC Weapons
	class cc_3006_Ammo: Ammunition_Base
	{
		count=250;
	};
	class CC_44_Ammo: Ammunition_Base
	{
		count=250;
	};
	class CC_65Carcano_ammo: Ammunition_Base
	{
		count=250;
	};
	class CC_50cal_Ammo: Ammunition_Base
	{
		count=250;
	};
	class CC_50AE_Ammo: Ammunition_Base
	{
		count=250;
	};
	class CC_Ion_Ammo: Ammunition_Base
	{
		count=250;
	};
	class CC_Ssk_Ammo: Ammunition_Base
	{
		count=250;
	};

// CPB Weapons
	class CPB_Ammo_9x21: Ammunition_Base
	{
		count=250;
	};
	class CPB_Ammo_new_46x30: Ammunition_Base
	{
		count=250;
	};
	class CPB_Ammo_127x55: Ammunition_Base
	{
		count=250;
	};
	class CPB_Ammo_50Cal: Ammunition_Base
	{
		count=250;
	};
	class CPB_Ammo_338: Ammunition_Base
	{
		count=250;
	};
	class CPB_Ammo_408: Ammunition_Base
	{
		count=250;
	};
	class CPB_Ammo_new_556AP: Ammunition_Base
	{
		count=250;
	};
	class CPB_Ammo_new_556APT: Ammunition_Base
	{
		count=250;
	};
	class CPB_Ammo_new_556HP: Ammunition_Base
	{
		count=250;
	};
	class CPB_Ammo_40mm_HE: Ammunition_Base
	{
		count=250;
	};
	class CPB_Ammo_40mm_BHE: Ammunition_Base
	{
		count=250;
	};
	class CPB_Ammo_40mm_Color_White: Ammunition_Base
	{
		count=250;
	};
	class CPB_Ammo_40mm_Color_Red: Ammunition_Base
	{
		count=250;
	};
	class CPB_Ammo_40mm_Color_Yellow: Ammunition_Base
	{
		count=250;
	};
	class CPB_Ammo_40mm_Color_Green: Ammunition_Base
	{
		count=250;
	};
	class CPB_Ammo_40mm_Color_Purple: Ammunition_Base
	{
		count=250;
	};

// Dead Air Weapon Pack STALKER
    class air_Ammo_792x33: Ammunition_Base
	{
		count=250;
	};
    class air_Ammo_792x57: Ammunition_Base
	{
		count=250;
	};
    class air_Ammo_9x18: Ammunition_Base
	{
		count=250;
	};
    class air_Ammo_9x18_Rubber: Ammunition_Base
	{
		count=250;
	};
    class air_Ammo_57x28: Ammunition_Base
	{
		count=250;
	};
    class air_Ammo_57x28_AP: Ammunition_Base
	{
		count=250;
	};
    class air_Ammo_127x108: Ammunition_Base
	{
		count=250;
	};
    class air_Ammo_127x108_Tracer: Ammunition_Base
	{
		count=250;
	};
    class air_Ammo_127x55: Ammunition_Base
	{
		count=250;
	};
    class air_Ammo_127x55_Tracer: Ammunition_Base
	{
		count=250;
	};
    class air_Ammo_127x99: Ammunition_Base
	{
		count=250;
	};
    class air_Ammo_127x99_Tracer: Ammunition_Base
	{
		count=250;
	};
    class air_Ammo_Crossbow_Arrow: Ammunition_Base
	{
		count=250;
	};
    class Air_Ammo_338LM: Ammunition_Base
	{
		count=250;
	};
    class Air_Ammo_338LM_Tracer: Ammunition_Base
	{
		count=250;
	};
    class Air_Ammo_408: Ammunition_Base
	{
		count=250;
	};
    class Air_Ammo_408_Tracer: Ammunition_Base
	{
		count=250;
	};
    class Ammo_Air_GP25_Flashbang: Ammunition_Base
	{
		count=250;
	};
    class Ammo_Air_GP25_Smoke_White: Ammunition_Base
	{
		count=250;
	};
    class Ammo_Air_GP25_Teargas: Ammunition_Base
	{
		count=250;
	};
    class Ammo_Air_GP25_HE: Ammunition_Base
	{
		count=250;
	};

// Deer Isle Map Ammo
	class jmc_SnowOwl_Ammo: Ammunition_Base
	{
		count=250;
	};

// Diesel Gear Weapons
    class Diesel_Ammo_338AP: Ammunition_Base
	{
		count=250;
	};
    class Diesel_Ammo_338APTracer: Ammunition_Base
	{
		count=250;
	};
    class Diesel_Ammo_338APBear: Ammunition_Base
	{
		count=250;
	};
    class Diesel_Ammo_338APBearTracer: Ammunition_Base
	{
		count=250;
	};
    class Diesel_Ammo_762x54R: Ammunition_Base
	{
		count=250;
	};
    class Diesel_Ammo_762x54RTracer: Ammunition_Base
	{
		count=250;
	};
    class Ammo_Diesel_Dart: Ammunition_Base
	{
		count=250;
	};

// Docs Weapon Pack
	class Ammo_762x25tok: Ammunition_Base
	{
		count=250;
	};
	class Ammo_145x114: Ammunition_Base
	{
		count=250;
	};
	class Ammo_127x99: Ammunition_Base
	{
		count=250;
	};
	class Ammo_556x45_AP: Ammunition_Base
	{
		count=250;
	};
	class Ammo_308Win_AP: Ammunition_Base
	{
		count=250;
	};
	class Ammo_545x39_BP: Ammunition_Base
	{
		count=250;
	};
	class Ammo_762x39_BP: Ammunition_Base
	{
		count=250;
	};
	class Ammo_3006: Ammunition_Base
	{
		count=250;
	};
	class Ammo_8mm: Ammunition_Base
	{
		count=250;
	};
	class Doc_Ammo_9x18: Ammunition_Base
	{
		count=250;
	};

// Dread Weapon Pack
	class Ammo_1rocket: Ammunition_Base
	{
		count=250;
	};
	class Ammo_2rocket: Ammunition_Base
	{
		count=250;
	};
	class Ammo_3rocket: Ammunition_Base
	{
		count=250;
	};
	class Ammo_4rocket: Ammunition_Base
	{
		count=250;
	};
	class Ammo_5rocket: Ammunition_Base
	{
		count=250;
	};
	class Ammo_6rocket: Ammunition_Base
	{
		count=250;
	};
	class Ammo_7rocket: Ammunition_Base
	{
		count=250;
	};
	class Ammo_8rocket: Ammunition_Base
	{
		count=250;
	};
	class Ammo_9rocket: Ammunition_Base
	{
		count=250;
	};
	class Ammo_10rocket: Ammunition_Base
	{
		count=250;
	};
	class Ammo_11rocket: Ammunition_Base
	{
		count=250;
	};

// EDO Weapons - Blackouts Expansive DayZ Overhaul
	class Ammo_BO_3006: Ammunition_Base
	{
		count=250;
	};
	class Ammo_BO_127x55STS: Ammunition_Base
	{
		count=250;
	};
	class Ammo_BO_65C: Ammunition_Base
	{
		count=250;
	};
	class Ammo_BO_145x114: Ammunition_Base
	{
		count=250;
	};
	class Ammo_BO_86B: Ammunition_Base
	{
		count=250;
	};
	class Ammo_BO_50BW: Ammunition_Base
	{
		count=250;
	};
	class Ammo_BO_300WinMag: Ammunition_Base
	{
		count=250;
	};
	class Ammo_BO_40mm_HE: Ammunition_Base
	{
		count=250;
	};

// Epic Weapon Pack
	class BARSIK_Ammo_12_7x55_10Rnd: Ammunition_Base
	{
		count=250;
	};
	class BARSIK_Ammo_12_7x55_50Rnd: Ammunition_Base
	{
		count=250;
	};
	class BARSIK_Ammo_12_7x55_100Rnd: Ammunition_Base
	{
		count=250;
	};

// Expansion Ammo
	class Expansion_Ammo_8mm: Ammunition_Base
	{
		count=250;
	};
	class ExpansionAmmoRPG: Ammunition_Base
	{
		count=250;
	};
	class ExpansionAmmoLAW: Ammunition_Base
	{
		count=250;
	};
	class Ammo_Expansion_M203_Smoke_White: Ammunition_Base
	{
		count=250;
	};
	class Ammo_Expansion_M203_Smoke_Red: Ammunition_Base
	{
		count=250;
	};
	class Ammo_Expansion_M203_Smoke_Green: Ammunition_Base
	{
		count=250;
	};
	class Ammo_Expansion_M203_Smoke_Yellow: Ammunition_Base
	{
		count=250;
	};
	class Ammo_Expansion_M203_Smoke_Purple: Ammunition_Base
	{
		count=250;
	};
	class Ammo_Expansion_M203_Smoke_Teargas: Ammunition_Base
	{
		count=250;
	};
	class Ammo_Expansion_M203_Sticky_Smoke_White: Ammunition_Base
	{
		count=250;
	};
	class Ammo_Expansion_M203_Sticky_Smoke_Red: Ammunition_Base
	{
		count=250;
	};
	class Ammo_Expansion_M203_Sticky_Smoke_Green: Ammunition_Base
	{
		count=250;
	};
	class Ammo_Expansion_M203_Sticky_Smoke_Yellow: Ammunition_Base
	{
		count=250;
	};
	class Ammo_Expansion_M203_Sticky_Smoke_Purple: Ammunition_Base
	{
		count=250;
	};
	class Ammo_Expansion_M203_Sticky_Smoke_Teargas: Ammunition_Base
	{
		count=250;
	};
	class Ammo_Expansion_M203_HE: Ammunition_Base
	{
		count=250;
	};
	class Ammo_Expansion_46x30: Ammunition_Base
	{
		count=250;
	};
	class Ammo_Expansion_338: Ammunition_Base
	{
		count=250;
	};
	class Expansion_Ammo_ArrowBolt: Ammunition_Base
	{
		count=250;
	};

// FOX Weapons 2.0
    class Ammo_57x28: Ammunition_Base
	{
		count=250;
	};
    class Ammo_57x28AP: Ammunition_Base
	{
		count=250;
	};
    class Ammo_9x18: Ammunition_Base
	{
		count=250;
	};
    class Ammo_9x18_exp: Ammunition_Base
	{
		count=250;
	};
    class Ammo_9x21FOX: Ammunition_Base
	{
		count=250;
	};
    class Ammo_9x21EXP: Ammunition_Base
	{
		count=250;
	};
    class Ammo_762x25fox: Ammunition_Base
	{
		count=250;
	};
    class Ammo_44MAGFOX: Ammunition_Base
	{
		count=250;
	};
    class Ammo_50AEFOX: Ammunition_Base
	{
		count=250;
	};
    class Ammo_792x33fox: Ammunition_Base
	{
		count=250;
	};
    class Ammo_6x35KAC: Ammunition_Base
	{
		count=250;
	};
    class Ammo_AACBLK: Ammunition_Base
	{
		count=250;
	};
    class Ammo_792x57FOX: Ammunition_Base
	{
		count=250;
	};
    class Ammo_93x64: Ammunition_Base
	{
		count=250;
	};
    class Ammo_338LP_FOX: Ammunition_Base
	{
		count=250;
	};

// GDZ Crossbow
	class Crossbow_ArrowBolt: Ammunition_Base
	{
		count=250;
	};

// GDZ Crossbow 2
	class Ammo_Crossbow2_ArrowBolt: Ammunition_Base
	{
		count=250;
	};
	class Ammo_Crossbow2_ArrowBolt2: Ammunition_Base
	{
		count=250;
	};

// Huge Advanced Weapon Pack
	class Ammo_50Beowolf: Ammunition_Base
	{
		count=250;
	};
	class Ammo_12_7_55: Ammunition_Base
	{
		count=250;
	};
	class Ammo_300AAC: Ammunition_Base
	{
		count=250;
	};
	class Ammo_300AAC_AP: Ammunition_Base
	{
		count=250;
	};
	class Ammo_308WinAP: Ammunition_Base
	{
		count=250;
	};
	class Ammo_338LapuaMagnum: Ammunition_Base
	{
		count=250;
	};
	class Ammo_408CheyTac: Ammunition_Base
	{
		count=250;
	};
	class Ammo_454Casull: Ammunition_Base
	{
		count=250;
	};
	class Ammo_556x45AP: Ammunition_Base
	{
		count=250;
	};
	class Ammo_50BMG: Ammunition_Base
	{
		count=250;
	};
	class Ammo_50BMG_AP: Ammunition_Base
	{
		count=250;
	};
	class Ammo_65Creedmore: Ammunition_Base
	{
		count=250;
	};
	class Ammo_762x39AP: Ammunition_Base
	{
		count=250;
	};

// IMP Weapons
	class IMP_Ammo_127x42: Ammunition_Base
	{
		count=250;
	};
	class IMP_Ammo_127x55: Ammunition_Base
	{
		count=250;
	};
	class IMP_Ammo_127x99: Ammunition_Base
	{
		count=250;
	};
	class IMP_Ammo_300AAC: Ammunition_Base
	{
		count=250;
	};
	class IMP_Ammo_338LM: Ammunition_Base
	{
		count=250;
	};
	class IMP_Ammo_408: Ammunition_Base
	{
		count=250;
	};
	class IMP_Ammo_792x57: Ammunition_Base
	{
		count=250;
	};
	class IMP_Ammo_9x18: Ammunition_Base
	{
		count=250;
	};
	class IMP_Ammo_127x108: Ammunition_Base
	{
		count=250;
	};
	class IMP_Ammo_762x25: Ammunition_Base
	{
		count=250;
	};

// KOD Weapons
	class KOD_Ammo_762x25: Ammunition_Base
	{
		count=250;
	};
	class KOD_Ammo_792x57: Ammunition_Base
	{
		count=250;
	};
	class KOD_Ammo_40lw: Ammunition_Base
	{
		count=250;
	};
	class KOD_Ammo_50BMG: Ammunition_Base
	{
		count=250;
	};
	class KOD_Ammo_458: Ammunition_Base
	{
		count=250;
	};
	class KOD_Ammo_338: Ammunition_Base
	{
		count=250;
	};
	class KOD_Ammo_408: Ammunition_Base
	{
		count=250;
	};
	class KOD_Ammo_308WinAP: Ammunition_Base
	{
		count=250;
	};
	class KOD_Ammo_127x108: Ammunition_Base
	{
		count=250;
	};
	class KOD_Ammo_145x114: Ammunition_Base
	{
		count=250;
	};
	class KOD_Ammo_23x75: Ammunition_Base
	{
		count=250;
	};
	class Ammo_50calBW: Ammunition_Base
	{
		count=250;
	};
	class Ammo_127x55: Ammunition_Base
	{
		count=250;
	};
	class KOD_Ammo_20mm: Ammunition_Base
	{
		count=250;
	};

// Mass Many Item Overhaul - MassGuns
	class Ammo_408Chey: Ammunition_Base
	{
		count=250;
	};
	class Ammo_12GaBB: Ammunition_Base
	{
		count=250;
	};

// MWP Modern Weapon Pack
	class HBd_Ammo_366TKM: Ammunition_Base
	{
		count=250;
	};
	class HBd_Ammo_366TKM_BPM: Ammunition_Base
	{
		count=250;
	};
	class HBd_Ammo_366TKM_ECO: Ammunition_Base
	{
		count=250;
	};
	class HBd_Ammo_545x39_BP: Ammunition_Base
	{
		count=250;
	};
	class HBd_Ammo_545x39_HP: Ammunition_Base
	{
		count=250;
	};
	class HBd_Ammo_545x39_PP: Ammunition_Base
	{
		count=250;
	};
	class HBd_Ammo_545x39_BT: Ammunition_Base
	{
		count=250;
	};
	class HBd_Ammo_545x39_PPBS: Ammunition_Base
	{
		count=250;
	};
	class HBd_Ammo_762x39_BP: Ammunition_Base
	{
		count=250;
	};
	class HBd_Ammo_762x39_BZ: Ammunition_Base
	{
		count=250;
	};
	class HBd_Ammo_762x39_PP: Ammunition_Base
	{
		count=250;
	};
	class HBd_Ammo_762x39_MAI_AP: Ammunition_Base
	{
		count=250;
	};
	class HBd_Ammo_762x39_HP: Ammunition_Base
	{
		count=250;
	};
	class HBd_Ammo_9x18_PBM: Ammunition_Base
	{
		count=250;
	};
	class HBd_Ammo_9x18_PPE: Ammunition_Base
	{
		count=250;
	};
	class HBd_Ammo_9x18_BJT: Ammunition_Base
	{
		count=250;
	};
	class HBd_Ammo_9x18_PST: Ammunition_Base
	{
		count=250;
	};
	class HBd_Ammo_556x45_SSA_AP: Ammunition_Base
	{
		count=250;
	};
	class HBd_Ammo_556x45_Warmageddon: Ammunition_Base
	{
		count=250;
	};
	class HBd_Ammo_556x45_55_FMJ: Ammunition_Base
	{
		count=250;
	};
	class HBd_Ammo_556x45_M995: Ammunition_Base
	{
		count=250;
	};
	class HBd_Ammo_9x19_FMJ: Ammunition_Base
	{
		count=250;
	};
	class HBd_Ammo_9x19_PBP: Ammunition_Base
	{
		count=250;
	};
	class HBd_Ammo_9x19_RIP: Ammunition_Base
	{
		count=250;
	};
	class HBd_Ammo_9x19_QuakeMaker: Ammunition_Base
	{
		count=250;
	};
	class HBd_Ammo_9x39_BP: Ammunition_Base
	{
		count=250;
	};
	class HBd_Ammo_9x39_PAB_9: Ammunition_Base
	{
		count=250;
	};
	class HBd_Ammo_9x39_SPP: Ammunition_Base
	{
		count=250;
	};
	class HBd_Ammo_68x51_FMJ: Ammunition_Base
	{
		count=250;
	};
	class HBd_Ammo_68x51_Hybryd: Ammunition_Base
	{
		count=250;
	};
	class HBd_Ammo_127x55: Ammunition_Base
	{
		count=250;
	};
	class HBd_Ammo_127x55A: Ammunition_Base
	{
		count=250;
	};
	class HBd_Ammo_127x55B: Ammunition_Base
	{
		count=250;
	};
	class HBd_Ammo_127x55_SC130: Ammunition_Base
	{
		count=250;
	};
	class HBd_Ammo_762x35_VMAX: Ammunition_Base
	{
		count=250;
	};
	class HBd_Ammo_762x35_AP: Ammunition_Base
	{
		count=250;
	};
	class HBd_Ammo_762x35_FMJ: Ammunition_Base
	{
		count=250;
	};
	class HBd_Ammo_762x51_M993: Ammunition_Base
	{
		count=250;
	};
	class HBd_Ammo_762x51_BPZ_FMJ: Ammunition_Base
	{
		count=250;
	};
	class HBd_Ammo_762x54_BSGS: Ammunition_Base
	{
		count=250;
	};
	class HBd_Ammo_762x54_BTHP: Ammunition_Base
	{
		count=250;
	};
	class HBd_Ammo_762x54_LPS: Ammunition_Base
	{
		count=250;
	};

// More AP Ammo
	// Ammo_556x45AP - Existing compatibility, included in Huge Advanced Weapon Pack
	// Ammo_762x39AP - Existing compatibility, included in Huge Advanced Weapon Pack
	class Ammo_545x39AP: Ammunition_Base
	{
		count=250;
	};
	class Ammo_762x54AP: Ammunition_Base
	{
		count=250;
	};
	class Ammo_762x51AP: Ammunition_Base
	{
		count=250;
	};
	class Ammo_12gaAP: Ammunition_Base
	{
		count=250;
	};
	class Ammo_9x19AP: Ammunition_Base
	{
		count=250;
	};

// More Guns
	class Ammo_46x30: Ammunition_Base
	{
		count=250;
	};
	class Ammo_338: Ammunition_Base
	{
		count=250;
	};

// Mortys Weapons
	class TTC_Ammo_303: Ammunition_Base
	{
		count=250;
	};
	class TTC_Ammo_3006: Ammunition_Base
	{
		count=250;
	};
	class TTC_Ammo_4570: Ammunition_Base
	{
		count=250;
	};
	class TTC_Ammo_8mm: Ammunition_Base
	{
		count=250;
	};
	class TTC_Ammo_300blk: Ammunition_Base
	{
		count=250;
	};
	class TTC_Ammo_30carbine: Ammunition_Base
	{
		count=250;
	};
	class TTC_Ammo_50Beo: Ammunition_Base
	{
		count=250;
	};
	class TTC_Ammo_338: Ammunition_Base
	{
		count=250;
	};
	class TTC_Ammo_50BMG: Ammunition_Base
	{
		count=250;
	};
	
// Paragon Arsenal
	class Paragon_Ammo_Plasma: Ammunition_Base
	{
		count=250;
	};
	class Paragon_Ammo_20mm: Ammunition_Base
	{
		count=250;
	};
	class Paragon_Ammo_50: Ammunition_Base
	{
		count=250;
	};
	class Paragon_Ammo_12x55: Ammunition_Base
	{
		count=250;
	};
	class Paragon_Ammo_408: Ammunition_Base
	{
		count=250;
	};
	class Paragon_Ammo_338: Ammunition_Base
	{
		count=250;
	};
	class Paragon_Ammo_300BLK: Ammunition_Base
	{
		count=250;
	};
	class Paragon_Ammo_50Beowulf: Ammunition_Base
	{
		count=250;
	};
	class Paragon_Ammo_PopeChey: Ammunition_Base
	{
		count=250;
	};

// Rebs Ballistics - Vanilla
	class Ammo_12ga_birdshot: Ammo_12gaPellets
	{
		count=250;
	};
	class Ammo_12ga_no4buckshot: Ammo_12gaPellets
	{
		count=250;
	};
	class Ammo_12ga_00apbuckshot: Ammo_12gaPellets
	{
		count=250;
	};
	class Ammo_12ga_00hvbuckshot: Ammo_12gaPellets
	{
		count=250;
	};
	class Ammo_12ga_hpslug: Ammo_12gaSlug
	{
		count=250;
	};
	class Ammo_12ga_hvslug: Ammo_12gaSlug
	{
		count=250;
	};
	class Ammo_12ga_apslug: Ammo_12gaSlug
	{
		count=250;
	};
	class Ammo_22_HP: Ammo_22
	{
		count=250;
	};
	class Ammo_308Win_M80A1: Ammo_308Win
	{
		count=250;
	};
	class Ammo_308Win_MK316: Ammo_308Win
	{
		count=250;
	};
	class Ammo_308Win_M61: Ammo_308Win
	{
		count=250;
	};
	class Ammo_308Win_M993: Ammo_308Win
	{
		count=250;
	};
	class Ammo_308Win_RBCDSP: Ammo_308Win
	{
		count=250;
	};
	class Ammo_357_FederalHP: Ammo_357
	{
		count=250;
	};
	class Ammo_357_BuffuloBoreFMJ: Ammo_357
	{
		count=250;
	};
	class Ammo_357_BuffuloBoreHP: Ammo_357
	{
		count=250;
	};
	class Ammo_380_BuffaloHP: Ammo_380
	{
		count=250;
	};
	class Ammo_380_RCBDSP: Ammo_380
	{
		count=250;
	};
	class Ammo_380_RG028AP: Ammo_380
	{
		count=250;
	};
	class Ammo_380_7N25AP: Ammo_380
	{
		count=250;
	};
	class Ammo_45ACP_UnderwoodHP: Ammo_45ACP
	{
		count=250;
	};
	class Ammo_45ACP_RBCDSP: Ammo_45ACP
	{
		count=250;
	};
	class Ammo_545x39_WolfHP: Ammo_545x39
	{
		count=250;
	};
	class Ammo_545x39_WolfFMJ: Ammo_545x39
	{
		count=250;
	};
	class Ammo_545x39_7N22: Ammo_545x39
	{
		count=250;
	};
	class Ammo_545x39_7N24: Ammo_545x39
	{
		count=250;
	};
	class Ammo_545x39_7U1SP: Ammo_545x39
	{
		count=250;
	};
	class Ammo_556x45_MK262: Ammo_556x45
	{
		count=250;
	};
	class Ammo_556x45_MK318: Ammo_556x45
	{
		count=250;
	};
	class Ammo_556x45_M855A1: Ammo_556x45
	{
		count=250;
	};
	class Ammo_556x45_M856A1: Ammo_556x45
	{
		count=250;
	};
	class Ammo_556x45_M995: Ammo_556x45
	{
		count=250;
	};
	class Ammo_556x45_RBCDSP: Ammo_556x45
	{
		count=250;
	};
	class Ammo_762x39_WolfHP: Ammo_762x39
	{
		count=250;
	};
	class Ammo_762x39_WolfFMJ: Ammo_762x39
	{
		count=250;
	};
	class Ammo_762x39_7N23: Ammo_762x39
	{
		count=250;
	};
	class Ammo_762x39_HornadyBT: Ammo_762x39
	{
		count=250;
	};
	class Ammo_762x54_WolfSP: Ammo_762x54
	{
		count=250;
	};
	class Ammo_762x54_7N37: Ammo_762x54
	{
		count=250;
	};
	class Ammo_9x19_UnderwoodHP: Ammo_9x19
	{
		count=250;
	};
	class Ammo_9x19_RBCDSP: Ammo_9x19
	{
		count=250;
	};
	class Ammo_9x19_7N31AP: Ammo_9x19
	{
		count=250;
	};
	class Ammo_9x39_WolfHP: Ammo_9x39
	{
		count=250;
	};
	class Ammo_9x39_RBCDSP: Ammo_9x39
	{
		count=250;
	};

// Remastered Arma Weapons
	class Ammo_12x7mm: Ammunition_Base
	{
		count=250;
	};
	class Ammo_50Cal: Ammunition_Base
	{
		count=250;
	};

// Rev Guns
	class JebsGuns_Ammo_45_70: Ammunition_Base
	{
		count=250;
	};
	class JebsGuns_Ammo_45P: Ammunition_Base
	{
		count=250;
	};
	class JebsGuns_Ammo_127x55: Ammunition_Base
	{
		count=250;
	};
	class JebsGuns_Ammo_127x55_OP: Ammunition_Base
	{
		count=250;
	};
	class JebsGuns_Ammo_792x33: Ammunition_Base
	{
		count=250;
	};
	class JebsGuns_Ammo_45_Rubber: Ammunition_Base
	{
		count=250;
	};
	class JebsGuns_Ammo_545x39_Rubber: Ammunition_Base
	{
		count=250;
	};
	class JebsGuns_Ammo_45_70_Rubber: Ammunition_Base
	{
		count=250;
	};
	class Rev_Ammo_338: Ammunition_Base
	{
		count=250;
	};
	class Rev_Ammo_50BW: Ammunition_Base
	{
		count=250;
	};
	class Rev_Ammo_68SPC: Ammunition_Base
	{
		count=250;
	};
	class Rev_Ammo_408: Ammunition_Base
	{
		count=250;
	};
	class Rev_Ammo_300BO: Ammunition_Base
	{
		count=250;
	};
	class Rev_Ammo_Taser: Ammunition_Base
	{
		count=250;
	};
	class Rev_Ammo_ImprovisedArrow: Ammunition_Base
	{
		count=250;
	};
	class Rev_Ammo_Arrow: Ammunition_Base
	{
		count=250;
	};
	class Rev_Ammo_Bolt: Ammunition_Base
	{
		count=250;
	};
	class Rev_Ammo_50BMG: Ammunition_Base
	{
		count=250;
	};
	class Ammo_300WinMagnum: Ammunition_Base
	{
		count=250;
	};
// Sci-Fi Firearms - mebrad <3
	class SFF_Ammo_BioRound: Ammunition_Base
	{
		count=250;
	};
	class SFF_Ammo_FutureRound: Ammunition_Base
	{
		count=250;
	};
	class SFF_Ammo_Phantom: Ammunition_Base
	{
		count=250;
	};
	class SFF_Ammo_ProXPistol: Ammunition_Base
	{
		count=250;
	};
	class SFF_Ammo_ProXRifle: Ammunition_Base
	{
		count=250;
	};
	class SFF_Ammo_ProXShotgun: Ammunition_Base
	{
		count=250;
	};
	class SFF_Ammo_ProXSniper: Ammunition_Base
	{
		count=250;
	};
// SNAFU
	class GCGN_Ammo_3006: Ammunition_Base
	{
		count=250;
	};
	class SNAFU_Ammo_300ACC: Ammunition_Base
	{
		count=250;
	};
	class SNAFU_Ammo_762x25: Ammunition_Base
	{
		count=250;
	};
	class SNAFU_Ammo_500_SW: Ammunition_Base
	{
		count=250;
	};
	class SNAFU_Ammo_44: Ammunition_Base
	{
		count=250;
	};
	class SNAFU_Ammo_45_70mm: Ammunition_Base
	{
		count=250;
	};
	class SNAFU_Ammo_46x30: Ammunition_Base
	{
		count=250;
	};
	class SNAFU_Ammo_5_7x28mm: Ammunition_Base
	{
		count=250;
	};
	class SNAFU_MD_Ammo_556x45mm_M855A1: Ammunition_Base
	{
		count=250;
	};
	class SNAFU_Ammo_762x51: Ammunition_Base
	{
		count=250;
	};
	class GCGN_Ammo_762x51: Ammunition_Base
	{
		count=250;
	};
	class SNAFU_Ammo_338: Ammunition_Base
	{
		count=250;
	};
	class GCGN_Ammo_408Chey: Ammunition_Base
	{
		count=250;
	};
	class GCGN_Ammo_50Cal: Ammunition_Base
	{
		count=250;
	};
	class SNAFU_Ammo_127x55mm: Ammunition_Base
	{
		count=250;
	};
	class SNAFU_Ammo_145Cal: Ammunition_Base
	{
		count=250;
	};
	class SNAFU_Ammo_127x55mmAP: Ammunition_Base
	{
		count=250;
	};

// Sobr Weapons
	class Sobr_Ammo_762x25: Ammunition_Base
	{
		count=250;
	};
	class SM_Ammo_366TKM_BP_M: Ammunition_Base
	{
		count=250;
	};
	class SM_Ammo_366TKM_EKO: Ammunition_Base
	{
		count=250;
	};
	class SM_Ammo_366TKM_FMJ: Ammunition_Base
	{
		count=250;
	};
	class SM_Ammo_366TKM_GEKSA: Ammunition_Base
	{
		count=250;
	};

// Squad MSF-C
	class MSFC_Ammo_127x108: Ammunition_Base
	{
		count=250;
	};
	class MSFC_Ammo_50BMG: Ammunition_Base
	{
		count=250;
	};
	class MSFC_Bullet_127x99: Ammunition_Base
	{
		count=250;
	};

// Tactical Flava
	class TF_Ammo_20mm: Ammunition_Base
	{
		count=250;
	};
	class TF_Ammo_20mm_HE: Ammunition_Base
	{
		count=250;
	};
	class TF_Ammo_57: Ammunition_Base
	{
		count=250;
	};
	class TF_Ammo_40mm_HEDP: Ammunition_Base
	{
		count=5;
	};
	class TF_Ammo_338LM: Ammunition_Base
	{
		count=250;
	};

// Taser x2
	class TaserX2_Ammo: Ammunition_Base
	{
		count=250;
	};

// Techs Weapon Mod
	class TWM_Ammo_458: Ammunition_Base
	{
		count=250;
	};
	class TWM_Ammo_303: Ammunition_Base
	{
		count=250;
	};
	class TWM_Ammo_50BMG: Ammunition_Base
	{
		count=250;
	};
	class TWM_Ammo_12x108: Ammunition_Base
	{
		count=250;
	};
	class TWM_Ammo_300BO: Ammunition_Base
	{
		count=250;
	};
	class TWM_Ammo_57x28: Ammunition_Base
	{
		count=250;
	};
	class TWM_Ammo_204Ruger: Ammunition_Base
	{
		count=250;
	};
	class TWM_Ammo_408CheyTac: Ammunition_Base
	{
		count=250;
	};
	class TWM_Ammo_338Magnum: Ammunition_Base
	{
		count=250;
	};
	class TWM_Ammo_44: Ammunition_Base
	{
		count=250;
	};
	class TWM_Ammo_50x110Win: Ammunition_Base
	{
		count=250;
	};
	class TWM_Ammo_12x55: Ammunition_Base
	{
		count=250;
	};
	class TWM_Ammo_3006: Ammunition_Base
	{
		count=250;
	};
	class TWM_40mm_HE: Ammunition_Base
	{
		count=5;
	};
	class TWM_Ammo_8mm: Ammunition_Base
	{
		count=250;
	};
	class TWM_Ammo_Taserprobe: Ammunition_Base
	{
		count=250;
	};
	class TWM_Ammo_6mm: Ammunition_Base
	{
		count=250;
	};

// Teddys Weapon Pack
	class TWP_Ammo_20x76: Ammunition_Base
	{
		count=250;
	};
	class TWP_Ammo_50BMG: Ammunition_Base
	{
		count=250;
	};
	class TWP_Ammo_3006: Ammunition_Base
	{
		count=250;
	};
	class TWP_Ammo_44mag: Ammunition_Base
	{
		count=250;
	};
	class TWP_Ammo_50AE: Ammunition_Base
	{
		count=250;
	};
	class TWP_Ammo_40SW: Ammunition_Base
	{
		count=250;
	};
	class TWP_Ammo_46x30: Ammunition_Base
	{
		count=250;
	};
	class TWP_Ammo_57x28: Ammunition_Base
	{
		count=250;
	};
	class TWP_Ammo_Arrow: Ammunition_Base
	{
		count=250;
	};
	class TWP_Ammo_408Cheytac: Ammunition_Base
	{
		count=250;
	};
	class TWP_Ammo_762x25: Ammunition_Base
	{
		count=250;
	};
	class TWP_Ammo_6x35: Ammunition_Base
	{
		count=250;
	};
	class TWP_Ammo_20x102mm: Ammunition_Base
	{
		count=250;
	};
	class TWP_Ammo_300WinMag: Ammunition_Base
	{
		count=250;
	};
	class TWP_Ammo_30Carbine: Ammunition_Base
	{
		count=250;
	};

// Vazap Weapons
	class VZP_Ammo_15x104_10Rnd: Ammunition_Base
	{
		count=250;
	};
	class VZP_Ammo_12JACKIGL: Ammunition_Base
	{
		count=250;
	};
	class VZP_ash12_Ammo: Ammunition_Base
	{
		count=250;
	};
	class VZP_PKM_Ammo_762: Ammunition_Base
	{
		count=250;
	};
	class VZP_Ammo_127x55: Ammunition_Base
	{
		count=250;
	};
	class VZP_Ammo_127x99: Ammunition_Base
	{
		count=250;
	};
	class VZP_Ammo_gaus: Ammunition_Base
	{
		count=250;
	};
	class VZP_Ammo_762: Ammunition_Base
	{
		count=250;
	};
	class VZP_Ammo_556Uran: Ammunition_Base
	{
		count=250;
	};
	class VZP_Ammo_9x39BP: Ammunition_Base
	{
		count=250;
	};
	class VZP_Ammo_9x39ur: Ammunition_Base
	{
		count=250;
	};
	class vzp_ammo_357uran: Ammunition_Base
	{
		count=250;
	};

// YRTSK Epix Weapon Pack
	class YRTSK_EPIX_Weapons_Ammo_3030repeater: Ammunition_Base
	{
		count=250;
	};
	class YRTSK_EPIX_Weapons_Ammo_Dragon: Ammunition_Base
	{
		count=250;
	};
	class YRTSK_EPIX_Weapons_Ammo_Flatline: Ammunition_Base
	{
		count=250;
	};
	class YRTSK_EPIX_Weapons_Ammo_G7: Ammunition_Base
	{
		count=250;
	};
	class YRTSK_EPIX_Weapons_Ammo_Kraber: Ammunition_Base
	{
		count=250;
	};
	class YRTSK_EPIX_Weapons_Ammo_Legend: Ammunition_Base
	{
		count=250;
	};
	class YRTSK_EPIX_Weapons_Ammo_Mastiff: Ammunition_Base
	{
		count=250;
	};
	class YRTSK_EPIX_Weapons_Ammo_R99: Ammunition_Base
	{
		count=250;
	};
	class YRTSK_EPIX_Weapons_Ammo_R301: Ammunition_Base
	{
		count=250;
	};
	class YRTSK_EPIX_Weapons_Ammo_RE45: Ammunition_Base
	{
		count=250;
	};
	class YRTSK_EPIX_Weapons_Ammo_Bow: Ammunition_Base
	{
		count=250;
	};
	class YRTSK_EPIX_Weapons_Ammo_Hemlok: Ammunition_Base
	{
		count=250;
	};
	class YRTSK_EPIX_Weapons_Ammo_Eva8: Ammunition_Base
	{
		count=250;
	};
	class YRTSK_LWP_Ammo_Ant: Ammunition_Base
	{
		count=250;
	};
	class YRTSK_LWP_Ammo_Armadillo: Ammunition_Base
	{
		count=250;
	};
	class YRTSK_LWP_Ammo_Bars: Ammunition_Base
	{
		count=250;
	};
	class YRTSK_LWP_Ammo_Bee: Ammunition_Base
	{
		count=250;
	};
	class YRTSK_LWP_Ammo_Boar: Ammunition_Base
	{
		count=250;
	};
	class YRTSK_LWP_Ammo_Bull: Ammunition_Base
	{
		count=250;
	};
	class YRTSK_LWP_Ammo_Bulldog: Ammunition_Base
	{
		count=250;
	};
	class YRTSK_LWP_Ammo_Claw: Ammunition_Base
	{
		count=250;
	};
	class YRTSK_LWP_Ammo_Crocodile: Ammunition_Base
	{
		count=250;
	};
	class YRTSK_LWP_Ammo_Crow: Ammunition_Base
	{
		count=250;
	};
	class YRTSK_LWP_Ammo_Eagle: Ammunition_Base
	{
		count=250;
	};
	class YRTSK_LWP_Ammo_Fang: Ammunition_Base
	{
		count=250;
	};
	class YRTSK_LWP_Ammo_GreyWolf: Ammunition_Base
	{
		count=250;
	};
	class YRTSK_LWP_Ammo_Grizzly: Ammunition_Base
	{
		count=250;
	};
	class YRTSK_LWP_Ammo_Hedgehog: Ammunition_Base
	{
		count=250;
	};
	class YRTSK_LWP_Ammo_Lizard: Ammunition_Base
	{
		count=250;
	};
	class YRTSK_LWP_Ammo_Panther: Ammunition_Base
	{
		count=250;
	};
	class YRTSK_LWP_Ammo_Piranha: Ammunition_Base
	{
		count=250;
	};
	class YRTSK_LWP_Ammo_Porcupine: Ammunition_Base
	{
		count=250;
	};
	class YRTSK_LWP_Ammo_Puma: Ammunition_Base
	{
		count=250;
	};
	class YRTSK_LWP_Ammo_RedFox: Ammunition_Base
	{
		count=250;
	};
	class YRTSK_LWP_Ammo_Rhino: Ammunition_Base
	{
		count=250;
	};
	class YRTSK_LWP_Ammo_Shark: Ammunition_Base
	{
		count=250;
	};
	class YRTSK_LWP_Ammo_Snake: Ammunition_Base
	{
		count=250;
	};
	class YRTSK_LWP_Ammo_Sparrow: Ammunition_Base
	{
		count=250;
	};
	class YRTSK_LWP_Ammo_Tiger: Ammunition_Base
	{
		count=250;
	};
	class YRTSK_LWP_Ammo_Wolverine: Ammunition_Base
	{
		count=250;
	};

// DP Weapons -  Missing from workshop?
	class dp_Ammo_127x99: Ammunition_Base
	{
		count=250;
	};
	class dp_Ammo_127x55: Ammunition_Base
	{
		count=250;
	};
	class dp_Ammo_338lm: Ammunition_Base
	{
		count=250;
	};
	class dp_Ammo_300_BO: Ammunition_Base
	{
		count=250;
	};
	class dp_Ammo_380Travm: Ammunition_Base
	{
		count=250;
	};
	class dp_Ammo_762x25: Ammunition_Base
	{
		count=250;
	};

// Unknown Mods at the moment
	class Ammo_RPG7_HE: Ammunition_Base
	{
		count=50;
	};
	class Ammo_RPG7_AP: Ammunition_Base
	{
		count=50;
	};
	class Ammo_LAW_HE: Ammunition_Base
	{
		count=50;
	};
	class Ammo_GrenadeM4: Ammunition_Base
	{
		count=50;
	};
	class Ammo_303: Ammunition_Base
	{
		count=250;
	};
	class Ammo_12gaNeedles: Ammunition_Base
	{
		count=250;
	};
	class Ammo_FUGAS: Ammunition_Base
	{
		count=50;
	};
	class Ammo_12gaPellets_tracer: Ammunition_Base
	{
		count=250;
	};
	class Ammo_4x30: Ammunition_Base
	{
		count=250;
	};
	class Ammo_338Tracer: Ammunition_Base
	{
		count=250;
	};
	class Ammo_408: Ammunition_Base
	{
		count=250;
	};
	class Ammo_408Tracer: Ammunition_Base
	{
		count=250;
	};
	class Ammo_792x33: Ammunition_Base
	{
		count=250;
	};
	class Ammo_12_7x55: Ammunition_Base
	{
		count=250;
	};
	class Ammo_12x99: Ammunition_Base
	{
		count=250;
	};
	class Ammo_12x99Tracer_Green: Ammunition_Base
	{
		count=250;
	};
	class Ammo_12x99Tracer_Yell: Ammunition_Base
	{
		count=250;
	};
	class Ammo_nails: Ammunition_Base
	{
		count=250;
	};
	class Ammo_762x25: Ammunition_Base
	{
		count=250;
	};
	class Ammo_5_7x28: Ammunition_Base
	{
		count=250;
	};
	class Ammo_5_7x28Tracer: Ammunition_Base
	{
		count=250;
	};
	class Ammo_762x33: Ammunition_Base
	{
		count=250;
	};
	class Ammo_792x57: Ammunition_Base
	{
		count=250;
	};
	class Ammo_shock: Ammunition_Base
	{
		count=50;
	};
};