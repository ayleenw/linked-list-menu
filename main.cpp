#include <string>
#include <iostream>
#include "linkedlist.hpp"
#include "menu.hpp"

using namespace std;

int main()
{
    string mmenu[] = {"Header", "Menu 1", "Menu 2", "Menu 3", "Menu 4"};
    int numberOfMenuItems = sizeof(mmenu) / sizeof(mmenu[0]);
    cout << "Main: Number of menu items: " << numberOfMenuItems << endl;

    Menu mainMenu(mmenu);

    mainMenu.PrintMenuToLCD();

    return 0;
}
