#include <iostream>
#include "linkedlist.hpp"

using namespace std;

LinkedList::LinkedList()
{
    head = nullptr;
    tail = nullptr;
    numberOfEntries = 0;
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
    menuItem *current = head;

    while (current != nullptr)
    {
        cout << current->menuText << endl;
        current = current->next;
    }
}