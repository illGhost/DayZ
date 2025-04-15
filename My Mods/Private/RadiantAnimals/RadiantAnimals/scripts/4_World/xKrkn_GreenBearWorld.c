class xKrkn_RadiantBearGreen : Bear
{
    override void Init()
    {
        super.Init();
        
        // Assign the custom eye texture and material
        string newTexture = "RadiantAnimals\\data\\xKrknRadiantBearGreen_co.paa";
        string newMaterial = "RadiantAnimals\\data\\green-eyes.rvmat";
        
        SetObjectTexture(0, newTexture);
        SetObjectMaterial(0, newMaterial);
    }
    
    override void EOnInit(IEntity other, int extra)
    {
        super.EOnInit(other, extra);
        
        // Enable emissive property for the eyes
        GetGame().GetCallQueue(CALL_CATEGORY_GAMEPLAY).CallLater(this.SetEmissive, 500, false);
    }
    
    void SetEmissive()
    {
        GetGame().ObjectSetMaterial(GetGame().GetObjectMaterial(this), 1, "RadiantAnimals\\data\\green-eyes.rvmat");
    }
}
