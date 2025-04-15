class CfgPatches
{
	class InventoryRevert_Vests
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters_Vests"
		};
	};
};
class CfgVehicles
{
	class Clothing_Base;
	class Clothing: Clothing_Base
	{
	};
	class SmershVest: Clothing
	{
		itemSize[]={3,3};
		itemsCargoSize[]={6,5};
	};
	class PressVest_ColorBase: Clothing
	{
		itemSize[]={4,4};
		itemsCargoSize[]={6,4};
	};
	class UKAssVest_ColorBase: Clothing
	{
		itemSize[]={3,3};
		itemsCargoSize[]={6,5};
	};
	class HighCapacityVest_ColorBase: Clothing
	{
		itemSize[]={4,3};
		itemsCargoSize[]={7,5};
	};
	class LeatherStorageVest_ColorBase: Clothing
	{
		itemSize[]={4,3};
		itemsCargoSize[]={7,5};
	};
	class HuntingVest: Clothing
	{
		itemSize[]={2,3};
		itemsCargoSize[]={7,5};
	};
};