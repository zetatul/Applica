#include "luaCommon.h"

char bufer[256];
void print_r(const char * text)
{
	CharToOemA(text, bufer);
	printf(bufer);
}
static int print_rus(lua_State *_L)
{
	int n = lua_gettop(_L);
	for (int i = 1; i <= n; i++)
	{
		print_r(lua_tostring(_L, i));
	}
	return 0;
}

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

static struct luaL_Reg ls_lib[] =
{
	{ "MyDllFoo", libC_sum },
	{ "print_rus", print_rus},
	{ NULL, NULL }
};

LUALIB_API int luaopen_luaCommon(lua_State *_L)
{
	/*
	регистрация функции глобально
	*/
	//lua_register(_L, "luaC_sum", libC_sum);
	
	/*
	создание таблици
	и регистрация в ней функции
	*/
	lua_newtable(_L);
	luaL_setfuncs(_L, ls_lib, 0);
	lua_setglobal(_L, "luaCommon");
	
	print_r("luaCommon.dll загружена...\n");
	return 0;
}