class CfgPatches {
    class RGT_Loadouts {
        name = "RGT_Loadouts";
        author = "Mirrow";
        requiredAddons[] = {};
        requiredVersion = 1.00;
        units[] = {};
        weapons[] = {};
    };
};

class CfgFunctions {
	class RGT {
		tag = "RGT";
		class InfKits {
			file = "RGT\functions\InfKits";
				class AntiAirAmmoBearer{};
				class AR {};
				class ARAmmoBearer {};
				class CLS {};
				class Engineer {};
				class EOD {};
				class Grenadier {};
				class GrenadierAmmoBearer {};
				class JTAC {};
				class Leader {};
				class LRRM {};
				class Marksman {};
				class MedATAmmoBearer {};
				class HeavyATAmmoBearer {};
				class MG {};
				class MGAmmoBearer {};
				class Rifleman {};
		};
		class CBRNKits {
			file = "RGT\functions\CBRNKits";
				class ARCBRN {};
				class CLSCBRN {};
				class EODCBRN {};
				class GrenadierCBRN {};
				class JTACCBRN {};
				class LeaderCBRN {};
				class LRRMCBRN {};
				class MarksmanCBRN {};
				class RiflemanCBRN {};
		};
		class ColdWarKits {
			file = "RGT\functions\CWKits";
				class cw_AntiAir {};
				class cw_CLS {};
				class cw_EOD {};
				class cw_grenadier {};
				class cw_leader {};
				class cw_radioman {};
				class cw_marksman {};
				class cw_MG {};
				class cw_Rifleman {};
				class cw_LightAT {};
		};
		class ColdWarM16Kits {
			file = "RGT\functions\cwkitsm16";
				class cw_AntiAir_ar15 {};
				class cw_CLS_ar15 {};
				class cw_EOD_ar15 {};
				class cw_grenadier_ar15 {};
				class cw_leader_ar15 {};
				class cw_radioman_ar15 {};
				class cw_marksman_m14 {};
				class cw_Rifleman_ar15 {};
				class cw_LightAT_ar15 {};
		};
		class WoodlandKits {
			file = "RGT\functions\WdInfKits";
				class AntiAirAmmoBearerwd{};
				class ARwd {};
				class ARAmmoBearerwd {};
				class CLSwd {};
				class Engineerwd {};
				class EODwd {};
				class Grenadierwd {};
				class GrenadierAmmoBearerwd {};
				class JTACwd {};
				class Leaderwd {};
				class LRRMwd {};
				class Marksmanwd {};
				class MedATAmmoBearerwd {};
				class MGwd {};
				class MGAmmoBearerwd {};
				class Riflemanwd {};
		};
		class ReconKits {
			file = "RGT\functions\ReconKits";
				class ARRecon {};
				class CLSRecon {};
				class LeaderRecon {};
				class ScoutRecon {};
		};
		class DivingKits {
			file = "RGT\functions\DivingKits";
				class CLSDiving {};
				class EngineerDiving {};
				class LeaderDiving {};
				class RiflemanDiving {};
		};
		class SpecOpsKits {
			file = "RGT\functions\SpecOpsKits";
				class ARSpecOps {};
				class AssaultSpecOps {};
				class BreacherSpecOps {};
				class CLSSpecOps {};
				class JTACSpecOps {};
				class LeaderSpecOps {};
				class LightATSpecOps {};
				class MarksmanSpecOps {};
				class PointmanSpecOps {};
				class SignalerSpecOps {};
		};
		class CommonKits {
			file = "RGT\functions\CommonKits";
				class Crewman {};
				class HeliCrewman {};
				class PlaneCrewman {};
				class Ihadss {};
				class Parachute {};
				class ParachuteS {};
				class CigarZippo {};
				class CigsMatch {};
				class Lolly {};
				class Gasmask {};
				class Sniperbag {};
				class medbag {};
				class bigbag {};
				class maws {};
				class MedAT_AmmoBearer{};
				class jav {};
				class bigbagRUS {};
				class smallbag {};
				class smallbagRUS {};
				class blr {};
				class slr {};
				class Mortar_Tube {};
				class Mortar_Ammo {};
				class AntiAir {};
				class Ghilliearid1 {};
				class Ghilliearid2 {};
				class Ghillietrop1 {};
				class Ghillietrop2 {};
		};
		class SniperKits {
			file = "RGT\functions\SniperKits";
				class Sniper {};
				class Spotter {};
				class SniperSpecOps {};
				class SpotterSpecOps {};
				class HeavySniperSpecOps {};
				class SniperAFO {};
				class SpotterAFO {};
		};
		class RussianKits {
			file = "RGT\functions\RussianKits";
				class ARRUS {};
				class CLSRUS {};
				class EngineerAmmoBearerRUS {};
				class EngineerRUS {};
				class GrenadierAmmoBearerRUS {};
				class GrenadierRUS {};
				class LeaderRUS {};
				class LightATRUS {};
				class LRRMRUS {};
				class MarksmanRUS {};
				class MedATAmmoBearerRUS {};
				class MedATRUS {};
				class MGAmmoBearerRUS {};
				class MGRUS {};
				class RiflemanRUS {};
				class RWcrewRUS {};
				class FWcrewRUS {};
				class AFVcrewRUS {};
		};
		class SpetsnazKits {
			file = "RGT\functions\SpetsnazKits";
				class ARSpetsnaz {};
				class AssaultSpetsnaz {};
				class BreacherSpetsnaz {};
				class CLSSpetsnaz {};
				class LeaderSpetsnaz {};
				class LightATSpetsnaz {};
				class MarksmanSpetsnaz {};
				class PointmanSpetsnaz {};
				class SignalerSpetsnaz {};
		};
		class IndigKits {
			file = "RGT\functions\IndigKits";
				class CLSindig {};
				class Leaderindig {};
				class Marksmanindig {};
				class Operativeindig {};
		};
		class PmcKits {
			file = "RGT\functions\PmcKits";
				class ARPmc {};
				class CLSPmc {};
				class LeaderPmc {};
				class MercPmc {};
				class SniperPmc {};
				class body {};
		};
		class UcKits {
			file = "RGT\functions\UcKits";
				class ARUc {};
				class CLSUc {};
				class EngineerUc {};
				class LeaderUc {};
				class MarksmanUc {};
				class RiflemanUc {};
		};
		class ArcticKits {
			file = "RGT\functions\ArcticKits";
				class ARArctic {};
				class AssaultArctic {};
				class BreacherArctic {};
				class CLSArctic {};
				class GrenadierArctic {};
				class LeaderArctic {};
				class LightATArctic {};
				class MarksmanArctic {};
				class RTOArctic {};
				class JTACArctic {};
		};
		class GuerillaKits {
			file = "RGT\functions\GuerillaKits";
				class RebelGue {};
				class ARGue {};
				class CLSGue {};
				class GrenadierGue {};
				class LeaderGue {};
				class SniperGue {};	
		};
		class ChKits {
			file = "RGT\functions\ChKits";
				class char {};
				class chbreach {};
				class chcls {};
				class chdmr {};
				class chlead {};
				class chrifle {};
		};
		class CivKits {
			file = "RGT\functions\CivKits";
				class civi {};
				class busi {};
				class mech {};
				class peas {};
				class scie {};
				class repo {};
				class poli {};
				class wise {};
				class ngo {};
				class para {};
				class cons {};
				class band {};
		};
	};
};
#include "dialogs\defines.hpp"
#include "dialogs\StandardLoadoutUI.hpp"
#include "dialogs\SpecOpsLoadoutUI.hpp"
#include "dialogs\RussianLoadoutUI.hpp"
#include "dialogs\WoodlandLoadoutUI.hpp"