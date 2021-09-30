#include <iostream>
#include "linkedlist.hpp"

using namespace std;

LinkedList::LinkedList()
{
    head = nullptr;
    tail = nullptr;
    numberOfEntries = 0;
}

LinkedList::LinkedList(string _listTitle)
{
    head = nullptr;
    tail = nullptr;
    numberOfEntries = 0;
    listTitle = _listTitle;
}

LinkedList::~LinkedList()
{
    Node *current = head;
    while (current != nullptr)
    {
        Node *next = current->next;
        delete current;
        current = next;
    }
    head = nullptr;
}

void LinkedList::AddMenuHeader(string text)
{
    listTitle = text;
}

void LinkedList::AddMenuItem(string text)
{
    Node *tmp = new Node;
    tmp->itemText = text;
    tmp->id = numberOfEntries++;
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

void LinkedList::PrintList()
{
    cout << listTitle << endl;

    Node *current = head;

    while (current != nullptr)
    {
        cout << current->id << ": " << current->itemText << endl;
        current = current->next;
    }
}

void LinkedList::PrintListWithMarkerFromTo(int start, int end, int marker)
{
    cout << listTitle << endl;

    Node *current = GotoId(start);

    int count = 1;
    while (current != nullptr)
    {
        if (count == end)
            break;
        if (current->id == marker)
        {
            cout << "> " << current->itemText << endl;
        }
        else
        {
            cout << "  " << current->itemText << endl;
        }
        current = current->next;
        count++;
    }
}

Node *LinkedList::GotoId(int lookupId)
{
    if (lookupId > numberOfEntries)
        return nullptr;

    Node *current = head;
    while (current != nullptr && lookupId != current->id)
    {
        current = current->next;
    }
    return current;
}
