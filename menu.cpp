#include "linkedlist.hpp"
#include "menu.hpp"
#include <iostream>

using namespace std;

Menu::Menu(string menuTexts[])
{
    int numberOfMenuItems = sizeof(menuTexts) / sizeof(menuTexts[0]);
    cout << "Menu: Number of menu items: " << numberOfMenuItems << endl;

    MenuList.AddMenuHeader(menuTexts[0]);
    for (int i = 1; i < 5; i++)
    {
        MenuList.AddMenuItem(menuTexts[i]);
    }
}

void Menu::PrintMenuToLCD()
{
    MenuList.PrintMenuList();
}

/*
int lookup = 3;

menuItem *test = mainMenu.GotoId(lookup);

if (test == nullptr)
{
    cout << "No such menu item!" << endl;
}
cout << "Menu item no " << lookup << " is: " << test->menuText << endl;
*/