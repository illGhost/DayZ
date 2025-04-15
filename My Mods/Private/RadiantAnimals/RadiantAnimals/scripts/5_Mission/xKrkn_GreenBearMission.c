class CustomMission : MissionServer
{
    override void OnInit()
    {
        super.OnInit();
        
        // Example of spawning the custom bear
        vector spawnPosition = "2000 0 2000"; // Example position
        xKrkn_RadiantBearGreen customBear = xKrkn_RadiantBearGreen.Cast(GetGame().CreateObject("xKrkn_RadiantBearGreen", spawnPosition, false, true));
        
        if (customBear)
        {
            customBear.Init();
        }
    }
}

Mission CreateCustomMission(string path)
{
    return new CustomMission();
}
