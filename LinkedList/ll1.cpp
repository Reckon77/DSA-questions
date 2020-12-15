#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *first = NULL, *last = NULL;
void insertLast(int x)
{
    Node *t = new Node;
    t->data = x;
    t->next = NULL;
    if (first == NULL)
    {
        first = last = t;
    }
    else
    {
        last->next = t;
        last = t;
    }
}
void insertPos(int pos, int x)
{
    Node *t = new Node;
    Node *p = first;
    t->data = x;
    t->next = NULL;
    if (pos == 0)
    {
        t->next = first;
        first = t;
    }
    else
    {
        for (int i = 0; i < pos - 1 && p; i++)
        {
            p = p->next;
        }
        if (p)
        {
            t->next = p->next;
            p->next = t;
        }
    }
}
int del(int pos)
{
    int x = -1;
    Node *p = first, *q = NULL;
    if (first == NULL)
    {
        return x;
    }
    else if (pos == 1)
    {
        first = first->next;
        x = p->data;
        delete p;
    }
    else
    {
        for (int i = 0; i < pos - 1 && p; i++)
        {
            q = p;
            p = p->next;
        }
        if (p)
        {
            q->next = p->next;
            x = p->data;
            delete p;
        }
    }
    return x;
}
void display(Node *head)
{
    Node *p = head;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}
void reverse()
{
    Node *newlast = first;
    Node *current = first;
    Node *prev = NULL, *next = NULL;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    first = prev;
    last = newlast;
    newlast = nullptr;
}

int main()
{
    insertLast(5);
    insertLast(6);
    insertLast(10);
    insertLast(12);
    insertLast(13);
    insertLast(19);
    display(first);
    //    iReverse(first);
    reverse();
    display(first);
    insertLast(19);
    insertLast(19);
    display(first);
    return 0;
}
