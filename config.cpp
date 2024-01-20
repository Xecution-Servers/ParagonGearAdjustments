class CfgPatches
{
	class ParagonGearAdjustments
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"Paragon_Gear"
		};
	};
};
class CfgMods
{
	class ParagonGearAdjustments
	{
		dir="ParagonGearAdjustments";
		picture=""; 
		action="";
		hideName=1;
		hidePicture=1;
		name="ParagonGearAdjustments";
		credits=""; 
		author="";
		authorID="0";  
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Game",
			"World",
			"Mission"
		};
		class defs
		{
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"ParagonGearAdjustments/scripts/3_game"
				};
			};
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"ParagonGearAdjustments/scripts/4_world"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"ParagonGearAdjustments/scripts/5_mission"
				};
			};
		};
	};
};
class CfgVehicles
{
	class Clothing_Base;
	class Mich2001Helmet;
	class Clothing: Clothing_Base{};
	class 6B43_ColorBase: Clothing // the tiem your adjusting for example this is the 6B43
	{
		scope = 0;
		itemSize[] = {4,4}; //the size of the item
		itemsCargoSize[] = {0,0}; //how much cargo the item can hold
		descriptionShort = "The 6B43 is a T4 armor"; //description for item
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=350; //how fast the item gets ruined
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"ParagonGear\6B43Vest\data\6B43Vest.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"ParagonGear\6B43Vest\data\6B43Vest.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ParagonGear\6B43Vest\data\6B43Vest_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"ParagonGear\6B43Vest\data\6B43Vest_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ParagonGear\6B43Vest\data\6B43Vest_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.09; //bullet damage reduction
					};
					class Blood
					{
						damage = 0.04; //bullet blood loss reduction
					};
					class Shock
					{
						damage = 0.09; //bullet shock damage reduction
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.07; //melee damage reduction
					};
					class Blood
					{
						damage = 0; //melee blood loss reduction
					};
					class Shock
					{
						damage = 0.15; //melee shock damage reduction
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.07; //zombie damage reduction
					};
					class Blood
					{
						damage = 0.01; //zombie blood loss reduction
					};
					class Shock
					{
						damage = 0.01; //zombie shock damage reduction
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.14; //Grenade damage reduction
					};
					class Blood
					{
						damage = 0; //Grenade blood loss reduction
					};
					class Shock
					{
						damage = 0.07; //Grenade shock damage reduction
					};
				};
			};
		};
	};
	class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="SmershVest_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SmershVest_drop_SoundSet";
					id=898;
				};
			};
		};
	class 6B13_ColorBase : Clothing
	{
		scope = 0;
		descriptionShort = "The 6B13 Vest is a T4 vest.";
		itemSize[] = {4,5};
		class ClothingTypes
		{
			male = "ParagonGear\6B13\6B13_m.p3d";
			female = "ParagonGear\6B13\6B13_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 350;
					healthLevels[] = {{1,{"ParagonGear\6B13\data\6B13.rvmat"}},{0.7,{"ParagonGear\6B13\data\6B13.rvmat"}},{0.5,{"ParagonGear\6B13\data\6B13_damage.rvmat"}},{0.3,{"ParagonGear\6B13\data\6B13_damage.rvmat"}},{0,{"ParagonGear\6B13\data\6B13_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.09; //bullet damage reduction
					};
					class Blood
					{
						damage = 0.04; //bullet blood loss reduction
					};
					class Shock
					{
						damage = 0.09; //bullet shock damage reduction
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.07; //melee damage reduction
					};
					class Blood
					{
						damage = 0; //melee blood loss reduction
					};
					class Shock
					{
						damage = 0.15; //melee shock damage reduction
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.07; //zombie damage reduction
					};
					class Blood
					{
						damage = 0.01; //zombie blood loss reduction
					};
					class Shock
					{
						damage = 0.01; //zombie shock damage reduction
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.14; //Grenade damage reduction
					};
					class Blood
					{
						damage = 0; //Grenade blood loss reduction
					};
					class Shock
					{
						damage = 0.07; //Grenade shock damage reduction
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "SmershVest_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "SmershVest_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class IOTV_ColorBase: Clothing
	{
		scope = 0;
		itemSize[] = {5,5};
		descriptionShort = "The IOTV is a T4 armor";
		itemsCargoSize[] = {0,0};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=350;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"ParagonGear\IOTV\data\IOTV.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"ParagonGear\IOTV\data\IOTV.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ParagonGear\IOTV\data\IOTV_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"ParagonGear\IOTV\data\IOTV_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ParagonGear\IOTV\data\IOTV_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.09; //bullet damage reduction
					};
					class Blood
					{
						damage = 0.04; //bullet blood loss reduction
					};
					class Shock
					{
						damage = 0.09; //bullet shock damage reduction
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.07; //melee damage reduction
					};
					class Blood
					{
						damage = 0; //melee blood loss reduction
					};
					class Shock
					{
						damage = 0.15; //melee shock damage reduction
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.07; //zombie damage reduction
					};
					class Blood
					{
						damage = 0.01; //zombie blood loss reduction
					};
					class Shock
					{
						damage = 0.01; //zombie shock damage reduction
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.14; //Grenade damage reduction
					};
					class Blood
					{
						damage = 0; //Grenade blood loss reduction
					};
					class Shock
					{
						damage = 0.07; //Grenade shock damage reduction
					};
				};
			};
		};
	class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="SmershVest_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SmershVest_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class Compact_6B43_ColorBase : Clothing
	{
		scope = 0;
		itemSize[] = { 4,4 };
		itemsCargoSize[] = { 0,0 };
		descriptionShort = "The Compact 6B43 is a T3 armor";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 350;
					healthLevels[] =
					{

						{
							1,

							{
								"ParagonGear\6B43Vest\data\6B43Vest.rvmat"
							}
						},

						{
							0.7,

							{
								"ParagonGear\6B43Vest\data\6B43Vest.rvmat"
							}
						},

						{
							0.5,

							{
								"ParagonGear\6B43Vest\data\6B43Vest_damage.rvmat"
							}
						},

						{
							0.3,

							{
								"ParagonGear\6B43Vest\data\6B43Vest_damage.rvmat"
							}
						},

						{
							0,

							{
								"ParagonGear\6B43Vest\data\6B43Vest_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.18;
					};
					class Blood
					{
						damage = 0.04;
					};
					class Shock
					{
						damage = 0.20;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.18;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.18;
					};
					class Blood
					{
						damage = 0.01;
					};
					class Shock
					{
						damage = 0.01;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.36;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.07;
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "SmershVest_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "SmershVest_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class DCS_V2_ColorBase : Clothing
	{
		scope = 0;
		itemSize[] = { 5,5 };
		itemsCargoSize[] = { 0,0 };
		descriptionShort = "The Heavy DCS is a T3 armor";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 350;
					healthLevels[] =
					{

						{
							1,

							{
								"ParagonGear\DCS\data\Vest.rvmat","ParagonGear\DCS\data\Protection.rvmat"
							}
						},

						{
							0.7,

							{
								"ParagonGear\DCS\data\Vest.rvmat","ParagonGear\DCS\data\Protection.rvmat"
							}
						},

						{
							0.5,

							{
								"ParagonGear\DCS\data\Vest_damage.rvmat","ParagonGear\DCS\data\Protection_damage.rvmat"
							}
						},

						{
							0.3,

							{
								"ParagonGear\DCS\data\Vest_damage.rvmat","ParagonGear\DCS\data\Protection_damage.rvmat"
							}
						},

						{
							0,

							{
								"ParagonGear\DCS\data\Vest_destruct.rvmat","ParagonGear\DCS\data\Protection_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.18;
					};
					class Blood
					{
						damage = 0.04;
					};
					class Shock
					{
						damage = 0.20;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.18;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.18;
					};
					class Blood
					{
						damage = 0.01;
					};
					class Shock
					{
						damage = 0.01;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.36;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.07;
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "SmershVest_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "SmershVest_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class Slick_ColorBase: Clothing
	{
		scope = 0;
		itemSize[] = {4,4};
		itemsCargoSize[] = {0,0};
		descriptionShort = "The Slick Vest is a light weight T3 armor";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=350;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"ParagonGear\Slick\data\Slick.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"ParagonGear\Slick\data\Slick.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ParagonGear\Slick\data\Slick_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"ParagonGear\Slick\data\Slick_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ParagonGear\Slick\data\Slick_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.18;
					};
					class Blood
					{
						damage = 0.04;
					};
					class Shock
					{
						damage = 0.20;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.18;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.18;
					};
					class Blood
					{
						damage = 0.01;
					};
					class Shock
					{
						damage = 0.01;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.36;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.07;
					};
				};
			};
		};
	class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="SmershVest_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SmershVest_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class DCS_L_ColorBase : Clothing
	{
		scope = 0;
		itemSize[] = { 4,4 };
		itemsCargoSize[] = { 0,0 };
		descriptionShort = "The Light DCS is a T2 armor";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 350;
					healthLevels[] =
					{

						{
							1,

							{
								"ParagonGear\DCS\data\Vest.rvmat"
							}
						},

						{
							0.7,

							{
								"ParagonGear\DCS\data\Vest.rvmat"
							}
						},

						{
							0.5,

							{
								"ParagonGear\DCS\data\Vest_damage.rvmat"
							}
						},

						{
							0.3,

							{
								"ParagonGear\DCS\data\Vest_damage.rvmat"
							}
						},

						{
							0,

							{
								"ParagonGear\DCS\data\Vest_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.3;
					};
					class Blood
					{
						damage = 0.04;
					};
					class Shock
					{
						damage = 0.25;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.3;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.35;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0.01;
					};
					class Shock
					{
						damage = 0.01;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.5;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.07;
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "SmershVest_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "SmershVest_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class Soviet_ColorBase: Clothing
	{
		scope = 0;
		itemSize[] = {5,4};
		itemsCargoSize[] = {0,0};
		descriptionShort = "The Soviet Vest is a T2 armor";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=350;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"ParagonGear\Soviet\data\Soviet.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"ParagonGear\Soviet\data\Soviet.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ParagonGear\Soviet\data\Soviet_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"ParagonGear\Soviet\data\Soviet_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ParagonGear\Soviet\data\Soviet_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.3;
					};
					class Blood
					{
						damage = 0.04;
					};
					class Shock
					{
						damage = 0.25;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.3;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.35;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0.01;
					};
					class Shock
					{
						damage = 0.01;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.5;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.07;
					};
				};
			};
		};
	class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="SmershVest_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SmershVest_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class TacticalVest_ColorBase : Clothing
	{
		scope = 0;
		descriptionShort = "The Tactical Vest is a T2 armor";
		itemSize[] = { 4,4 };
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 350;
					healthLevels[] = { {1,{"ParagonGear\TacticalVest\data\TacticalVest.rvmat"}},{0.7,{"ParagonGear\TacticalVest\data\TacticalVest.rvmat"}},{0.5,{"ParagonGear\TacticalVest\data\TacticalVest_damage.rvmat"}},{0.3,{"ParagonGear\TacticalVest\data\TacticalVest_damage.rvmat"}},{0,{"ParagonGear\TacticalVest\data\TacticalVest_destruct.rvmat"}} };
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.3;
					};
					class Blood
					{
						damage = 0.04;
					};
					class Shock
					{
						damage = 0.25;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.3;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.35;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0.01;
					};
					class Shock
					{
						damage = 0.01;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.5;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.07;
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "SmershVest_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "SmershVest_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class JPC_ColorBase : Clothing
	{
		scope = 0;
		itemSize[] = { 4,4 };
		itemsCargoSize[] = { 0,0 };
		descriptionShort = "The JPC Vest is a T1 armor";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 375;
					healthLevels[] =
					{

						{
							1,

							{
								"ParagonGear\JPC\data\JPC.rvmat"
							}
						},

						{
							0.7,

							{
								"ParagonGear\JPC\data\JPC.rvmat"
							}
						},

						{
							0.5,

							{
								"ParagonGear\JPC\data\JPC_damage.rvmat"
							}
						},

						{
							0.3,

							{
								"ParagonGear\JPC\data\JPC_damage.rvmat"
							}
						},

						{
							0,

							{
								"ParagonGear\JPC\data\JPC_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.4;
					};
					class Blood
					{
						damage = 0.04;
					};
					class Shock
					{
						damage = 0.3;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.4;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.4;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.35;
					};
					class Blood
					{
						damage = 0.01;
					};
					class Shock
					{
						damage = 0.01;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.5;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.07;
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "SmershVest_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "SmershVest_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class TacTec_ColorBase: Clothing
	{
		scope = 0;
		itemSize[] = {4,4};
		itemsCargoSize[] = {0,0};
		descriptionShort = "The Tac Tec is a T1 armor";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=375;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"ParagonGear\TacTec\data\TacTec.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"ParagonGear\TacTec\data\TacTec.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ParagonGear\TacTec\data\TacTec_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"ParagonGear\TacTec\data\TacTec_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ParagonGear\TacTec\data\TacTec_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.4;
					};
					class Blood
					{
						damage = 0.04;
					};
					class Shock
					{
						damage = 0.3;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.4;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.4;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.35;
					};
					class Blood
					{
						damage = 0.01;
					};
					class Shock
					{
						damage = 0.01;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.5;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.07;
					};
				};
			};
		};
	class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="SmershVest_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SmershVest_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class Killa_ColorBase: Clothing
	{
		scope = 0;
		itemSize[] = {4,4};
		descriptionShort = "The Killa Helmet is a T4 helmet";
		class ClothingTypes
		{
			male = "ParagonGear\Killa\Killa_m.p3d";
			female = "ParagonGear\Killa\Killa_m.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"ParagonGear\Killa\data\Killa.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"ParagonGear\Killa\data\Killa.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ParagonGear\Killa\data\Killa_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"ParagonGear\Killa\data\Killa_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ParagonGear\Killa\data\Killa_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.07;
					};
					class Blood
					{
						damage = 0.01;
					};
					class Shock
					{
						damage = 0.07;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.07;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.07;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.07;
					};
					class Blood
					{
						damage = 0.01;
					};
					class Shock
					{
						damage = 0.01;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.14;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.07;
					};
				};
			};
		};
	class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "pickUpPot_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "BallisticHelmet_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class Space_Helmet_ColorBase : Mich2001Helmet
	{
		scope = 0;
		descriptionShort = "The Space Raider Helmet is a T4 helmet";
		itemSize[] = { 4,4 };
		class ClothingTypes
		{
			male = "ParagonGear\Space_Helmet\Space_Helmet_m.p3d";
			female = "ParagonGear\Space_Helmet\Space_Helmet_m.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = { {1,{"ParagonGear\Space_Helmet\data\Space_Helmet.rvmat"}},{0.7,{"ParagonGear\Space_Helmet\data\Space_Helmet.rvmat"}},{0.5,{"ParagonGear\Space_Helmet\data\Space_Helmet_damage.rvmat"}},{0.3,{"ParagonGear\Space_Helmet\data\Space_Helmet_damage.rvmat"}},{0,{"ParagonGear\Space_Helmet\data\Space_Helmet_destruct.rvmat"}} };
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.07;
					};
					class Blood
					{
						damage = 0.01;
					};
					class Shock
					{
						damage = 0.07;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.07;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.07;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.07;
					};
					class Blood
					{
						damage = 0.01;
					};
					class Shock
					{
						damage = 0.01;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.14;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.07;
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "pickUpPot_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "BallisticHelmet_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class Paragon_Space_Helmet_Black : Space_Helmet_ColorBase
	{
		scope = 2;
		displayName = "Black Space Raider Helmet";
	};
	class Paragon_Space_Helmet_Blue : Space_Helmet_ColorBase
	{
		scope = 2;
		displayName = "Blue Space Raider Helmet";
	};
	class Paragon_Space_Helmet_Desert : Space_Helmet_ColorBase
	{
		scope = 2;
		displayName = "Desert Space Raider Helmet";
	};
	class Paragon_Space_Helmet_Green : Space_Helmet_ColorBase
	{
		scope = 2;
		displayName = "Green Space Raider Helmet";
	};
	class Paragon_Space_Helmet_White : Space_Helmet_ColorBase
	{
		scope = 2;
		displayName = "White Space Raider Helmet";
	};
	class Ballistic_Helmet_ColorBase : Mich2001Helmet
	{
		scope = 0;
		descriptionShort = "The Ballistic Helmet is a T4 helmet";
		itemSize[] = { 3,3 };
		class ClothingTypes
		{
			male = "ParagonGear2\Ballistic_Helmet\Ballistic_Helmet_m.p3d";
			female = "ParagonGear2\Ballistic_Helmet\Ballistic_Helmet_m.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = { {1,{"ParagonGear2\Ballistic_Helmet\data\Ballistic_Helmet.rvmat"}},{0.7,{"ParagonGear2\Ballistic_Helmet\data\Ballistic_Helmet.rvmat"}},{0.5,{"ParagonGear2\Ballistic_Helmet\data\Ballistic_Helmet_damage.rvmat"}},{0.3,{"ParagonGear2\Ballistic_Helmet\data\Ballistic_Helmet_damage.rvmat"}},{0,{"ParagonGear2\Ballistic_Helmet\data\Ballistic_Helmet_destruct.rvmat"}} };
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.07;
					};
					class Blood
					{
						damage = 0.01;
					};
					class Shock
					{
						damage = 0.07;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.07;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.07;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.07;
					};
					class Blood
					{
						damage = 0.01;
					};
					class Shock
					{
						damage = 0.01;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.14;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.07;
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "pickUpPot_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "BallisticHelmet_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class Paragon_Ballistic_H_Black : Ballistic_Helmet_ColorBase
	{
		scope = 2;
		displayName = "Black Ballistic Helmet";
		hiddenSelectionsTextures[] = { "ParagonGear2\Ballistic_Helmet\data\Ballistic_Helmet_Black.paa" };
	};
	class Paragon_Ballistic_H_Blue : Ballistic_Helmet_ColorBase
	{
		scope = 2;
		displayName = "Blue Ballistic Helmet";
		hiddenSelectionsTextures[] = { "ParagonGear2\Ballistic_Helmet\data\Ballistic_Helmet_Blue.paa" };
	};
	class Paragon_Ballistic_H_Green : Ballistic_Helmet_ColorBase
	{
		scope = 2;
		displayName = "Green Ballistic Helmet";
		hiddenSelectionsTextures[] = { "ParagonGear2\Ballistic_Helmet\data\Ballistic_Helmet_Green.paa" };
	};
	class Paragon_Ballistic_H_Desert : Ballistic_Helmet_ColorBase
	{
		scope = 2;
		displayName = "Desert Ballistic Helmet";
		hiddenSelectionsTextures[] = { "ParagonGear2\Ballistic_Helmet\data\Ballistic_Helmet_Desert.paa" };
	};
	class Paragon_Ballistic_H_Grey : Ballistic_Helmet_ColorBase
	{
		scope = 2;
		displayName = "Grey Ballistic Helmet";
		hiddenSelectionsTextures[] = { "ParagonGear2\Ballistic_Helmet\data\Ballistic_Helmet_Grey.paa" };
	};
	class Altyn_Helmet_ColorBase: Clothing
	{
		scope = 0;
		itemSize[] = {4,4};
		descriptionShort = "The Altyn Helmet is a T3 helmet";
		class ClothingTypes
		{
			male = "ParagonGear\Altyn\Altyn_m.p3d";
			female = "ParagonGear\Altyn\Altyn_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"ParagonGear\Altyn\data\Altyn.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"ParagonGear\Altyn\data\Altyn.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ParagonGear\Altyn\data\Altyn_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"ParagonGear\Altyn\data\Altyn_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ParagonGear\Altyn\data\Altyn_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.18;
					};
					class Blood
					{
						damage = 0.01;
					};
					class Shock
					{
						damage = 0.07;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.18;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.07;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.18;
					};
					class Blood
					{
						damage = 0.01;
					};
					class Shock
					{
						damage = 0.01;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.36;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.07;
					};
				};
			};
		};
	class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "pickUpPot_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "BallisticHelmet_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class Armored_Helmet_ColorBase: Clothing
	{
		scope = 0;
		itemSize[] = {4,4};
		descriptionShort = "The Armored Helmet is a T2 helmet";
		class ClothingTypes
		{
			male = "ParagonGear\Armored_Helmet\Armored_Helmet_m.p3d";
			female = "ParagonGear\Armored_Helmet\Armored_Helmet_m.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"ParagonGear\Armored_Helmet\data\Armored_Helmet.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"ParagonGear\Armored_Helmet\data\Armored_Helmet.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ParagonGear\Armored_Helmet\data\Armored_Helmet_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"ParagonGear\Armored_Helmet\data\Armored_Helmet_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ParagonGear\Armored_Helmet\data\Armored_Helmet_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0.01;
					};
					class Shock
					{
						damage = 0.07;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.07;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0.01;
					};
					class Shock
					{
						damage = 0.01;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.5;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.07;
					};
				};
			};
		};
	class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "pickUpPot_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "BallisticHelmet_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class Scifi_Helmet_ColorBase: Mich2001Helmet
	{
		scope = 0;
		descriptionShort = "The Scifi Helmet is a T3 helmet";
		itemSize[] = {3,3};
		class ClothingTypes
		{
			male = "ParagonGear\Scifi_Helmet\Scifi_Helmet_m.p3d";
			female = "ParagonGear\Scifi_Helmet\Scifi_Helmet_m.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"ParagonGear\Scifi_Helmet\data\Scifi_Helmet.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"ParagonGear\Scifi_Helmet\data\Scifi_Helmet.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ParagonGear\Scifi_Helmet\data\Scifi_Helmet_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"ParagonGear\Scifi_Helmet\data\Scifi_Helmet_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ParagonGear\Scifi_Helmet\data\Scifi_Helmet_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.18;
					};
					class Blood
					{
						damage = 0.01;
					};
					class Shock
					{
						damage = 0.07;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.18;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.07;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.18;
					};
					class Blood
					{
						damage = 0.01;
					};
					class Shock
					{
						damage = 0.01;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.36;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.07;
					};
				};
			};
		};
	class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "pickUpPot_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "BallisticHelmet_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class Maska_Helmet_ColorBase: Clothing
	{
		scope = 0;
		itemSize[] = {4,4};
		descriptionShort = "The Maska Helmet is a T3 helmet";
		class ClothingTypes
		{
			male = "ParagonGear\Maska\Maska_m.p3d";
			female = "ParagonGear\Maska\Maska_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"ParagonGear\Maska\data\Maska.rvmat","ParagonGear\Maska\data\Maska_Mask.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"ParagonGear\Maska\data\Maska.rvmat","ParagonGear\Maska\data\Maska_Mask.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ParagonGear\Maska\data\Maska_damage.rvmat","ParagonGear\Maska\data\Maska_Mask_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"ParagonGear\Maska\data\Maska_damage.rvmat","ParagonGear\Maska\data\Maska_Mask_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ParagonGear\Maska\data\Maska_destruct.rvmat","ParagonGear\Maska\data\Maska_Mask_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.18;
					};
					class Blood
					{
						damage = 0.01;
					};
					class Shock
					{
						damage = 0.07;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.18;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.07;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.18;
					};
					class Blood
					{
						damage = 0.01;
					};
					class Shock
					{
						damage = 0.01;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.36;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.07;
					};
				};
			};
		};
	class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "pickUpPot_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "BallisticHelmet_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class Mando_ColorBase: Mich2001Helmet
	{
		scope = 0;
		itemSize[] = {3,3};
		descriptionShort = "The Mando Helmet is a T2 helmet";
		class ClothingTypes
		{
			male = "ParagonGear\Mando\Mando_m.p3d";
			female = "ParagonGear\Mando\Mando_m.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"ParagonGear\Mando\data\Mando.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"ParagonGear\Mando\data\Mando.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ParagonGear\Mando\data\Mando_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"ParagonGear\Mando\data\Mando_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ParagonGear\Mando\data\Mando_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0.01;
					};
					class Shock
					{
						damage = 0.07;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.07;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0.01;
					};
					class Shock
					{
						damage = 0.01;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.5;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.07;
					};
				};
			};
		};
	class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "pickUpPot_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "BallisticHelmet_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class Combat_Helmet_ColorBase : Mich2001Helmet
	{
		scope = 0;
		descriptionShort = "The Combat Helmet is a T2 helmet";
		itemSize[] = { 3,3 };
		class ClothingTypes
		{
			male = "ParagonGear\Combat_Helmet\Combat_Helmet_m.p3d";
			female = "ParagonGear\Combat_Helmet\Combat_Helmet_m.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = { {1,{"ParagonGear\Combat_Helmet\data\Combat_Helmet.rvmat"}},{0.7,{"ParagonGear\Combat_Helmet\data\Combat_Helmet.rvmat"}},{0.5,{"ParagonGear\Combat_Helmet\data\Combat_Helmet_damage.rvmat"}},{0.3,{"ParagonGear\Combat_Helmet\data\Combat_Helmet_damage.rvmat"}},{0,{"ParagonGear\Combat_Helmet\data\Combat_Helmet_destruct.rvmat"}} };
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0.01;
					};
					class Shock
					{
						damage = 0.07;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.07;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0.01;
					};
					class Shock
					{
						damage = 0.01;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.5;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.07;
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "pickUpPot_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "BallisticHelmet_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class Paragon_Combat_H_Black : Combat_Helmet_ColorBase
	{
		scope = 2;
		displayName = "Black Combat Helmet";
		hiddenSelectionsTextures[] = { "ParagonGear\Combat_Helmet\data\Combat_Helmet_Black.paa" };
	};
	class Paragon_Combat_H_Blue : Combat_Helmet_ColorBase
	{
		scope = 2;
		displayName = "Blue Combat Helmet";
		hiddenSelectionsTextures[] = { "ParagonGear\Combat_Helmet\data\Combat_Helmet_Blue.paa" };
	};
	class Paragon_Combat_H_Green : Combat_Helmet_ColorBase
	{
		scope = 2;
		displayName = "Green Combat Helmet";
		hiddenSelectionsTextures[] = { "ParagonGear\Combat_Helmet\data\Combat_Helmet_Green.paa" };
	};
	class Paragon_Combat_H_Desert : Combat_Helmet_ColorBase
	{
		scope = 2;
		displayName = "Desert Combat Helmet";
		hiddenSelectionsTextures[] = { "ParagonGear\Combat_Helmet\data\Combat_Helmet_Desert.paa" };
	};
	class Tactical_Helmet_ColorBase: Mich2001Helmet
	{
		scope = 0;
		itemSize[] = {3,3};
		descriptionShort = "The Tactical Helmet is a T1 helmet";
		class ClothingTypes
		{
			male = "ParagonGear\Tactical_Helmet\TacHelm_m.p3d";
			female = "ParagonGear\Tactical_Helmet\TacHelm_m.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"ParagonGear\Tactical_Helmet\data\Tac_Helm.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"ParagonGear\Tactical_Helmet\data\Tac_Helm.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ParagonGear\Tactical_Helmet\data\Tac_Helm_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"ParagonGear\Tactical_Helmet\data\Tac_Helm_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ParagonGear\Tactical_Helmet\data\Tac_Helm_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.3;
					};
					class Blood
					{
						damage = 0.01;
					};
					class Shock
					{
						damage = 0.07;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.3;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.07;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.3;
					};
					class Blood
					{
						damage = 0.01;
					};
					class Shock
					{
						damage = 0.01;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.5;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.07;
					};
				};
			};
		};
	class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "pickUpPot_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "BallisticHelmet_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class Compact_Bag_ColorBase: Clothing
	{
		scope = 0;
		itemSize[] = {4,7};
		itemsCargoSize[] = {8,10};
		descriptionShort = "The Compact Backpack hold 2 gun and has 80 slots of storage";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=700;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"ParagonGear\Compact_Bag\data\Compact_Bag.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"ParagonGear\Compact_Bag\data\Compact_Bag.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ParagonGear\Compact_Bag\data\Compact_Bag_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"ParagonGear\Compact_Bag\data\Compact_Bag_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ParagonGear\Compact_Bag\data\Compact_Bag_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.9;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.9;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.9;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.9;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
			};
		};
	class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="SmershVest_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SmershVest_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class Deployment_Bag_ColorBase: Clothing
	{
		scope = 0;
		itemSize[] = {5,6};
		itemsCargoSize[] = {10,15};
		descriptionShort = "The Deployment Backpack hold 1 gun and has 150 slots of storage";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=700;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"ParagonGear\Deployment_Bag\data\Deployment_Bag.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"ParagonGear\Deployment_Bag\data\Deployment_Bag.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ParagonGear\Deployment_Bag\data\Deployment_Bag_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"ParagonGear\Deployment_Bag\data\Deployment_Bag_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ParagonGear\Deployment_Bag\data\Deployment_Bag_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.9;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.9;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.9;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.9;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
			};
		};
	class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="SmershVest_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SmershVest_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class GunBag_ColorBase: Clothing
	{
		scope = 0;
		itemSize[] = {6,10};
		itemsCargoSize[] = {9,15};
		descriptionShort = "The Gun Backpack is one of the best bags being able to hold 2 gun and has 135 slots of storage";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=700;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"ParagonGear\GunBag\data\GunBag.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"ParagonGear\GunBag\data\GunBag.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ParagonGear\GunBag\data\GunBag_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"ParagonGear\GunBag\data\GunBag_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ParagonGear\GunBag\data\GunBag_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.9;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.9;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.9;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.9;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
			};
		};
	class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="SmershVest_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SmershVest_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class RaidBag_ColorBase: Clothing
	{
		scope = 0;
		itemSize[] = {9,11};
		itemsCargoSize[] = {9,20};
		descriptionShort = "The Raid Bag is the best bags being able to hold 2 gun and has 180 slots of storage";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=700;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"ParagonGear\RaidBag\data\RaidBag.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"ParagonGear\RaidBag\data\RaidBag.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ParagonGear\RaidBag\data\RaidBag_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"ParagonGear\RaidBag\data\RaidBag_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ParagonGear\RaidBag\data\RaidBag_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.9;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.9;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.9;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.9;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
			};
		};
	class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="SmershVest_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SmershVest_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class Rush_24_Bag_ColorBase: Clothing
	{
		scope = 0;
		itemSize[] = {4,5};
		itemsCargoSize[] = {10,10};
		descriptionShort = "The Rush 24 Backpack 80 slots of storage";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=700;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"ParagonGear\RaidBag\data\RaidBag.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"ParagonGear\RaidBag\data\RaidBag.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ParagonGear\RaidBag\data\RaidBag_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"ParagonGear\RaidBag\data\RaidBag_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ParagonGear\RaidBag\data\RaidBag_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.9;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.9;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.9;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.9;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
			};
		};
	class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="SmershVest_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SmershVest_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class Tactical_Bag_ColorBase: Clothing
	{
		scope = 0;
		itemSize[] = {4,8};
		itemsCargoSize[] = {9,15};
		descriptionShort = "The Tactical Backpack hold 1 gun and has 135 slots of storage";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=700;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"ParagonGear\Tactical_Bag\data\Tactical_Bag.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"ParagonGear\Tactical_Bag\data\Tactical_Bag.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ParagonGear\Tactical_Bag\data\Tactical_Bag_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"ParagonGear\Tactical_Bag\data\Tactical_Bag_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ParagonGear\Tactical_Bag\data\Tactical_Bag_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.9;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.9;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.9;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.9;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="SmershVest_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SmershVest_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class US_Military_Bag_ColorBase: Clothing
	{
		scope = 0;
		itemSize[] = {5,10};
		itemsCargoSize[] = {9,18};
		descriptionShort = "The US Military Backpack is one of the best bags being able to hold 1 gun and has 162 slots of storage";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=700;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"ParagonGear\US_Military_Bag\data\US_Military_Bag.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"ParagonGear\US_Military_Bag\data\US_Military_Bag.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ParagonGear\US_Military_Bag\data\US_Military_Bag_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"ParagonGear\US_Military_Bag\data\US_Military_Bag_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ParagonGear\US_Military_Bag\data\US_Military_Bag_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.9;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.9;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.9;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.9;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
			};
		};
	class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="SmershVest_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SmershVest_drop_SoundSet";
					id=898;
				};
			};
		};
	};
};