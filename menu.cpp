#include "linkedlist.hpp"
#include "menu.hpp"
#include <iostream>

#define LINES 4;

using namespace std;

Menu::Menu(const char *menuTexts[], int size)
{
    MarkerPosition = 0;

    MenuList.AddListTitle(menuTexts[0]);
    for (int i = 1; i < size; i++)
    {
        MenuList.AddListItem(menuTexts[i]);
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