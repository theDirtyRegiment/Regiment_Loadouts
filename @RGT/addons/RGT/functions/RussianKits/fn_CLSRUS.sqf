comment "Remove gear before applying loadouts";
removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;

comment "Create the arrays for different equipment";
_rifle = [
	"rhs_weap_aks74_2", 0.90, 
	"rhs_weap_aks74", 0.10] call BIS_fnc_selectRandomWeighted;
_optic = [
	"rhs_acc_pkas", 
	"rhs_acc_ekp1", 
	"rhs_acc_1p63", 
	"rhs_acc_okp7_dovetail"] call BIS_fnc_selectRandom;
_uniform = [
	"rhs_uniform_emr_patchless", 
	"rhs_uniform_vkpo", 
	"rhs_uniform_vkpo_alt", 
	"rhs_uniform_vkpo_gloves", 
	"rhs_uniform_vkpo_gloves_alt"] call BIS_fnc_selectRandom;
_vest = [
	"rhs_6b23_6sh116", 
	"rhs_6b23_digi_6sh92", 
	"rhs_6b23_digi_6sh92_spetsnaz2", 
	"rhs_6b23_digi_6sh92_headset", 
	"rhs_6b23_digi_6sh92_headset_spetsnaz", 
	"rhs_6b23_digi_6sh92_radio", 
	"rhs_6b23_digi_6sh92_Spetsnaz"] call BIS_fnc_selectRandom;
_helmet = [
	"rhs_6b47", 
	"rhs_6b47_6m2", 
	"rhs_6b47_emr_2", 
	"rhs_6b47_emr_1", 
	"rhs_6b47_ess"] call BIS_fnc_selectRandom;

comment "Add Weapons and attachments";
player addWeapon _rifle;
switch(floor random 20) do {
	case 1: {
		player addPrimaryWeaponItem _optic;
	};
	default {};
};
player addPrimaryWeaponItem "rhs_acc_dtk1983";

comment "Add Uniforms and Gear";
player forceAddUniform _uniform;
player addVest _vest;
player addHeadgear _helmet;
player addBackpack "TRYK_B_Medbag_BK";

comment "Fill Uniform and Gear";
player addItem "ACE_morphine";
for "_i" from 1 to 5 do {player addItem "ACE_fieldDressing";};
for "_i" from 1 to 3 do {player addItem "ACE_tourniquet";};
player addItem "ACE_CableTie";
player addItem "ACE_EarPlugs";
player addItem "ACE_Flashlight_MX991";
player addItem "ACE_MapTools";
player addItem "O_IR_Grenade";
player addItem "Chemlight_green";
player addItem "rhs_mag_rdg2_white";
player addItem "rhs_mag_rdg2_black";
player addItem "ACE_microDAGR";
player addItem "ACE_EntrenchingTool";
for "_i" from 1 to 8 do {player addItem "rhs_30Rnd_545x39_7N10_plum_AK";};
player addItem "rhs_mag_f1";

comment "Start of standard medical gear";
for "_i" from 1 to 10 do {player addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 10 do {player addItemToBackpack "ACE_epinephrine";};
player addItemToBackpack "ACE_bodyBag";
player addItemToBackpack "ACE_EntrenchingTool";
player addItemToBackpack "ACE_SpraypaintRed";
player addItemToBackpack "ACE_plasmaIV";
player addItemToBackpack "ACE_salineIV";
for "_i" from 1 to 2 do {player addItemToBackpack "ACE_salineIV_500";};
for "_i" from 1 to 2 do {player addItemToBackpack "ACE_plasmaIV_500";};
player addItemToBackpack "ACE_plasmaIV_250";
player addItemToBackpack "ACE_salineIV_250";
player addItemToBackpack "ACE_surgicalKit";
player addItemToBackpack "ACE_personalAidKit";
for "_i" from 1 to 20 do {player addItemToBackpack "ACE_elasticBandage";};
for "_i" from 1 to 10 do {player addItemToBackpack "ACE_packingBandage";};
for "_i" from 1 to 10 do {player addItemToBackpack "ACE_quikclot";};
for "_i" from 1 to 7 do {player addItemToBackpack "ACE_tourniquet";};
for "_i" from 1 to 2 do {player addItemToBackpack "ACE_adenosine";};
comment "End of Medical gear";

comment "Add final Gear";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "TFAR_microdagr";
player linkItem "TFAR_anprc152";
player linkItem "ItemGPS";
player linkItem "rhs_1PN138";

player setSpeaker "ACE_NoVoice";

comment "Set G Force resistance and Medical + Engineer training";
player setVariable ["ACE_GForceCoef", 1];

[[player],"ace_medical_medicClass", 2, true] call ace_common_fnc_assignObjectsInList;
[[player],"ACE_IsEngineer", 0, true] call ace_common_fnc_assignObjectsInList;

hint "You're now a Russian infantry medic. \nYour medical equipment and expertise is vital for your unit's survival.";