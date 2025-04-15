modded class DayZInfectedType
{
    override void SetActions()
    {
        super.SetActions();
    }

    override void Init()
    {
        super.Init();

        // Custom eye texture for bears
        if (IsInherited(Bear))
        {
            m_EyeTexture = "RadiantAnimals\\data\\xKrknRadiantBearGreen_co.paa";
            m_EyeMaterial = "RadiantAnimals\\data\\green-eyes.rvmat";
        }
    }
}