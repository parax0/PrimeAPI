#ifndef CENTITY_HPP
#define CENTITY_HPP

#include <PrimeAPI.h>

enum EScriptObjectType
{
    kSOT_Actor = 0x00,
    kSOT_Waypoint = 0x02,
    kSOT_Door = 0x03,
    kSOT_Trigger = 0x04,
    kSOT_Timer = 0x05,
    kSOT_Counter = 0x06,
    kSOT_Effect = 0x07,
    kSOT_Platform = 0x08,
    kSOT_Sound = 0x09,
    kSOT_Generator = 0x0A,
    kSOT_Dock = 0x0B,
    kSOT_Camera = 0x0C,
    kSOT_CameraWaypoint = 0x0D,
    kSOT_NewIntroBoss = 0x0E,
    kSOT_SpawnPoint = 0x0F,
    kSOT_CameraHint = 0x10,
    kSOT_Pickup = 0x11,
    kSOT_MemoryRelay = 0x13,
    kSOT_RandomRelay = 0x14,
    kSOT_Relay = 0x15,
    kSOT_Beetle = 0x16,
    kSOT_HUDMemo = 0x17,
    kSOT_CameraFilterKeyframe = 0x18,
    kSOT_CameraBlurKeyframe = 0x19,
    kSOT_DamageableTrigger = 0x1A,
    kSOT_Debris = 0x1B,
    kSOT_CameraShaker = 0x1C,
    kSOT_ActorKeyframe = 0x1D,
    kSOT_Water = 0x20,
    kSOT_Warwasp = 0x21,
    kSOT_SpacePirate = 0x24,
    kSOT_FlyingPirate = 0x25,
    kSOT_ElitePirate = 0x26,
    kSOT_MetroidBeta = 0x27,
    kSOT_ChozoGhost = 0x28,
    kSOT_CoverPoint = 0x2A,
    kSOT_SpiderBallWaypoint = 0x2C,
    kSOT_BloodFlower = 0x2D,
    kSOT_FlickerBat = 0x2E,
    kSOT_PathCamera = 0x2F,
    kSOT_GrapplePoint = 0x30,
    kSOT_PuddleSpore = 0x31,
    kSOT_DebugCameraWaypoint = 0x32,
    kSOT_SpiderBallAttractionSurface	= 0x33,
    kSOT_PuddleToadGamma = 0x34,
    kSOT_DistanceFog = 0x35,
    kSOT_FireFlea = 0x36,
    kSOT_MetareeAlpha = 0x37,
    kSOT_DockAreaChange = 0x38,
    kSOT_ActorRotate = 0x39,
    kSOT_SpecialFunction = 0x3A,
    kSOT_SpankWeed = 0x3B,
    kSOT_Parasite = 0x3D,
    kSOT_PlayerHint = 0x3E,
    kSOT_Ripper = 0x3F,
    kSOT_PickupGenerator = 0x40,
    kSOT_AIKeyframe = 0x41,
    kSOT_PointOfInterest = 0x42,
    kSOT_Drone = 0x43,
    kSOT_MetroidAlpha = 0x44,
    kSOT_DebrisExtended = 0x45,
    kSOT_Steam = 0x46,
    kSOT_Ripple = 0x47,
    kSOT_BallTrigger = 0x48,
    kSOT_TargetingPoint = 0x49,
    kSOT_EMPulse = 0x4A,
    kSOT_IceSheegoth = 0x4B,
    kSOT_PlayerActor = 0x4C,
    kSOT_Flaahgra = 0x4D,
    kSOT_AreaAttributes = 0x4E,
    kSOT_FishCloud = 0x4F,
    kSOT_FishCloudModifier = 0x50,
    kSOT_VisorFlare = 0x51,
    kSOT_WorldTeleporter = 0x52,
    kSOT_VisorGoo = 0x53,
    kSOT_JellyZap = 0x54,
    kSOT_ControllerAction = 0x55,
    kSOT_Switch = 0x56,
    kSOT_PlayerStateChange = 0x57,
    kSOT_Thardus = 0x58,
    kSOT_WallCrawlerSwarm = 0x5A,
    kSOT_AIJumpPoint = 0x5B,
    kSOT_FlaahgraTentacle = 0x5C,
    kSOT_RoomAcoustics = 0x5D,
    kSOT_ColorModulate = 0x5E,
    kSOT_ThardusRockProjectile = 0x5F,
    kSOT_Midi = 0x60,
    kSOT_StreamedAudio = 0x61,
    kSOT_WorldTeleporterToo = 0x62,
    kSOT_Repulsor = 0x63,
    kSOT_GunTurret = 0x64,
    kSOT_FogVolume = 0x65,
    kSOT_Babygoth = 0x66,
    kSOT_Eyeball = 0x67,
    kSOT_RadialDamage = 0x68,
    kSOT_CameraPitchVolume = 0x69,
    kSOT_EnvFxDensityController = 0x6A,
    kSOT_Magdolite = 0x6B,
    kSOT_TeamAIMgr = 0x6C,
    kSOT_SnakeWeedSwarm = 0x6D,
    kSOT_ActorContraption = 0x6E,
    kSOT_Oculus = 0x6F,
    kSOT_Geemer = 0x70,
    kSOT_SpindleCamera = 0x71,
    kSOT_AtomicAlpha = 0x72,
    kSOT_CameraHintTrigger = 0x73,
    kSOT_RumbleEffect = 0x74,
    kSOT_AmbientAI = 0x75,
    kSOT_AtomicBeta = 0x77,
    kSOT_IceZoomer = 0x78,
    kSOT_Puffer = 0x79,
    kSOT_Tryclops = 0x7A,
    kSOT_Ridley = 0x7B,
    kSOT_Seedling = 0x7C,
    kSOT_ThermalHeatFader = 0x7D,
    kSOT_Burrower = 0x7F,
    kSOT_ScriptBeam = 0x81,
    kSOT_WorldLightFader = 0x82,
    kSOT_MetroidPrimeStage2 = 0x83,
    kSOT_MetroidPrimeStage1 = 0x84,
    kSOT_MazeNode = 0x85,
    kSOT_OmegaPirate = 0x86,
    kSOT_PhazonPool = 0x87,
    kSOT_PhazonHealingNodule = 0x88,
    kSOT_NewCameraShaker = 0x89,
    kSOT_ShadowProjector = 0x8A,
    kSOT_EnergyBall = 0x8B,
    kSOT_ScriptObjectTypeMAX
};

enum EScriptObjectState
{
    kState_Any = -1,
    kState_Active = 0,
    kState_Arrived = 1,
    kState_Closed = 2,
    kState_Entered = 3,
    kState_Exited = 4,
    kState_Inactive = 5,
    kState_Inside = 6,
    kState_MaxReached = 7,
    kState_Open = 8,
    kState_Zero = 9,
    kState_Attack = 10,
    kState_UNKS1 = 11,
    kState_Retreat = 12,
    kState_Patrol = 13,
    kState_Dead = 14,
    kState_CameraPath = 15,
    kState_CameraTarget = 16,
    kState_UNKS2 = 17,
    kState_Play = 18,
    kState_UNKS3 = 19,
    kState_DeathRattle = 20,
    kState_UNKS4 = 21,
    kState_Damage = 22,
    kState_InvulnDamage = 23,
    kState_UNKS5 = 24,
    kState_Modify = 25,
    kState_ScanStart = 26,
    kState_ScanProcessing = 27,
    kState_ScanDone = 28,
    kState_UnFrozen = 29,
    kState_Default = 30,
    kState_ReflectedDamage = 31,
    kState_InheritBounds = 32
};

enum EScriptObjectMessage
{
    kMsg_None = -1,
    kMsg_UNKM0 = 0,
    kMsg_Activate = 1,
    kMsg_Arrived = 2,
    kMsg_Close = 3,
    kMsg_Deactivate = 4,
    kMsg_Decrement = 5,
    kMsg_Follow = 6,
    kMsg_Increment = 7,
    kMsg_Next = 8,
    kMsg_Open = 9,
    kMsg_Reset = 10,
    kMsg_ResetAndStart = 11,
    kMsg_SetToMax = 12,
    kMsg_SetToZero = 13,
    kMsg_Start = 14,
    kMsg_Stop = 15,
    kMsg_StopAndReset = 16,
    kMsg_ToggleActive = 17,
    kMsg_UNKM18 = 18,
    kMsg_Action = 19,
    kMsg_Play = 20,
    kMsg_Alert = 21,
    kMsg_InternalMessage00 = 22,
    kMsg_OnFloor = 23,
    kMsg_InternalMessage02 = 24,
    kMsg_InternalMessage03 = 25,
    kMsg_Falling = 26,
    kMsg_OnIceSurface = 27,
    kMsg_OnMudSlowSurface = 28,
    kMsg_OnNormalSurface = 29,
    kMsg_Touched = 30,
    kMsg_AddPlatformRider = 31,
    kMsg_LandOnNotFloor = 32,
    kMsg_Registered = 33,
    kMsg_Deleted = 34,
    kMsg_InitializedInArea = 35,
    kMsg_WorldInitialized = 36,
    kMsg_AddSplashInhabitant = 37,
    kMsg_UpdateSplashInhabitant = 38,
    kMsg_RemoveSplashInhabitant = 39,
    kMsg_Jumped = 40,
    kMsg_Damage = 41,
    kMsg_InvulnDamage = 42,
    kMsg_ProjectileCollide = 43,
    kMsg_InSnakeWeed = 44,
    kMsg_AddPhazonPoolInhabitant = 45,
    kMsg_UpdatePhazonPoolInhabitant = 46,
    kMsg_RemovePhazonPoolInhabitant = 47,
    kMsg_SuspendedMove = 48
};

struct SConnection
{
    EScriptObjectState x0_mState;
    EScriptObjectMessage x4_mMsg;
    uint32 x8_mObjId;
};

class CEntity
{
public:
    static const uint8 ACTIVE_MASK = 0x80;
    static const uint8 GRAVEYARD_MASK = 0x40;
    static const uint8 BLOCKED_MASK = 0x20;
    static const uint8 USE_MASK = 0x10;
	
	DECLARE_FIELD(uint32, AreaID, 0x4);
	DECLARE_FIELD(uint16, UniqueID, 0x8);
	DECLARE_FIELD(uint32, EditorID, 0xC);
	DECLARE_FIELD(uint8, Status, 0x30);
};

#endif // CENTITY_HPP