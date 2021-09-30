/**
  ******************************************************************************
  * @file           : linkedlist.hpp
  * @brief          : A linked list for holding menu items 
  ******************************************************************************
  * @author Ayleen Weiss, 2021-09-29
  * 
  *
  ******************************************************************************
  */

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
    LinkedList(string menuName);
    ~LinkedList();
    void AddMenuItem(string text);
    void AddMenuHeader(string text);
    void PrintMenuList();
    menuItem *GotoId(int lookupId);
    void SetMarkerPos(int pos);
    int GetMarkerPos();

private:
    string menuHeader;
    int numberOfEntries;
    int markerPos;
    menuItem *head;
    menuItem *tail;
};
#endif // _LINKEDLIST_H_