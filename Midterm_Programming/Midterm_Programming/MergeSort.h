#pragma once
#include <iostream>
#include <string>



using namespace std;

LinkedList* mergedSortedLinkedLists(LinkedList* first, LinkedList* second)
{
    if (!first)
        return second;
    if (!second)
        return first;

    if (first->value < second->value) 
    {
        first->next = mergedSortedLinkedLists(first->next, second);
        return first;
    }
    else 
    {
        second->next = mergedSortedLinkedLists(first, second->next);
        return second;
    }
}

