#ifndef LUALOBI_H
#define LUALOBI_H

#include "tolua++.h"
#include "tolua_fix.h"

class LuaLobi
{
public:
    static void registerLobiInterface(lua_State *tolua_S);
};

#endif
