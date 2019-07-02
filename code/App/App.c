// App.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <stdio.h>
#include <Windows.h>
#include "../sdk/lua/lua.h"
#include "../sdk/lua/lualib.h"
#include "../sdk/lua/lauxlib.h"


char _bufer[256];
char *_rus(const char *_text)
{
	CharToOemA(_text, _bufer);
	return _bufer;
}

int (*QtForm)(int, char**);

int main(int argc, char **argv)
{
	DWORD err;
	HMODULE hDll = LoadLibrary(L"QtApp.dll");
	
    printf(_rus("App запущено ...\n"));

	lua_State *lua_VM = luaL_newstate();
	luaL_openlibs(lua_VM);
	luaL_dofile(lua_VM, "../script/test.lua");
	
	if (hDll != NULL)
	{
		printf(_rus("QtApp.dll загружена... \n"));
		QtForm = (int(*)(int, char**)) GetProcAddress(hDll, "initApp");
		if (QtForm != NULL)
		{
			(*QtForm)(argc, argv);
		}
		else
		{
			printf(_rus("Неудалось загрузить функцию из библиотеки\n"));
		}
	}
	else
	{
		err = GetLastError();
		printf(_rus("Немогу загрузить QtApp.dll. Код ошибки:"), " %d", err);
	}

	
	FreeLibrary(hDll);
	lua_close(lua_VM);

	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
