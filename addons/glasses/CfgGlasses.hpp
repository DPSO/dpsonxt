class CfgGlasses {

	class None;

	class G_RegulatorMask_F;
	class CLASS(RegulatorMask): G_RegulatorMask_F {
		_generalMacro = CLASS(RegulatorMask);
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = AUTHOR;
		displayName = "$STR_DPSO_Glasses_RegulatorMask_DisplayName";
		descriptionShort = "$STR_DPSO_Glasses_RegulatorMask_Description";
		mass = 6;
		ACE_Color[] = {0,0,0};
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		ACE_Overlay = QPATHTOF(data\hud\mask_01_ca.paa);
		ACE_OverlayCracked = QPATHTOF(data\hud\mask_01_cracked_ca.paa);
		ACE_OverlayDirt = "a3\ui_f\data\igui\rsctitles\healthtextures\dust_upper_ca.paa";
		ACE_Protection = 2;
		ACE_Resistance = 2;
		ACE_TintAmount = 2;
	};

	class G_AirPurifyingRespirator_01_F;
	class CLASS(Respirator): G_AirPurifyingRespirator_01_F {
		_generalMacro = CLASS(Respirator);
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = AUTHOR;
		displayName = "$STR_DPSO_Glasses_Respirator_DisplayName";
		descriptionShort = "$STR_DPSO_Glasses_Respirator_Description";
		mass = 7;
		ACE_Color[] = {0,0,0};
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		ACE_Overlay = QPATHTOF(data\hud\mask_01_ca.paa);
		ACE_OverlayCracked = QPATHTOF(data\hud\mask_01_cracked_ca.paa);
		ACE_OverlayDirt = "a3\ui_f\data\igui\rsctitles\healthtextures\dust_upper_ca.paa";
		ACE_Protection = 2;
		ACE_Resistance = 2;
		ACE_TintAmount = 2;
	};

	class G_AirPurifyingRespirator_02_black_F;
	class CLASS(Respirator_Black): G_AirPurifyingRespirator_02_black_F {
		_generalMacro = CLASS(Respirator_Black);
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = AUTHOR;
		displayName = "$STR_DPSO_Glasses_Respirator_Black_DisplayName";
		descriptionShort = "$STR_DPSO_Glasses_Respirator_Black_Description";
		mass = 7;
		ACE_Color[] = {0,0,0};
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		ACE_Overlay = QPATHTOF(data\hud\mask_01_ca.paa);
		ACE_OverlayCracked = QPATHTOF(data\hud\mask_01_cracked_ca.paa);
		ACE_OverlayDirt = "a3\ui_f\data\igui\rsctitles\healthtextures\dust_upper_ca.paa";
		ACE_Protection = 2;
		ACE_Resistance = 2;
		ACE_TintAmount = 2;
	};

	class G_AirPurifyingRespirator_02_olive_F;
	class CLASS(Respirator_Olive): G_AirPurifyingRespirator_02_olive_F {
		_generalMacro = CLASS(Respirator_Olive);
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = AUTHOR;
		displayName = "$STR_DPSO_Glasses_Respirator_Olive_DisplayName";
		descriptionShort = "$STR_DPSO_Glasses_Respirator_Olive_Description";
		mass = 7;
		ACE_Color[] = {0,0,0};
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		ACE_Overlay = QPATHTOF(data\hud\mask_01_ca.paa);
		ACE_OverlayCracked = QPATHTOF(data\hud\mask_01_cracked_ca.paa);
		ACE_OverlayDirt = "a3\ui_f\data\igui\rsctitles\healthtextures\dust_upper_ca.paa";
		ACE_Protection = 2;
		ACE_Resistance = 2;
		ACE_TintAmount = 2;
	};

	class G_AirPurifyingRespirator_02_sand_F;
	class CLASS(Respirator_Sand): G_AirPurifyingRespirator_02_sand_F {
		_generalMacro = CLASS(Respirator_Sand);
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = AUTHOR;
		displayName = "$STR_DPSO_Glasses_Respirator_Sand_DisplayName";
		descriptionShort = "$STR_DPSO_Glasses_Respirator_Sand_Description";
		mass = 7;
		ACE_Color[] = {0,0,0};
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		ACE_Overlay = QPATHTOF(data\hud\mask_01_ca.paa);
		ACE_OverlayCracked = QPATHTOF(data\hud\mask_01_cracked_ca.paa);
		ACE_OverlayDirt = "a3\ui_f\data\igui\rsctitles\healthtextures\dust_upper_ca.paa";
		ACE_Protection = 2;
		ACE_Resistance = 2;
		ACE_TintAmount = 2;
	};

	class G_Blindfold_01_base_F;
	class G_Blindfold_01_black_F;
	class CLASS(Blindfold_Black): G_Blindfold_01_black_F {
		_generalMacro = CLASS(Blindfold_Black);
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = AUTHOR;
		displayName = "$STR_DPSO_Glasses_Blindfold_Black_DisplayName";
		descriptionShort = "$STR_DPSO_Glasses_Blindfold_Black_Description";
		picture = "\a3\characters_f_enoch\facewear\data\ui\icon_g_blindfold_01_black_f_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f_enoch\facewear\data\g_blindfold_01_black_co.paa"};
		model = "\a3\characters_f_enoch\facewear\g_blindfold_01_f.p3d";
		mass = 0.5;
		ACE_Color[] = {0,0,0};
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		ACE_Overlay = QPATHTOF(data\hud\blindfold_black_ca.paa);
		ACE_OverlayCracked = QPATHTOF(data\hud\blindfold_black_ca.paa);
		ACE_OverlayDirt = "a3\ui_f\data\igui\rsctitles\healthtextures\dust_upper_ca.paa";
		ACE_Protection = 1;
		ACE_Resistance = 1;
		ACE_TintAmount = 2;
	};

	class G_Blindfold_01_white_F;
	class CLASS(Blindfold_White): G_Blindfold_01_white_F {
		_generalMacro = CLASS(Blindfold_White);
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = AUTHOR;
		displayName = "$STR_DPSO_Glasses_Blindfold_White_DisplayName";
		descriptionShort = "$STR_DPSO_Glasses_Blindfold_White_Description";
		picture = "\a3\characters_f_enoch\facewear\data\ui\icon_g_blindfold_01_white_f_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f_enoch\facewear\data\g_blindfold_01_white_co.paa"};
		model = "\a3\characters_f_enoch\facewear\g_blindfold_01_f.p3d";
		mass = 0.5;
		ACE_Color[] = {1,1,1};
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		ACE_Overlay = QPATHTOF(data\hud\blindfold_white_ca.paa);
		ACE_OverlayCracked = QPATHTOF(data\hud\blindfold_white_ca.paa);
		ACE_OverlayDirt = "a3\ui_f\data\igui\rsctitles\healthtextures\dust_upper_ca.paa";
		ACE_Protection = 1;
		ACE_Resistance = 1;
		ACE_TintAmount = 2;
	};

	class CLASS(Blindfold_White_Blood): G_Blindfold_01_white_F {
		_generalMacro = CLASS(Blindfold_White_Blood);
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = AUTHOR;
		displayName = "$STR_DPSO_Glasses_Blindfold_White_Blood_DisplayName";
		descriptionShort = "$STR_DPSO_Glasses_Blindfold_White_Blood_Description";
		picture = QPATHTOF(data\ui\blindfold_white_blood_ca.paa);
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {QPATHTOF(data\textures\blindfold_white_blood_co.paa)};
		model = "\a3\characters_f_enoch\facewear\g_blindfold_01_f.p3d";
		mass = 0.5;
		ACE_Color[] = {1,1,1};
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		ACE_Overlay = QPATHTOF(data\hud\blindfold_white_ca.paa);
		ACE_OverlayCracked = QPATHTOF(data\hud\blindfold_white_ca.paa);
		ACE_OverlayDirt = "a3\ui_f\data\igui\rsctitles\healthtextures\dust_upper_ca.paa";
		ACE_Protection = 1;
		ACE_Resistance = 1;
		ACE_TintAmount = 2;
	};

};
