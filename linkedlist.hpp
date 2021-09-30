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

struct Node
{
    string itemText;
    int id;
    Node *next;
};

class LinkedList
{
public:
    LinkedList();
    LinkedList(string _listTitle);
    ~LinkedList();
    void AddMenuItem(string text);
    void AddMenuHeader(string text);
    void PrintList();
    void PrintListWithMarkerFromTo(int start, int end, int marker);
    Node *GotoId(int lookupId);

private:
    string listTitle;
    int numberOfEntries;
    Node *head;
    Node *tail;
};
#endif // _LINKEDLIST_H_