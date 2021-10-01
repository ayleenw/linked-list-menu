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

#include <stdio.h>

using namespace std;

struct Node
{
    const char *itemText;
    int id;
    Node *next;
};

class LinkedList
{
public:
    LinkedList();
    LinkedList(char *_listTitle);
    ~LinkedList();
    void AddListItem(const char *text);
    void AddListTitle(const char *text);
    void PrintList();
    void PrintListWithMarkerFromTo(int start, int end, int marker);
    Node *GotoId(int lookupId);

private:
    const char *listTitle;
    int numberOfEntries;
    Node *head;
    Node *tail;
};
#endif // _LINKEDLIST_H_