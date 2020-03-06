#pragma once
#include<iostream>
#include<string>

using namespace std;

class LinkedList
{
public:
    int value;
    LinkedList* next = nullptr;
    LinkedList* previous = nullptr;
};
LinkedList* ReverseLinkedList(LinkedList* root)
{
    if (root == nullptr || root->next == nullptr)
    {
        return root;  
    }
    root = ReverseLinkedList(root->next);
    root->next->next = root;
    root->next = nullptr;
    return root;

}