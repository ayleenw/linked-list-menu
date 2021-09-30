#include "linkedlist.hpp"
#include "menu.hpp"
#include <iostream>

#define LINES 4;

using namespace std;

Menu::Menu(string menuTexts[], int size)
{
    MarkerPosition = 0;

    MenuList.AddMenuHeader(menuTexts[0]);
    for (int i = 1; i < size; i++)
    {
        MenuList.AddMenuItem(menuTexts[i]);
    }
}

void Menu::PrintMenuToLCD(int start)
{
    int end = start + LINES;
    MenuList.PrintListWithMarkerFromTo(start, end, MarkerPosition);
}

void Menu::SetMarkerPosition(int position)
{
    MarkerPosition = position;
    // MenuList.SetMarkerPos(position);
}

int Menu::GetMarkerPosition()
{
    return MarkerPosition;
}