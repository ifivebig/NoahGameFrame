// -------------------------------------------------------------------------
//    @FileName      :    NFWorldChatPlugin.h
//    @Author           :    LvSheng.Huang
//    @Date             :    2015-05-24 08:51
//    @Module           :   NFWorldChatPlugin
//
// -------------------------------------------------------------------------

#ifndef _NFC_WORLD_CHAT_PLUGIN_MODULE_H_
#define _NFC_WORLD_CHAT_PLUGIN_MODULE_H_

#include "NFComm/NFPluginModule/NFPlatform.h"
#include "NFComm/NFPluginModule/NFIPlugin.h"
#include "NFComm/NFPluginModule/NFIPluginManager.h"

//////////////////////////////////////////////////////////////////////////
class NFWorldChatPlugin : public NFIPlugin
{
public:
    NFWorldChatPlugin(NFIPluginManager* p)
    {
        pPluginManager = p;
    }
    virtual const int GetPluginVersion();

    virtual const std::string GetPluginName();

    virtual void Install();

    virtual void Uninstall();
};
#endif