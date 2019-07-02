#include "qtapp.h"

extern "C" __declspec(dllexport) int initApp(int argc, char **argv)
{
    QApplication App(argc, argv);
    ConsoleLine Console;
    Console.show();

    return App.exec();
}
