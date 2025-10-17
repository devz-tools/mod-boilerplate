class CfgPatches
{
  class MyMod
  {
    requiredAddons[]={"DZ_Characters_Vests"};
  };
};

class CfgMods
{
  class MyMod
  {
    name="MyMod";
    author="Jane Doe";
    type="mod";
    dependencies[]={"World"};

    class defs
    {
      class worldScriptModule
      {
        files[]=
        {
          "src/scripts/4_World",
        };
      };
    };
  };
};

class CfgVehicles
{
	class Clothing;
	class SmershVest: Clothing
	{
		// This makes the vest equippable in the 'Vest' and 'Hips' slots
		inventorySlot[]=
		{
			"Vest",
			"Hips"
		};
		// This changes the size of the vest in the inventory to 2x2
		itemSize[]={2,2};
	};
};