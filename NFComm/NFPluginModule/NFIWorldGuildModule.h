// -------------------------------------------------------------------------
//    @FileName      :    NFIWorldGuildModule.h
//    @Author           :    LvSheng.Huang
//    @Date             :    2015-05-24 08:51
//    @Module           :   NFIWorldGuildModule
//
// -------------------------------------------------------------------------

#ifndef _NFI_WORLD_GUILD_MODULE_H_
#define _NFI_WORLD_GUILD_MODULE_H_

#include "NFILogicModule.h"

class NFIWorldGuildModule
    : public NFILogicModule
{
public:
	virtual NFIDENTID CreateGuild( const NFIDENTID& self, const std::string& strName, const std::string& strRoleName, const int nLevel, const int nJob , const int nDonation , const int nVIP) = 0;
	virtual bool JoinGuild(const NFIDENTID& self, const NFIDENTID& xGuildID) = 0;
	virtual bool LeaveGuild(const NFIDENTID& self, const NFIDENTID& xGuildID) = 0;
	virtual bool UpGuildMmember(const NFIDENTID& self, const NFIDENTID& xGuildID, const NFIDENTID& xMmember) = 0;
	virtual bool DownGuildMmember(const NFIDENTID& self, const NFIDENTID& xGuildID, const NFIDENTID& xMmember) = 0;
	virtual bool KickGuildMmember(const NFIDENTID& self, const NFIDENTID& xGuildID, const NFIDENTID& xMmember) = 0;
	
	virtual bool GetGuildBaseInfo(const NFIDENTID& self, const NFIDENTID& xGuildID) = 0;
	virtual bool GetGuildMemberInfo(const NFIDENTID& self, const NFIDENTID& xGuildID) = 0;
	virtual bool GetGuildMemberInfo(const NFIDENTID& self, const NFIDENTID& xGuildID, const NFIDENTID& xMmember) = 0;

    virtual bool GetOnlineMember(const NFIDENTID& self, const NFIDENTID& xGuild, NFCDataList& varMemberList, NFCDataList& varGameList) = 0;
    virtual bool MemberOnline(const NFIDENTID& self, const NFIDENTID& xGuild, const int& nGameID) = 0;
    virtual bool MemberOffeline(const NFIDENTID& self, const NFIDENTID& xGuild) = 0;

private:
};

#endif