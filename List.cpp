#include "List.h"
#include <cstdlib>
#include <iostream>

using namespace std;

List::List()
{
    head = NULL;
    curr = NULL;
    temp = NULL;
}

List::~List()
{
}

void List::addNode(int addData)
{
    nodePtr n = new node;
    n->next = NULL;
    n->data = addData;
    
    if(head != NULL)
    {
        curr = head; 
        while (curr->next != NULL)
        {
            curr = curr -> next;
        }
        curr -> next = n;  
    }else
    {
        head = n;
    }
}

void List::delNode(int delData)
{
    nodePtr delPtr = NULL;
    temp = head; 
    curr = head;
    
    while(curr != NULL && curr->data != delData)
    {
        temp = curr;
        curr = curr->next;
    }
    if(curr == NULL)
    {
        cout<< delData<<" was not in the list." <<endl;
    }else{
        delPtr = curr;
        curr  = curr->next;
        temp->next = curr; 
        delete delPtr;
        cout << "The value " <<delData<< " was deleted."<<endl;
        
    }
}
void List::removeLast()
{
    nodePtr delPtr = NULL;
    temp = head;
    curr = head;
    if(curr != NULL)
    {
        temp = curr;
        curr = curr -> next;
    }else{
        delPtr = curr;
        curr = temp;
        curr->next = NULL;
        delete delPtr; 
    }
    
}

void List::printList()
{
    temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
        
    }
    cout<<"\n";
}


