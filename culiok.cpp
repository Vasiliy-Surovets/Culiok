#include <TXlib.h>
#include "menu.h"
#include <string.h>
int main()
{
    txCreateWindow (600, 600);
    Menu menu;
    //menu.hello();
    while (GetAsyncKeyState(VK_ESCAPE) == 0)
    {
        txBegin();
        menu.menu();
        txEnd();
    }
}
