require("luaCommon")
luaCommon.print_rus("Lua script загружен ...\n")
asd = 1023
luaCommon.print_rus("результат выполнения фунуции из DLL = ", " ", luaCommon.MyDllFoo(15, 15), " ", asd)