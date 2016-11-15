//////////////////////////////////////////////////////////////////////
// OpenTibia - an opensource roleplaying game
//////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software Foundation,
// Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
//////////////////////////////////////////////////////////////////////

#ifndef __OTSERV_CONST_H__
#define __OTSERV_CONST_H__

#include "definitions.h"

#define NETWORKMESSAGE_MAXSIZE 15360

enum MagicEffectClasses
{
	NM_ME_DRAW_BLOOD	= 0x00,
	NM_ME_LOSE_ENERGY	= 0x01,
	NM_ME_POFF		= 0x02,
	NM_ME_BLOCKHIT		= 0x03,
	NM_ME_EXPLOSION_AREA	= 0x04,
	NM_ME_EXPLOSION_DAMAGE	= 0x05,
	NM_ME_FIRE_AREA		= 0x06,
	NM_ME_YELLOW_RINGS	= 0x07,
	NM_ME_POISON_RINGS	= 0x08,
	NM_ME_HIT_AREA		= 0x09,
	NM_ME_TELEPORT		= 0x0A, //10
	NM_ME_ENERGY_DAMAGE	= 0x0B, //11
	NM_ME_MAGIC_ENERGY	= 0x0C, //12
	NM_ME_MAGIC_BLOOD	= 0x0D, //13
	NM_ME_MAGIC_POISON	= 0x0E, //14
	NM_ME_HITBY_FIRE	= 0x0F, //15
	NM_ME_POISON		= 0x10, //16
	NM_ME_MORT_AREA		= 0x11, //17
	NM_ME_SOUND_GREEN	= 0x12, //18
	NM_ME_SOUND_RED		= 0x13, //19
	NM_ME_POISON_AREA	= 0x14, //20
	NM_ME_SOUND_YELLOW	= 0x15, //21
	NM_ME_SOUND_PURPLE	= 0x16, //22
	NM_ME_SOUND_BLUE	= 0x17, //23
	NM_ME_SOUND_WHITE	= 0x18, //24
	NM_ME_BUBBLES		= 0x19, //25
	NM_ME_CRAPS		= 0x1A, //26
	NM_ME_GIFT_WRAPS	= 0x1B, //27
	NM_ME_FIREWORK_YELLOW	= 0x1C, //28
	NM_ME_FIREWORK_RED	= 0x1D, //29
	NM_ME_FIREWORK_BLUE	= 0x1E, //30

	//for internal use, dont send to client
	NM_ME_NONE             = 0xFF,
	NM_ME_UNK              = 0xFFFF
};

enum ShootType_t
{
	NM_SHOOT_SPEAR		= 0x00,
	NM_SHOOT_BOLT		= 0x01,
	NM_SHOOT_ARROW		= 0x02,
	NM_SHOOT_FIRE		= 0x03,
	NM_SHOOT_ENERGY		= 0x04,
	NM_SHOOT_POISONARROW	= 0x05,
	NM_SHOOT_BURSTARROW	= 0x06,
	NM_SHOOT_THROWINGSTAR	= 0x07,
	NM_SHOOT_THROWINGKNIFE	= 0x08,
	NM_SHOOT_SMALLSTONE	= 0x09,
	NM_SHOOT_DEATH		= 0x0A, //10
	NM_SHOOT_LARGEROCK	= 0x0B, //11
	NM_SHOOT_SNOWBALL	= 0x0C, //12
	NM_SHOOT_POWERBOLT	= 0x0D, //13
	NM_SHOOT_POISONFIELD	= 0x0E, //14
	NM_SHOOT_INFERNALBOLT	= 0x0F, //15

	//for internal use, dont send to client
	NM_SHOOT_NONE		= 0xFF,
	NM_SHOOT_UNK		= 0xFFFF
};

enum SpeakClasses
{
	SPEAK_SAY		= 0x01,
	SPEAK_WHISPER		= 0x02,
	SPEAK_YELL		= 0x03,
	SPEAK_PRIVATE_PN	= 0x04,
	SPEAK_PRIVATE_NP	= 0x05,
	SPEAK_PRIVATE		= 0x06,
	SPEAK_CHANNEL_Y		= 0x07,
	SPEAK_RVR_CHANNEL	= 0x08,
	SPEAK_RVR_ANSWER	= 0x09,
	SPEAK_RVR_CONTINUE	= 0x0A,
	SPEAK_BROADCAST		= 0x0B,
	SPEAK_CHANNEL_R1	= 0x0C, //red - #c text
	SPEAK_PRIVATE_RED	= 0x0D,	//@name@text
	SPEAK_CHANNEL_O		= 0x0E,
	SPEAK_UNKNOWN_1		= 0x0F,
	SPEAK_CHANNEL_R2	= 0x10,	//red anonymous - #d text
	SPEAK_UNKNOWN_2		= 0x11,
	SPEAK_MONSTER_SAY	= 0x12,
	SPEAK_MONSTER_YELL	= 0x13
};

enum MessageClasses
{
	MSG_CLASS_FIRST			= 0x12,
	MSG_STATUS_WARNING      = MSG_CLASS_FIRST, /*Red message in game window and in the console*/
	MSG_EVENT_ADVANCE       = 0x13, /*White message in game window and in the console*/
	MSG_EVENT_DEFAULT       = 0x14, /*White message at the bottom of the game window and in the console*/
	MSG_STATUS_DEFAULT      = 0x15, /*White message at the bottom of the game window and in the console*/
	MSG_INFO_DESCR          = 0x16, /*Green message in game window and in the console*/
	MSG_STATUS_SMALL        = 0x17, /*White message at the bottom of the game window"*/
	MSG_STATUS_CONSOLE_BLUE = 0x18, /*Blue message in the console*/
	MSG_STATUS_CONSOLE_RED  = 0x19, /*Red message in the console*/
	MSG_CLASS_LAST			= MSG_STATUS_CONSOLE_RED
};

enum FluidColors_t
{
	FLUID_EMPTY	= 0x00,
	FLUID_BLUE	= 0x01,
	FLUID_RED	= 0x02,
	FLUID_BROWN	= 0x03,
	FLUID_GREEN	= 0x04,
	FLUID_YELLOW	= 0x05,
	FLUID_WHITE	= 0x06,
	FLUID_PURPLE	= 0x07
};

enum FluidTypes_t
{
	FLUID_NONE		= FLUID_EMPTY,
	FLUID_WATER		= FLUID_BLUE,
	FLUID_BLOOD		= FLUID_RED,
	FLUID_BEER		= FLUID_BROWN,
	FLUID_SLIME		= FLUID_GREEN,
	FLUID_LEMONADE		= FLUID_YELLOW,
	FLUID_MILK		= FLUID_WHITE,
	FLUID_MANA		= FLUID_PURPLE,

	FLUID_LIFE		= FLUID_RED + 8,
	FLUID_OIL		= FLUID_BROWN + 8,
	FLUID_URINE		= FLUID_YELLOW + 8,
	FLUID_COCONUTMILK	= FLUID_WHITE + 8,
	FLUID_WINE		= FLUID_PURPLE + 8,

	FLUID_MUD		= FLUID_BROWN + 16,
	FLUID_FRUITJUICE	= FLUID_YELLOW + 16,

	FLUID_LAVA		= FLUID_RED + 24,
	FLUID_RUM		= FLUID_BROWN + 24,
	FLUID_SWAMP		= FLUID_GREEN + 24,
};

const uint32_t reverseFluidMap[] =
{
	FLUID_EMPTY,
	FLUID_WATER,
	FLUID_MANA,
	FLUID_BEER, 
	FLUID_EMPTY,
	FLUID_BLOOD,
	FLUID_SLIME,
	FLUID_EMPTY,
	FLUID_LEMONADE,
	FLUID_MILK
};

enum ClientFluidTypes_t
{
	CLIENTFLUID_EMPTY	= 0x00,
	CLIENTFLUID_BLUE	= 0x01,
	CLIENTFLUID_PURPLE	= 0x02,
	CLIENTFLUID_BROWN_1	= 0x03,
	CLIENTFLUID_BROWN_2	= 0x04,
	CLIENTFLUID_RED		= 0x05,
	CLIENTFLUID_GREEN	= 0x06,
	CLIENTFLUID_BROWN	= 0x07,
	CLIENTFLUID_YELLOW	= 0x08,
	CLIENTFLUID_WHITE	= 0x09
};

const uint32_t fluidMap[] =
{
	CLIENTFLUID_EMPTY,
	CLIENTFLUID_BLUE,
	CLIENTFLUID_RED,
	CLIENTFLUID_BROWN_1, 
	CLIENTFLUID_GREEN,
	CLIENTFLUID_YELLOW,
	CLIENTFLUID_WHITE,
	CLIENTFLUID_PURPLE
};

enum SquareColor_t
{
	SQ_COLOR_NONE = 256,
	SQ_COLOR_BLACK = 0,
};

enum TextColor_t
{
	TEXTCOLOR_BLUE		= 5,
	TEXTCOLOR_LIGHTBLUE	= 35,
	TEXTCOLOR_LIGHTGREEN	= 30,
	TEXTCOLOR_PURPLE	= 83,
	TEXTCOLOR_LIGHTGREY	= 129,
	TEXTCOLOR_DARKRED	= 144,
	TEXTCOLOR_RED		= 180,
	TEXTCOLOR_ORANGE	= 198,
	TEXTCOLOR_YELLOW	= 210,
	TEXTCOLOR_WHITE_EXP	= 215,
	TEXTCOLOR_NONE		= 255
};

enum Icons_t
{
	ICON_POISON = 1,
	ICON_BURN = 2, 
	ICON_ENERGY =  4, 
	ICON_DRUNK = 8, 
	ICON_MANASHIELD = 16, 
	ICON_PARALYZE = 32, 
	ICON_HASTE = 64, 
	ICON_SWORDS = 128,
	ICON_DROWNING = 256
};

enum WeaponType_t
{
	WEAPON_NONE = 0,
	WEAPON_SWORD = 1,
	WEAPON_CLUB = 2,
	WEAPON_AXE = 3,
	WEAPON_SHIELD = 4,
	WEAPON_DIST = 5,
	WEAPON_WAND = 6,
	WEAPON_AMMO = 7
};

enum Ammo_t
{
	AMMO_NONE = 0,
	AMMO_BOLT = 1,
	AMMO_ARROW = 2,
	AMMO_SPEAR = 3,
	AMMO_THROWINGSTAR = 4,
	AMMO_THROWINGKNIFE = 5,
	AMMO_STONE = 6,
	AMMO_SNOWBALL = 7
};

enum AmmoAction_t
{
	AMMOACTION_NONE,
	AMMOACTION_REMOVECOUNT,
	AMMOACTION_REMOVECHARGE,
	AMMOACTION_MOVE,
	AMMOACTION_MOVEBACK
};

enum WieldInfo_t
{
	WIELDINFO_LEVEL = 1,
	WIELDINFO_MAGLV = 2,
	WIELDINFO_VOCREQ = 4,
	WIELDINFO_PREMIUM = 8
};

enum Skulls_t
{
	SKULL_NONE = 0,
	SKULL_YELLOW = 1,
	SKULL_GREEN = 2,
	SKULL_WHITE = 3,
	SKULL_RED = 4
};

enum Shields_t
{
	SHIELD_NONE = 0,
	SHIELD_INVITED = 1,
	SHIELD_HALF = 2,
	SHIELD_MEMBER = 3,
	SHIELD_LEADER = 4
};

enum item_t
{
	ITEM_FIREFIELD_PVP	= 1492,
	ITEM_FIREFIELD_NOPVP	= 1500,

	ITEM_POISONFIELD_PVP	= 1496,
	ITEM_POISONFIELD_NOPVP	= 1503,

	ITEM_ENERGYFIELD_PVP	= 1495,
	ITEM_ENERGYFIELD_NOPVP	= 1504,

	ITEM_COINS_GOLD		= 2148,
	ITEM_COINS_PLATINUM	= 2152,
	ITEM_COINS_CRYSTAL	= 2160,

	ITEM_DEPOT		= 2594,
	ITEM_LOCKER1		= 2589,

	ITEM_MALE_CORPSE	= 3058,
	ITEM_FEMALE_CORPSE	= 3065,

	ITEM_MEAT		= 2666,
	ITEM_HAM		= 2671,
	ITEM_GRAPE		= 2681,
	ITEM_APPLE		= 2674,
	ITEM_BREAD		= 2689,
	ITEM_ROLL		= 2690,
	ITEM_CHEESE		= 2696,

	ITEM_FULLSPLASH		= 2016,
	ITEM_SMALLSPLASH	= 2019,

	ITEM_PARCEL		= 2595,
	ITEM_PARCEL_STAMPED	= 2596,
	ITEM_LETTER		= 2597,
	ITEM_LETTER_STAMPED	= 2598,
	ITEM_LABEL		= 2599,

	ITEM_AMULETOFLOSS	= 2173,

	ITEM_DOCUMENT_RO	= 1968, //read-only
};

enum PlayerBlessings
{
	PlayerBlessing_First = 0,
	PlayerBlessing_Second,
	PlayerBlessing_Third,
	PlayerBlessing_Fourth,
	PlayerBlessing_Fifth
};

enum PlayerFlags
{
	PlayerFlag_CannotUseCombat = 0,
	PlayerFlag_CannotAttackPlayer,
	PlayerFlag_CannotAttackMonster,
	PlayerFlag_CannotBeAttacked,
	PlayerFlag_CanConvinceAll,
	PlayerFlag_CanSummonAll,
	PlayerFlag_CanIllusionAll,
	PlayerFlag_CanSenseInvisibility,
	PlayerFlag_IgnoredByMonsters,
	PlayerFlag_NotGainInFight,
	PlayerFlag_HasInfiniteMana,
	PlayerFlag_HasInfiniteSoul,
	PlayerFlag_HasNoExhaustion,
	PlayerFlag_CannotUseSpells,
	PlayerFlag_CannotPickupItem,
	PlayerFlag_CanAlwaysLogin,
	PlayerFlag_CanBroadcast,
	PlayerFlag_CanEditHouses,
	PlayerFlag_CannotBeBanned,
	PlayerFlag_CannotBePushed,
	PlayerFlag_HasInfiniteCapacity,
	PlayerFlag_CanPushAllCreatures,
	PlayerFlag_CanTalkRedPrivate,
	PlayerFlag_CanTalkRedChannel,
	PlayerFlag_TalkOrangeHelpChannel,
	PlayerFlag_NotGainExperience,
	PlayerFlag_NotGainMana,
	PlayerFlag_NotGainHealth,
	PlayerFlag_NotGainSkill,
	PlayerFlag_SetMaxSpeed,
	PlayerFlag_SpecialVIP,
	PlayerFlag_NotGenerateLoot,
	PlayerFlag_CanTalkRedChannelAnonymous,
	PlayerFlag_IgnoreProtectionZone,
	PlayerFlag_IgnoreSpellCheck,
	PlayerFlag_IgnoreWeaponCheck,
	PlayerFlag_CannotBeMuted,
	PlayerFlag_IsAlwaysPremium,
	PlayerFlag_CanAnswerRuleViolations,

	//add new flags here
	PlayerFlag_LastFlag
};

enum ViolationActions_t
{
	Action_None			= 0,
	Action_Notation			= 1,
	Action_Namelock			= 2,
	Action_Banishment		= 4,
	Action_NamelockBan		= 8,
	Action_BanFinalWarning		= 16,
	Action_NamelockBanFinalWarning	= 32,
	Action_StatementReport		= 64,
	Action_IpBan			= 128
};

const int violationActions[6] =
{
	//ignore this
	Action_None,

	//player
	Action_None,

	//tutor
	Action_None,

	//senior tutor
	Action_Namelock,

	//gamemaster
	Action_Notation | Action_Namelock | Action_Banishment | Action_NamelockBan | Action_StatementReport,

	//god
	Action_Notation | Action_Namelock | Action_Banishment | Action_NamelockBan | Action_BanFinalWarning | Action_NamelockBanFinalWarning | Action_StatementReport | Action_IpBan
};

const int violationReasons[6] =
{
	//ignore this
	0,

	//player
	0,

	//tutor
	0,

	/*
	 * senior tutor
	 * all name reasons
	 */
	4,

	/*
	 * gamemaster
	 * all name, statement & cheating reasons
	 */
	18,

	/*
	 * god
	 * all reasons
	 */
	22,
};

//Reserved player storage key ranges
//[10000000 - 20000000]
#define PSTRG_RESERVED_RANGE_START  10000000
#define PSTRG_RESERVED_RANGE_SIZE   10000000
//[1000 - 1500]
#define PSTRG_OUTFITS_RANGE_START   (PSTRG_RESERVED_RANGE_START + 1000)
#define PSTRG_OUTFITS_RANGE_SIZE    500
	
#define IS_IN_KEYRANGE(key, range) (key >= PSTRG_##range##_START && ((key - PSTRG_##range##_START) < PSTRG_##range##_SIZE))

#endif
