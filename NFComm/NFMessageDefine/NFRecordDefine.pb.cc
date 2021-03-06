// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: NFRecordDefine.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "NFRecordDefine.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace NFMsg {

namespace {

const ::google::protobuf::EnumDescriptor* BuildingList_RecordColType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* BuildingProduce_RecordColType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* GroupMemberList_RecordColType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* ChatList_RecordColType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* GuildBoss_RecordColType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* GuildMemberList_RecordColType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* GuildEvent_RecordColType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* GuildHouse_RecordColType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* GuildSkill_RecordColType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* PosList_RecordColType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* PlayerViewItem_RecordColType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* CommPropertyValue_RecordColType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* BagItemList_RecordColType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* EctypeList_RecordColType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* DropItemList_RecordColType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* SkillTable_RecordColType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* TaskMonsterList_RecordColType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* TaskList_RecordColType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* PVPList_RecordColType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* ChatGroup_RecordColType_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_NFRecordDefine_2eproto() {
  protobuf_AddDesc_NFRecordDefine_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "NFRecordDefine.proto");
  GOOGLE_CHECK(file != NULL);
  BuildingList_RecordColType_descriptor_ = file->enum_type(0);
  BuildingProduce_RecordColType_descriptor_ = file->enum_type(1);
  GroupMemberList_RecordColType_descriptor_ = file->enum_type(2);
  ChatList_RecordColType_descriptor_ = file->enum_type(3);
  GuildBoss_RecordColType_descriptor_ = file->enum_type(4);
  GuildMemberList_RecordColType_descriptor_ = file->enum_type(5);
  GuildEvent_RecordColType_descriptor_ = file->enum_type(6);
  GuildHouse_RecordColType_descriptor_ = file->enum_type(7);
  GuildSkill_RecordColType_descriptor_ = file->enum_type(8);
  PosList_RecordColType_descriptor_ = file->enum_type(9);
  PlayerViewItem_RecordColType_descriptor_ = file->enum_type(10);
  CommPropertyValue_RecordColType_descriptor_ = file->enum_type(11);
  BagItemList_RecordColType_descriptor_ = file->enum_type(12);
  EctypeList_RecordColType_descriptor_ = file->enum_type(13);
  DropItemList_RecordColType_descriptor_ = file->enum_type(14);
  SkillTable_RecordColType_descriptor_ = file->enum_type(15);
  TaskMonsterList_RecordColType_descriptor_ = file->enum_type(16);
  TaskList_RecordColType_descriptor_ = file->enum_type(17);
  PVPList_RecordColType_descriptor_ = file->enum_type(18);
  ChatGroup_RecordColType_descriptor_ = file->enum_type(19);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_NFRecordDefine_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

}  // namespace

void protobuf_ShutdownFile_NFRecordDefine_2eproto() {
}

void protobuf_AddDesc_NFRecordDefine_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\024NFRecordDefine.proto\022\005NFMsg*\365\001\n\032Buildi"
    "ngList_RecordColType\022\033\n\027BuildingList_Bui"
    "ldingID\020\000\022\035\n\031BuildingList_BuildingGUID\020\001"
    "\022\026\n\022BuildingList_State\020\002\022\025\n\021BuildingList"
    "_PosX\020\003\022\025\n\021BuildingList_PosY\020\004\022\025\n\021Buildi"
    "ngList_PosZ\020\005\022\037\n\033BuildingList_StateStart"
    "Time\020\006\022\035\n\031BuildingList_StateEndTime\020\007*\275\001"
    "\n\035BuildingProduce_RecordColType\022 \n\034Build"
    "ingProduce_BuildingGUID\020\000\022\032\n\026BuildingPro"
    "duce_ItemID\020\001\022\035\n\031BuildingProduce_LeftCou"
    "nt\020\002\022\034\n\030BuildingProduce_OnceTime\020\003\022!\n\035Bu"
    "ildingProduce_OnceStartTime\020\004*q\n\035GroupMe"
    "mberList_RecordColType\022\030\n\024GroupMemberLis"
    "t_GUID\020\000\022\032\n\026GroupMemberList_Online\020\001\022\032\n\026"
    "GroupMemberList_GameID\020\002*P\n\026ChatList_Rec"
    "ordColType\022\021\n\rChatList_GUID\020\000\022\020\n\014ChatLis"
    "t_msg\020\001\022\021\n\rChatList_time\020\002*\300\001\n\027GuildBoss"
    "_RecordColType\022\022\n\016GuildBoss_GUID\020\000\022\022\n\016Gu"
    "ildBoss_Name\020\001\022\023\n\017GuildBoss_Level\020\002\022\021\n\rG"
    "uildBoss_Job\020\003\022\026\n\022GuildBoss_Donation\020\004\022\021"
    "\n\rGuildBoss_VIP\020\005\022\025\n\021GuildBoss_Offline\020\006"
    "\022\023\n\017GuildBoss_Power\020\007*\311\002\n\035GuildMemberLis"
    "t_RecordColType\022\030\n\024GuildMemberList_GUID\020"
    "\000\022\030\n\024GuildMemberList_Name\020\001\022\031\n\025GuildMemb"
    "erList_Level\020\002\022\027\n\023GuildMemberList_Job\020\003\022"
    "\034\n\030GuildMemberList_Donation\020\004\022\033\n\027GuildMe"
    "mberList_Receive\020\005\022\027\n\023GuildMemberList_VI"
    "P\020\006\022\032\n\026GuildMemberList_Online\020\007\022\031\n\025Guild"
    "MemberList_Power\020\010\022\031\n\025GuildMemberList_Ti"
    "tle\020\t\022\032\n\026GuildMemberList_GameID\020\n*\311\001\n\030Gu"
    "ildEvent_RecordColType\022\023\n\017GuildEvent_GUI"
    "D\020\000\022\023\n\017GuildEvent_Name\020\001\022\024\n\020GuildEvent_L"
    "evel\020\002\022\022\n\016GuildEvent_Job\020\003\022\027\n\023GuildEvent"
    "_Donation\020\004\022\022\n\016GuildEvent_VIP\020\005\022\026\n\022Guild"
    "Event_Offline\020\006\022\024\n\020GuildEvent_Power\020\007*\311\001"
    "\n\030GuildHouse_RecordColType\022\023\n\017GuildHouse"
    "_GUID\020\000\022\023\n\017GuildHouse_Name\020\001\022\024\n\020GuildHou"
    "se_Level\020\002\022\022\n\016GuildHouse_Job\020\003\022\027\n\023GuildH"
    "ouse_Donation\020\004\022\022\n\016GuildHouse_VIP\020\005\022\026\n\022G"
    "uildHouse_Offline\020\006\022\024\n\020GuildHouse_Power\020"
    "\007*\311\001\n\030GuildSkill_RecordColType\022\023\n\017GuildS"
    "kill_GUID\020\000\022\023\n\017GuildSkill_Name\020\001\022\024\n\020Guil"
    "dSkill_Level\020\002\022\022\n\016GuildSkill_Job\020\003\022\027\n\023Gu"
    "ildSkill_Donation\020\004\022\022\n\016GuildSkill_VIP\020\005\022"
    "\026\n\022GuildSkill_Offline\020\006\022\024\n\020GuildSkill_Po"
    "wer\020\007*Z\n\025PosList_RecordColType\022\r\n\tPosLis"
    "t_X\020\000\022\r\n\tPosList_Y\020\001\022\r\n\tPosList_Z\020\002\022\024\n\020P"
    "osList_StayTime\020\003*\236\001\n\034PlayerViewItem_Rec"
    "ordColType\022\033\n\027PlayerViewItem_ConfigID\020\000\022"
    "\037\n\033PlayerViewItem_EnhanceLevel\020\001\022\035\n\031Play"
    "erViewItem_InlayStone\020\002\022!\n\035PlayerViewIte"
    "m_SagecraftLevel\020\003*\253\006\n\037CommPropertyValue"
    "_RecordColType\022\033\n\027CommPropertyValue_MAXH"
    "P\020\000\022\033\n\027CommPropertyValue_MAXMP\020\001\022\033\n\027Comm"
    "PropertyValue_MAXSP\020\002\022\035\n\031CommPropertyVal"
    "ue_HPREGEN\020\003\022\035\n\031CommPropertyValue_SPREGE"
    "N\020\004\022\035\n\031CommPropertyValue_MPREGEN\020\005\022\037\n\033Co"
    "mmPropertyValue_ATK_VALUE\020\006\022\037\n\033CommPrope"
    "rtyValue_DEF_VALUE\020\007\022 \n\034CommPropertyValu"
    "e_MOVE_SPEED\020\010\022\037\n\033CommPropertyValue_ATK_"
    "SPEED\020\t\022\036\n\032CommPropertyValue_ATK_FIRE\020\n\022"
    "\037\n\033CommPropertyValue_ATK_LIGHT\020\013\022\035\n\031Comm"
    "PropertyValue_ATK_ICE\020\014\022 \n\034CommPropertyV"
    "alue_ATK_POISON\020\r\022\036\n\032CommPropertyValue_D"
    "EF_FIRE\020\016\022\037\n\033CommPropertyValue_DEF_LIGHT"
    "\020\017\022\035\n\031CommPropertyValue_DEF_ICE\020\020\022 \n\034Com"
    "mPropertyValue_DEF_POISON\020\021\022 \n\034CommPrope"
    "rtyValue_DIZZY_GATE\020\022\022\037\n\033CommPropertyVal"
    "ue_MOVE_GATE\020\023\022 \n\034CommPropertyValue_SKIL"
    "L_GATE\020\024\022#\n\037CommPropertyValue_PHYSICAL_G"
    "ATE\020\025\022 \n\034CommPropertyValue_MAGIC_GATE\020\026\022"
    "\037\n\033CommPropertyValue_BUFF_GATE\020\027*\224\004\n\031Bag"
    "ItemList_RecordColType\022\024\n\020BagItemList_GU"
    "ID\020\000\022\030\n\024BagItemList_ConfigID\020\001\022\031\n\025BagIte"
    "mList_ItemCount\020\002\022\025\n\021BagItemList_Bound\020\003"
    "\022\033\n\027BagItemList_ExpiredType\020\004\022\031\n\025BagItem"
    "List_SlotCount\020\005\022\033\n\027BagItemList_InlaySto"
    "ne1\020\006\022\033\n\027BagItemList_InlayStone2\020\007\022\033\n\027Ba"
    "gItemList_InlayStone3\020\010\022\033\n\027BagItemList_I"
    "nlayStone4\020\t\022\033\n\027BagItemList_InlayStone5\020"
    "\n\022\033\n\027BagItemList_InlayStone6\020\013\022\035\n\031BagIte"
    "mList_EnhancedLevel\020\014\022\036\n\032BagItemList_Sag"
    "ecraftLevel\020\r\022\036\n\032BagItemList_SagecraftSt"
    "one\020\016\022\034\n\030BagItemList_RandProperty\020\017\022\024\n\020B"
    "agItemList_Date\020\020\022\034\n\030BagItemList_BasePro"
    "perty\020\021*_\n\030EctypeList_RecordColType\022\027\n\023E"
    "ctypeList_EctypeID\020\000\022\025\n\021EctypeList_IsPas"
    "s\020\001\022\023\n\017EctypeList_Star\020\002*\211\001\n\032DropItemLis"
    "t_RecordColType\022\032\n\026DropItemList_MonsterI"
    "D\020\000\022\027\n\023DropItemList_ItemID\020\001\022\032\n\026DropItem"
    "List_ItemCount\020\002\022\032\n\026DropItemList_DrawSta"
    "te\020\003*\207\001\n\030SkillTable_RecordColType\022\026\n\022Ski"
    "llTable_SkillID\020\000\022\031\n\025SkillTable_SkillLev"
    "el\020\001\022\031\n\025SkillTable_SkillStone\020\002\022\035\n\031Skill"
    "Table_SkillSoulLevel\020\003*\246\001\n\035TaskMonsterLi"
    "st_RecordColType\022\035\n\031TaskMonsterList_Mons"
    "terID\020\000\022$\n TaskMonsterList_CurrentKillCo"
    "unt\020\001\022$\n TaskMonsterList_RequireKillCoun"
    "t\020\002\022\032\n\026TaskMonsterList_TaskID\020\003*\\\n\026TaskL"
    "ist_RecordColType\022\023\n\017TaskList_TaskID\020\000\022\027"
    "\n\023TaskList_TaskStatus\020\001\022\024\n\020TaskList_Proc"
    "ess\020\002*L\n\025PVPList_RecordColType\022\016\n\nPVPLis"
    "t_ID\020\000\022\020\n\014PVPList_Name\020\001\022\021\n\rPVPList_Leve"
    "l\020\002*J\n\027ChatGroup_RecordColType\022\026\n\022ChatGr"
    "oup_ChatType\020\000\022\027\n\023ChatGroup_GroupGUID\020\001", 4199);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "NFRecordDefine.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_NFRecordDefine_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_NFRecordDefine_2eproto {
  StaticDescriptorInitializer_NFRecordDefine_2eproto() {
    protobuf_AddDesc_NFRecordDefine_2eproto();
  }
} static_descriptor_initializer_NFRecordDefine_2eproto_;
const ::google::protobuf::EnumDescriptor* BuildingList_RecordColType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return BuildingList_RecordColType_descriptor_;
}
bool BuildingList_RecordColType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* BuildingProduce_RecordColType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return BuildingProduce_RecordColType_descriptor_;
}
bool BuildingProduce_RecordColType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* GroupMemberList_RecordColType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return GroupMemberList_RecordColType_descriptor_;
}
bool GroupMemberList_RecordColType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* ChatList_RecordColType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ChatList_RecordColType_descriptor_;
}
bool ChatList_RecordColType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* GuildBoss_RecordColType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return GuildBoss_RecordColType_descriptor_;
}
bool GuildBoss_RecordColType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* GuildMemberList_RecordColType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return GuildMemberList_RecordColType_descriptor_;
}
bool GuildMemberList_RecordColType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* GuildEvent_RecordColType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return GuildEvent_RecordColType_descriptor_;
}
bool GuildEvent_RecordColType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* GuildHouse_RecordColType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return GuildHouse_RecordColType_descriptor_;
}
bool GuildHouse_RecordColType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* GuildSkill_RecordColType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return GuildSkill_RecordColType_descriptor_;
}
bool GuildSkill_RecordColType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* PosList_RecordColType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PosList_RecordColType_descriptor_;
}
bool PosList_RecordColType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* PlayerViewItem_RecordColType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PlayerViewItem_RecordColType_descriptor_;
}
bool PlayerViewItem_RecordColType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* CommPropertyValue_RecordColType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CommPropertyValue_RecordColType_descriptor_;
}
bool CommPropertyValue_RecordColType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* BagItemList_RecordColType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return BagItemList_RecordColType_descriptor_;
}
bool BagItemList_RecordColType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EctypeList_RecordColType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EctypeList_RecordColType_descriptor_;
}
bool EctypeList_RecordColType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* DropItemList_RecordColType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return DropItemList_RecordColType_descriptor_;
}
bool DropItemList_RecordColType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* SkillTable_RecordColType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SkillTable_RecordColType_descriptor_;
}
bool SkillTable_RecordColType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* TaskMonsterList_RecordColType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return TaskMonsterList_RecordColType_descriptor_;
}
bool TaskMonsterList_RecordColType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* TaskList_RecordColType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return TaskList_RecordColType_descriptor_;
}
bool TaskList_RecordColType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* PVPList_RecordColType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PVPList_RecordColType_descriptor_;
}
bool PVPList_RecordColType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* ChatGroup_RecordColType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ChatGroup_RecordColType_descriptor_;
}
bool ChatGroup_RecordColType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace NFMsg

// @@protoc_insertion_point(global_scope)
