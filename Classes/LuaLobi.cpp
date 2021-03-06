#include "LuaLobi.h"
#include "LobiSDK.h"

static int tolua_LobiSDK_showChatView(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
    tolua_Error tolua_err;
    if (
        !tolua_isusertable(tolua_S, 1, "LobiSDK", 0, &tolua_err) ||
        !tolua_isnoobj(tolua_S, 2, &tolua_err)
	)
      goto tolua_lerror;
    else
#endif
    {
        lobisdk::LobiSDK::showChatView();
    }

    return 1;
#ifndef TOLUA_RELEASE
    tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'showChatView'.", &tolua_err);
    return 0;
#endif
}

static int tolua_LobiSDK_openChatWithGroupId(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
    tolua_Error tolua_err;
    if (
        !tolua_isusertable(tolua_S, 1, "LobiSDK", 0, &tolua_err) ||
        !tolua_isstring(tolua_S, 2, 0, &tolua_err) ||
        !tolua_isstring(tolua_S, 3, 0, &tolua_err) ||
        !tolua_isnoobj(tolua_S, 4, &tolua_err)
	)
      goto tolua_lerror;
    else
#endif
    {
        const char* exId = (const char*) tolua_tostring(tolua_S, 2, 0);
        const char* name = (const char*) tolua_tostring(tolua_S, 3, 0);
        lobisdk::LobiSDK::openChatWithGroupId(exId, name);
    }

    return 1;
#ifndef TOLUA_RELEASE
    tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'openChatWithGroupId'.", &tolua_err);
    return 0;
#endif
}

static int tolua_LobiSDK_debugReset(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
    tolua_Error tolua_err;
    if (
        !tolua_isusertable(tolua_S, 1, "LobiSDK", 0, &tolua_err) ||
        !tolua_isnoobj(tolua_S, 2, &tolua_err)
	)
      goto tolua_lerror;
    else
#endif
    {
        lobisdk::LobiSDK::debugReset();
    }

    return 1;
#ifndef TOLUA_RELEASE
    tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'debugReset'.", &tolua_err);
    return 0;
#endif
}

static void toluaRegisterTypes(lua_State *tolua_S)
{
    tolua_usertype(tolua_S, "LobiSDK");
}

void LuaLobi::registerLobiInterface(lua_State *tolua_S)
{
    tolua_open(tolua_S);
    toluaRegisterTypes(tolua_S);
    tolua_module(tolua_S,NULL,0);
    tolua_beginmodule(tolua_S,NULL);
    tolua_cclass(tolua_S, "LobiSDK", "LobiSDK", "", NULL);
    /* LobiSDK */
    tolua_beginmodule(tolua_S, "LobiSDK");
    tolua_function(tolua_S,"showChatView", tolua_LobiSDK_showChatView);
    tolua_function(tolua_S,"openChatWithGroupId", tolua_LobiSDK_openChatWithGroupId);
    tolua_function(tolua_S,"debugReset", tolua_LobiSDK_debugReset);
    tolua_endmodule(tolua_S);
    /* LobiSDK */
    tolua_endmodule(tolua_S);    
}
