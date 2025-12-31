class CfgPatches
{
  class AutoSort
  {
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {"DZ_Data","DZ_Scripts"};
  };
};

class CfgMods
{
  class AutoSort
  {
    dir = "AutoSort";
    picture = "";
    action = "";
    hideName = 1;
    hidePicture = 1;
    name = "AutoSort";
    credits = "You";
    author = "You";
    authorID = "0";
    version = "1.0";

    dependencies[] = {"Game","World"};

    class defs
    {
      class gameScriptModule
      {
        value = "";
        files[] = {"AutoSort/scripts/3_Game"};
      };
      class worldScriptModule
      {
        value = "";
        files[] = {"AutoSort/scripts/4_World"};
      };
    };
  };
};
