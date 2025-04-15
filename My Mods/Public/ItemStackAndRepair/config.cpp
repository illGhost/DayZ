class CfgPatches
{
	class THICCItemSizeOverhaul
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"DZ_Data",
			"DZ_Gear_Camping",
			"DZ_Gear_Consumables",
            "DZ_Gear_Cooking",
			"DZ_Gear_Crafting",
            "DZ_Gear_Medical",
            "DZ_Gear_Tools",
            "DZ_Vehicles_Parts",
            "DZ_Weapons_Melee"
		};
	};
};
class CfgVehicles
{

// Base Classes
    class Box_Base;
    class Edible_Base;
    class FishingRod_Base;
	class Inventory_Base;
	class TentBase;
    class WoodenCrate;

// Vanilla Items

    // Base Items
        class BarbedWire: Inventory_Base
    	{
            itemSize[] = {3,2};
    	};
        class MetalPlate: Inventory_Base
    	{
            itemSize[] = {5,5};
    	};
    	class MetalWire: Inventory_Base
    	{
            itemSize[] = {3,2};
    	};
        class Nail: Inventory_Base
    	{
            itemSize[] = {1,1};
    	};
        class NailBox: Box_Base
        {
            class Resources
		    {
		    	class Nail
		    	{
		    		value=99;
		    		variable="quantity";
		    	};
		    };
        };
        class WoodenLog: Inventory_Base
    	{
            itemSize[] = {2,5};
    	};
    	class WoodenPlank: Inventory_Base
    	{
            itemSize[] = {2,4};
    	};

    // Repair Items
        class DuctTape: Inventory_Base
    	{
            itemSize[] = {1,1};
    	};
        class ElectronicRepairKit: Inventory_Base
	    {
	    	itemSize[] = {2,1};
	    };
        class EpoxyPutty: Inventory_Base
    	{
            itemSize[] = {1,1};
    	};
        class LeatherSewingKit: Inventory_Base
        {
            itemSize[]={2,1};
        };
	    class SewingKit: Inventory_Base
	    {
	    	itemSize[] = {1,1};
	    };
        class TireRepairKit: Inventory_Base
        {
            itemSize[]={3,2};
        };
        class WeaponCleaningKit: Inventory_Base
	    {
	    	itemSize[] = {2,1};
	    };
        class Whetstone: Inventory_Base
	    {
	    	itemSize[] = {1,1};
	    };

    // Medical Items


    // Misc Items
        class Chemlight_ColorBase: Inventory_Base
	    {
	    	itemSize[] = {1,1};
	    };
        class FishingRod_Base_New: FishingRod_Base{};
        class FishingRod: FishingRod_Base_New
	    {
	    	itemSize[] = {1,5};
	    };
        class GardenLime: Inventory_Base
        {
	    	itemSize[] = {2,3};
        };
        class Heatpack: Inventory_Base
	    {
	    	itemSize[] = {1,2};
	    };
	    class ImprovisedFishingRod: FishingRod_Base_New
	    {
	    	itemSize[] = {1,6};
	    };
    	class FireWood: Inventory_Base
    	{
            itemSize[] = {3,2};
    	};
        class LargeGasCanister: Inventory_Base
	    {
	    	itemSize[] = {2,3};
	    };
        class LongWoodenStick: Inventory_Base
    	{
    		varQuantityInit = 1;
    		varQuantityMin = 0;
    		varQuantityMax = 5;
    		varStackMax = 5;
    		canBeSplit = 1;
    		varQuantityDestroyOnMin = 1;
            itemSize[] = {1,4};
    	};
	    class MediumGasCanister: Inventory_Base
	    {
	    	itemSize[] = {2,2};
	    };
        class Paper: Inventory_Base
    	{
    		varQuantityInit = 1;
    		varQuantityMin = 0;
    		varQuantityMax = 100;
    		varStackMax = 100;
    		canBeSplit = 1;
    	};
	    class PortableGasLamp: Inventory_Base
	    {
	    	itemSize[] = {2,3};
	    };
        class PortableGasStove: Inventory_Base
	    {
	    	itemSize[] = {2,2};
	    };
        class Rag: Inventory_Base
    	{
            varQuantityInit = 1;
    		varQuantityMin = 0;
    		varQuantityMax = 10;
    		varStackMax = 10;
    		canBeSplit = 1;
    		itemSize[]={1,2};
    	};
        class Rope: Inventory_Base
    	{
    		varQuantityInit = 1;
    		varQuantityMin = 0;
    		varQuantityMax = 10;
    		varStackMax = 10;
    		canBeSplit = 1;
            itemSize[] = {1,2};
    	};
        class SmallGasCanister: Inventory_Base
	    {
	    	itemSize[] = {2,1};
	    };
        class Stone: Inventory_Base
    	{
            itemSize[] = {2,2};
    	};
        class Tripod: Inventory_Base
	    {
	    	itemSize[] = {1,5};
	    };
        class WoodenStick: Inventory_Base
    	{
            itemSize[] = {1,2};
    	};
        class AircraftBattery: Inventory_Base
	    {
            itemSize[]={3,3};
	    };
        class CarBattery: Inventory_Base
	    {
            itemSize[]={2,2};
	    };
        class TruckBattery: Inventory_Base
	    {
            itemSize[]={3,2};
	    };
	    
	    

    // Storage
        class BurlapSack: Inventory_Base
	    {
	    	itemSize[] = {2,3};
	    };
        class CarTent: TentBase
    	{
            itemSize[] = {5,4};
    	};
        class MediumTent: TentBase
    	{
            itemSize[] = {3,2};
    	};
    	class LargeTent: TentBase
    	{
            itemSize[] = {4,3};
    	};
    	class PartyTent: TentBase
    	{
            itemSize[] = {3,2};
    	};

    // Tools
        class Flashlight: Inventory_Base
	    {
	    	itemSize[] = {2,1};
	    };
    	class Hacksaw: Inventory_Base
    	{
            itemSize[] = {3,2};
    	};
        class Hammer: Inventory_Base
    	{
            itemSize[] = {1,2};
    	};
        class HandDrillKit: Inventory_Base
	    {
	    	itemSize[] = {1,2};
	    };
    	class Handsaw: Inventory_Base
    	{
            itemSize[] = {4,2};
    	};
    	class Hatchet: Inventory_Base
    	{
            itemSize[] = {1,2};
    	};
        class Shovel: Inventory_Base
    	{
            itemSize[] = {2,4};
    	};
        class WoodAxe: Inventory_Base
    	{
            itemSize[] = {2,4};
    	};

// Mod Items

    // BBP
        class BBP_Cement: WoodenCrate
    	{
            itemSize[] = {3,3};
    	};
        class BBP_Mortar_Mix: Inventory_Base
    	{
            itemSize[] = {3,3};
    	};

    // ModName

    // ModName

    // ModName

    // ModName

};