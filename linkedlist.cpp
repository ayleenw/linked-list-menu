#include <iostream>
#include "linkedlist.hpp"

using namespace std;

LinkedList::LinkedList()
{
    head = nullptr;
    tail = nullptr;
    numberOfEntries = 0;
    markerPos = 0;
}

LinkedList::LinkedList(string menuName)
{
    head = nullptr;
    tail = nullptr;
    numberOfEntries = 0;
    markerPos = 0;
    menuHeader = menuName;
}

LinkedList::~LinkedList()
{
    menuItem *current = head;
    while (current != nullptr)
    {
        menuItem *next = current->next;
        delete current;
        current = next;
    }
    head = nullptr;
}

void LinkedList::AddMenuHeader(string text)
{
    menuHeader = text;
}

void LinkedList::AddMenuItem(string text)
{
    menuItem *tmp = new menuItem;
    tmp->menuText = text;
    tmp->id = numberOfEntries++;
    // numberOfEntries++;
    tmp->next = nullptr;
    if (head == nullptr)
    {
        head = tmp;
        tail = tmp;
    }
    else
    {
        tail->next = tmp;
        tail = tmp;
    }
}

void LinkedList::PrintMenuList()
{
    cout << menuHeader << endl;

    menuItem *current = head;

    while (current != nullptr)
    {
        if (current->id == markerPos)
        {
            current->menuText.insert(0, "> ");
        }
        else
        {
            current->menuText.insert(0, "  ");
        }
        cout << current->id << ": " << current->menuText << endl;
        current = current->next;
    }
}

menuItem *LinkedList::GotoId(int lookupId)
{
    if (lookupId > numberOfEntries)
        return nullptr;

    menuItem *current = head;
    while (current != nullptr && lookupId != current->id)
    {
        current = current->next;
    }
    return current;
}

void LinkedList::SetMarkerPos(int pos)
{
    markerPos = pos;
}

int LinkedList::GetMarkerPos()
{
    return markerPos;
}