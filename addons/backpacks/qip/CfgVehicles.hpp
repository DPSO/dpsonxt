class CfgVehicles {
    class TFAR_rt1523g;    // External class reference
    class TFAR_mr3000;
    class TFAR_anprc155;
    class TFAR_anarc210;
    class TFAR_mr6000l;
    class TFAR_anarc164;

    class dpso_TFAR_rt1523g_kitbag : TFAR_rt1523g {
        author = "NemesisRE";
        model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
        hiddenSelections[] = {"camo"};
        maximumLoad = 240;
        mass = 130;
        scope = 0;
        scopeCurator = 0;
        scopeArsenal = 0;
    };

    class dpso_kitbag_khaki_west : dpso_TFAR_rt1523g_kitbag {
        displayName = "RT-1523G Kitbag (Green)";
        hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_fast_rgr_co.paa"};
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
    };

    class dpso_kitbag_coyote_west : dpso_TFAR_rt1523g_kitbag {
        displayName = "RT-1523G Kitbag (Coyote)";
        hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_fast_cbr_co.paa"};
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
    };

    class dpso_kitbag_winter_west : dpso_TFAR_rt1523g_kitbag {
        displayName = "RT-1523G Kitbag (Winter)";
        hiddenSelectionsTextures[] = {QPATHTOF(qip\data\textures\kitbag_wte.paa)};
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
    };

    class dpso_kitbag_black_west : dpso_TFAR_rt1523g_kitbag {
        displayName = "RT-1523G Kitbag (Black)";
        hiddenSelectionsTextures[] = {"\a3\weapons_f\ammoboxes\bags\data\backpack_fast_blk_co.paa"};
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
    };

    class dpso_TFAR_mr3000_kitbag : TFAR_mr3000 {
        author = "NemesisRE";
        model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
        hiddenSelections[] = {"camo"};
        maximumLoad = 240;
        mass = 130;
        scope = 0;
        scopeCurator = 0;
        scopeArsenal = 0;
    };

    class dpso_kitbag_khaki_east : dpso_TFAR_mr3000_kitbag {
        displayName = "MR3000 Kitbag (Green)";
        hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_fast_rgr_co.paa"};
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
    };

    class dpso_kitbag_coyote_east : dpso_kitbag_khaki_east {
        displayName = "MR3000 Kitbag (Coyote)";
        hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_fast_cbr_co.paa"};
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
    };

    class dpso_kitbag_winter_east : dpso_kitbag_khaki_east {
        displayName = "MR3000 Kitbag (Winter)";
        hiddenSelectionsTextures[] = {QPATHTOF(qip\data\textures\kitbag_wte.paa)};
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
    };

    class dpso_kitbag_black_east : dpso_kitbag_khaki_east {
        displayName = "MR3000 Kitbag (Black)";
        hiddenSelectionsTextures[] = {"\a3\weapons_f\ammoboxes\bags\data\backpack_fast_blk_co.paa"};
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
    };

    class dpso_TFAR_anprc155_kitbag : TFAR_anprc155 {
        author = "NemesisRE";
        model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
        hiddenSelections[] = {"camo"};
        maximumLoad = 240;
        mass = 130;
        scope = 0;
        scopeCurator = 0;
        scopeArsenal = 0;
    };

    class dpso_kitbag_khaki_independent : dpso_TFAR_anprc155_kitbag {
        displayName = "AN/PRC155 Kitbag (Green)";
        hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_fast_rgr_co.paa"};
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
    };

    class dpso_kitbag_coyote_independent : dpso_TFAR_anprc155_kitbag {
        displayName = "AN/PRC155 Kitbag (Coyote)";
        hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_fast_cbr_co.paa"};
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
    };

    class dpso_kitbag_winter_independent : dpso_TFAR_anprc155_kitbag {
        displayName = "AN/PRC155 Kitbag (Winter)";
        hiddenSelectionsTextures[] = {QPATHTOF(qip\data\textures\kitbag_wte.paa)};
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
    };

    class dpso_kitbag_black_independent : dpso_TFAR_anprc155_kitbag {
        displayName = "AN/PRC155 Kitbag (Black)";
        hiddenSelectionsTextures[] = {"\a3\weapons_f\ammoboxes\bags\data\backpack_fast_blk_co.paa"};
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
    };
/* 
    class dpso_TFAR_mr6000l_ilbe : TFAR_mr6000l {
        author = "NemesisRE";
        model = "y\tfw_radios\addons\ilbe\data\model\blade\tfw_blade_ilbe.p3d";
        hiddenSelections[] = {"camo"};
        maximumLoad = 200;
        mass = 100;
        scope = 0;
        scopeCurator = 0;
        scopeArsenal = 0;
    };

    class dpso_ilbe_marpatwd_east : dpso_TFAR_mr6000l_ilbe {
        displayName = "MR6000L ILBE (MARPAT-WD)";
        picture = "y\tfw_radios\addons\ilbe\data\icons\ilbe_icon.paa";
        editorPreview = "";
        hiddenSelectionsTextures[] = {"y\tfw_radios\addons\ilbe\data\model\ilbe_co.paa"};
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
    };

    class dpso_ilbe_marpatd_east : dpso_TFAR_mr6000l_ilbe {
        displayName = "MR6000L ILBE (MARPAT-D)";
        picture = "y\tfw_radios\addons\ilbe\data\icons\ilbe_icon_d.paa";
        editorPreview = "";
        hiddenSelectionsTextures[] = {"y\tfw_radios\addons\ilbe\data\model\ilbe_d_co.paa"};
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
    };

    class dpso_ilbe_coyote_east : dpso_TFAR_mr6000l_ilbe {
        displayName = "MR6000L ILBE (Coyote)";
        picture = "y\tfw_radios\addons\ilbe\data\icons\ilbe_icon_coy.paa";
        editorPreview = "";
        hiddenSelectionsTextures[] = {"y\tfw_radios\addons\ilbe\data\model\ilbe_coy_co.paa"};
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
    };

    class dpso_ilbe_khaki_east : dpso_TFAR_mr6000l_ilbe {
        displayName = "MR6000L ILBE (Green)";
        picture = "y\tfw_radios\addons\ilbe\data\icons\ilbe_icon_gr.paa";
        editorPreview = "";
        hiddenSelectionsTextures[] = {"y\tfw_radios\addons\ilbe\data\model\ilbe_gr_co.paa"};
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
    };

    class dpso_TFAR_anarc210_ilbe : TFAR_anarc210 {
        author = "NemesisRE";
        model = "y\tfw_radios\addons\ilbe\data\model\blade\tfw_blade_ilbe.p3d";
        hiddenSelections[] = {"camo"};
        maximumLoad = 200;
        mass = 100;
        scope = 0;
        scopeCurator = 0;
        scopeArsenal = 0;
    };

    class dpso_ilbe_marpatwd_west : dpso_TFAR_anarc210_ilbe {
        displayName = "AN/PRC-210 ILBE (MARPAT-WD)";
        picture = "y\tfw_radios\addons\ilbe\data\icons\ilbe_icon.paa";
        editorPreview = "";
        hiddenSelectionsTextures[] = {"y\tfw_radios\addons\ilbe\data\model\ilbe_co.paa"};
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
    };

    class dpso_ilbe_marpatd_west : dpso_TFAR_anarc210_ilbe {
        displayName = "AN/PRC-210 ILBE (MARPAT-D)";
        picture = "y\tfw_radios\addons\ilbe\data\icons\ilbe_icon_d.paa";
        editorPreview = "";
        hiddenSelectionsTextures[] = {"y\tfw_radios\addons\ilbe\data\model\ilbe_d_co.paa"};
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
    };

    class dpso_ilbe_coyote_west : dpso_TFAR_anarc210_ilbe {
        displayName = "AN/PRC-210 ILBE (Coyote)";
        picture = "y\tfw_radios\addons\ilbe\data\icons\ilbe_icon_coy.paa";
        editorPreview = "";
        hiddenSelectionsTextures[] = {"y\tfw_radios\addons\ilbe\data\model\ilbe_coy_co.paa"};
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
    };

    class dpso_ilbe_khaki_west : dpso_TFAR_anarc210_ilbe {
        displayName = "AN/PRC-210 ILBE (Green)";
        picture = "y\tfw_radios\addons\ilbe\data\icons\ilbe_icon_gr.paa";
        editorPreview = "";
        hiddenSelectionsTextures[] = {"y\tfw_radios\addons\ilbe\data\model\ilbe_gr_co.paa"};
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
    };

    class dpso_TFAR_anarc164_ilbe : TFAR_anarc164 {
        author = "NemesisRE";
        model = "y\tfw_radios\addons\ilbe\data\model\blade\tfw_blade_ilbe.p3d";
        hiddenSelections[] = {"camo"};
        maximumLoad = 200;
        mass = 100;
        scope = 0;
        scopeCurator = 0;
        scopeArsenal = 0;
    };

    class dpso_ilbe_marpatwd_independent : dpso_TFAR_anarc164_ilbe {
        displayName = "AN/PRC-164 ILBE (MARPAT-WD)";
        picture = "y\tfw_radios\addons\ilbe\data\icons\ilbe_icon.paa";
        editorPreview = "";
        hiddenSelectionsTextures[] = {"y\tfw_radios\addons\ilbe\data\model\ilbe_co.paa"};
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
    };

    class dpso_ilbe_marpatd_independent : dpso_TFAR_anarc164_ilbe {
        displayName = "AN/PRC-164 ILBE (MARPAT-D)";
        picture = "y\tfw_radios\addons\ilbe\data\icons\ilbe_icon_d.paa";
        editorPreview = "";
        hiddenSelectionsTextures[] = {"y\tfw_radios\addons\ilbe\data\model\ilbe_d_co.paa"};
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
    };

    class dpso_ilbe_coyote_independent : dpso_TFAR_anarc164_ilbe {
        displayName = "AN/PRC-164 ILBE (Coyote)";
        picture = "y\tfw_radios\addons\ilbe\data\icons\ilbe_icon_coy.paa";
        editorPreview = "";
        hiddenSelectionsTextures[] = {"y\tfw_radios\addons\ilbe\data\model\ilbe_coy_co.paa"};
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
    };

    class dpso_ilbe_khaki_independent : dpso_TFAR_anarc164_ilbe {
        displayName = "AN/PRC-164 ILBE (Green)";
        picture = "y\tfw_radios\addons\ilbe\data\icons\ilbe_icon_gr.paa";
        editorPreview = "";
        hiddenSelectionsTextures[] = {"y\tfw_radios\addons\ilbe\data\model\ilbe_gr_co.paa"};
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
    };
 */
    // For older Missions
    class talon_kitbag_khaki: dpso_kitbag_khaki_west {
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
    };

    class talon_kitbag_coyote: dpso_kitbag_coyote_west {
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
    };

    class talon_kitbag_winter: dpso_kitbag_winter_west {
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
    };
};
