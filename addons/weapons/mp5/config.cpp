class CfgPatches {
    class sfp_jsrs_weapons_mp5 {
        name = "sfp_jsrs_weapons_mp5";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"sfp_mp5", "jsrs_soundmod_complete_edition"};
        addonRootClass = "sfp_mp5";
        author = "Swedish Forces Pack";
        url = "https://www.anrop.se";
    };
};

class Mode_SemiAuto;
class Mode_FullAuto;

class CfgWeapons 
{
    class Rifle_Base_F;
    
    class sfp_mp5_base : Rifle_Base_F
    {
        drysound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\dry\protector_dry.ogg", 1.5, 1, 15};
        reloadmagazinesound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\reload\protector_reload.ogg", 2, 1, 35};
        changefiremodesound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\noises\protector_firemode.ogg", 1.25, 1, 15};
        bullet1[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\metal_1.ogg", 2.0099, 1, 10};
        bullet2[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\metal_2.ogg", 2.0099, 1, 10};
        bullet3[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\metal_3.ogg", 2.0099, 1, 10};
        bullet4[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\metal_4.ogg", 2.0099, 1, 10};
        bullet5[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\dirt_1.ogg", 2.0099, 1, 10};
        bullet6[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\dirt_2.ogg", 2.0099, 1, 10};
        bullet7[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\dirt_3.ogg", 2.0099, 1, 10};
        bullet8[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\dirt_4.ogg", 2.0099, 1, 10};
        bullet9[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\grass_1.ogg", 2.0099, 1, 10};
        bullet10[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\grass_2.ogg", 2.0099, 1, 10};
        bullet11[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\grass_3.ogg", 2.0099, 1, 10};
        bullet12[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\grass_4.ogg", 2.0099, 1, 10};
        soundbullet[] = {"bullet1", 0.08, "bullet2", 0.084, "bullet3", 0.084, "bullet4", 0.084, "bullet5", 0.093, "bullet6", 0.093, "bullet7", 0.074, "bullet8", 0.074, "bullet9", 0.084, "bullet10", 0.085, "bullet11", 0.083, "bullet12", 0.083};
        
        class Single: Mode_SemiAuto
        {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_protc_shot_soundset", "jsrs_9mm_reverb_soundset"};
            };
            class SilencedSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_protc_shot_silenced_soundset", "jsrs_9mm_sd_reverb_soundset"};
            };
        };
        class FullAuto: Mode_FullAuto
        {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_protc_shot_soundset", "jsrs_9mm_reverb_soundset"};
            };
            class SilencedSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_protc_shot_silenced_soundset", "jsrs_9mm_sd_reverb_soundset"};
            };
        };
    };
};
