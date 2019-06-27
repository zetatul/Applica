#include "luaCommon.h"

static int libC_sum(lua_State *_L)
{
	int n = lua_gettop(_L);
	double sum = 0;
	for (int i = 1; i <= n; i++)
	{
		if (!lua_isnumber(_L, i))
		{
			printf("incorect argument to function\n");
			lua_pushnumber(_L, -1);
			return 1;
		}
		sum += lua_tonumber(_L, i);
	}
	lua_pushnumber(_L, sum);
	return 1;
}

LUALIB_API int luaopen_luaCommon(lua_State *_L)
{
	lua_register(_L, "luaC_sum", libC_sum);
	printf("luaCommon.dll loaded...\n");
	return 0;
}