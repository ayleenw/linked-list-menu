#include <string>
#include <iostream>
#include "linkedlist.hpp"

using namespace std;

int main()
{
    LinkedList mainMenu;
    mainMenu.AddMenuItem("Header");
    mainMenu.AddMenuItem("Menu 1");
    mainMenu.AddMenuItem("Menu 2");
    mainMenu.AddMenuItem("Menu 3");

    mainMenu.PrintMenuList();

    cout << "Hallo Lilly!" << endl;

    return 0;
}
