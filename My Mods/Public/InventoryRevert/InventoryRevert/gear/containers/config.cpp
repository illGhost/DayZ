class CfgPatches
{
	class InventoryRevert_Containers
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Containers"
		};
	};
};
class CfgVehicles
{
	class Container_Base;
	class PlateCarrierPouches: Container_Base
	{
		itemSize[]={6,4};
		itemsCargoSize[]={6,4};
	};
};
