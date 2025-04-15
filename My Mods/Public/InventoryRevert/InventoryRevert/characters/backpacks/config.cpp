class CfgPatches
{
	class InventoryRevert_Backpacks
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters_Backpacks"
		};
	};
};
class cfgVehicles
{
	class Clothing_Base;
	class Clothing: Clothing_Base
	{
	};
	class TaloonBag_ColorBase: Clothing
	{
		itemSize[]={4,5};
		itemsCargoSize[]={7,6};
	};
	class TortillaBag: Clothing
	{
		itemSize[]={5,6};
		itemsCargoSize[]={9,7};
	};
	class CourierBag: Clothing
	{
		itemSize[]={4,4};
		itemsCargoSize[]={6,5};
	};
	class FurCourierBag: Clothing
	{
		itemSize[]={4,4};
		itemsCargoSize[]={6,5};
	};
	class ImprovisedBag: Clothing
	{
		itemSize[]={4,5};
		itemsCargoSize[]={7,6};
	};
	class FurImprovisedBag: Clothing
	{
		itemSize[]={4,5};
		itemsCargoSize[]={7,6};
	};
	class DryBag_ColorBase: Clothing
	{
		itemSize[]={5,6};
		itemsCargoSize[]={9,7};
	};
	class HuntingBag: Clothing
	{
		itemSize[]={5,6};
		itemsCargoSize[]={9,7};
	};
	class MountainBag_ColorBase: Clothing
	{
		itemSize[]={5,7};
		itemsCargoSize[]={10,8};
	};
	class SmershBag: Clothing
	{
		itemSize[]={4,4};
		itemsCargoSize[]={6,5};
	};
	class ChildBag_ColorBase: Clothing
	{
		itemSize[]={4,4};
		itemsCargoSize[]={6,5};
	};
	class LeatherSack_ColorBase: Clothing
	{
		itemSize[]={5,6};
		itemsCargoSize[]={9,7};
	};
	class AssaultBag_ColorBase: Clothing
	{
		itemSize[]={4,5};
		itemsCargoSize[]={7,6};
	};
	class CoyoteBag_ColorBase: Clothing
	{
		itemSize[]={5,6};
		itemsCargoSize[]={9,7};
	};
	class AliceBag_ColorBase: Clothing
	{
		itemSize[]={6,7};
		itemsCargoSize[]={10,9};
	};
	class SlingBag_ColorBase: Clothing
	{
		itemSize[]={4,4};
		itemsCargoSize[]={5,6};
	};
	class ArmyPouch_ColorBase: Clothing
	{
		itemSize[]={4,5};
		itemsCargoSize[]={5,7};
	};
	class DuffelBagSmall_ColorBase: Clothing
	{
		itemSize[]={5,4};
		itemsCargoSize[]={7,5};
	};
	class CanvasBag_ColorBase: Clothing
	{
		itemSize[]={5,4};
		itemsCargoSize[]={7,5};
	};
	class DrysackBag_ColorBase: Clothing
	{
		itemSize[]={4,5};
		itemsCargoSize[]={4,5};
	};
};