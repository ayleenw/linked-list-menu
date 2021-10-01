#include <iostream>
#include "linkedlist.hpp"
#include "menu.hpp"

using namespace std;

int main()
{
    const char *mmenu[] = {"Header", "Menu 1", "Menu 2", "Menu 3", "Menu 4"};
    int numberOfMenuItems = sizeof(mmenu) / sizeof(mmenu[0]);
    // cout << "Main: Number of menu items: " << numberOfMenuItems << endl;
    cout << endl;

    Menu mainMenu(mmenu, numberOfMenuItems);

    mainMenu.PrintMenuToLCD(0);

    mainMenu.SetMarkerPosition(1);
    mainMenu.PrintMenuToLCD(1);
    mainMenu.PrintMenuToLCD(0);

    return 0;
}
