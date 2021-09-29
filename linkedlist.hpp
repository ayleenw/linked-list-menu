#ifndef _LINKEDLIST_H_
#define _LINKEDLIST_H_

#include <string>
#include <stdio.h>

using namespace std;

struct menuItem
{
    string menuText;
    int id;
    menuItem *next;
};

class LinkedList
{
public:
    LinkedList();
    ~LinkedList();
    void AddMenuItem(string text);
    void PrintMenuList();

private:
    int numberOfEntries;
    menuItem *head;
    menuItem *tail;
};
#endif // _LINKEDLIST_H_