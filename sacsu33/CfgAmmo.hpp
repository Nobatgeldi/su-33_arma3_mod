class CfgAmmo
{
	class MissileBase;
	class SAC_M_R73_AA: MissileBase
	{
		model="\SACSu33\SACR27RE.p3d";
		proxyShape="\SACSu33\SACR27RE_proxy.p3d";
		hit=200;
		indirectHit=85;
		indirectHitRange=10;
		maneuvrability=27;
		simulation="shotMissile";
		simulationStep=0.0020000001;
		airLock=2;
		irLock=1;
		cost=1500;
		maxSpeed=828;
		timeToLive=40;
		airFriction=0.050000001;
		sideAirFriction=0.1;
		trackOversteer=1;
		trackLead=1;
		initTime=0;
		thrustTime=5;
		thrust=240;
		fuseDistance=500;
		CraterEffects="AAMissileCrater";
		explosionEffects="AAMissileExplosion";
		//effectsMissile="FX_SU35_Missile_AA";
		whistleDist=20;
		muzzleEffect="BIS_fnc_effectFiredHeliRocket";
		weaponLockSystem="2 + 16 + 4";
		missileLockCone=120;
		maxControlRange=8000;
	};
	class SAC_M_R27RE: SAC_M_R73_AA
	{
		model="\SACSu33\SACR27RE.p3d";
		proxyShape="\SACSu33\SACR27RE_proxy.p3d";
		hit=100;
		indirectHit=50;
		indirectHitRange=9;
		maneuvrability=20;
		simulationStep=0.0020000001;
		trackOversteer=5;
		trackLead=0.94999999;
		airLock=1;
		irLock=1;
		initTime=0.30000001;
		thrustTime=15;
		thrust=400;
		cost=10000;
		maxSpeed=2300;
		minRange=300;
		minRangeProbab=0.1;
		midRange=2000;
		midRangeProbab=0.89999998;
		maxRange=5000;
		maxRangeProbab=0.69999999;
		effectsMissile="SACmissile1";
	};
	class SAC_M_R77: SAC_M_R73_AA
	{
		model="\SACSu33\SACR77.p3d";
		proxyShape="\SACSu33\SACR77_proxy.p3d";
		hit=80;
		indirectHit=40;
		indirectHitRange=9;
		maneuvrability=30;
		simulationStep=0.0020000001;
		trackOversteer=5;
		trackLead=0.69999999;
		airLock=1;
		//simulation="shotMissile";
		irLock=1;
		thrustTime=12;
		thrust=380;
		cost=10000;
		initTime=0.15000001;
		maxSpeed=2100;
		minRange=100;
		minRangeProbab=0.1;
		midRange=1800;
		midRangeProbab=0.89999998;
		maxRange=6000;
		maxRangeProbab=0.69999999;
		effectsMissile="SACmissile1";
	};
};