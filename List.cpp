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
    temp = NULL; 
    curr = head;
    
    while(curr != NULL && curr->data != delData)
    {
        temp = curr;
        curr = curr->next;
    }
    if(curr == NULL)
    {
        cout<< delData<<" was not in the list." <<endl;
    }else if(temp == NULL)
    {
        delPtr = head;
        head = curr->next;
        delete delPtr;
        cout << "The value " <<delData<< " was deleted."<<endl;
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
    curr = head;
    temp = NULL;
    
    while(curr->next != NULL)
    {
        temp = curr;
        curr = curr->next;
    }
    if(temp == NULL)
    {
        delPtr = head;
        cout<<"The value "<<head->data<< " was deleted."<<endl;
        head = curr->next;
        delete delPtr;
    }else{
        delPtr = curr;
        cout<<"The value "<<curr->data<< " was deleted."<<endl;
        curr = curr->next;
        temp->next = curr;
        delete delPtr;
        
    }
    
}

void List::enterFirst(int addData)
{
    nodePtr istPtr = new node;
    nodePtr insert = head;
    head = istPtr;
    istPtr->next = insert;
    istPtr->data = addData;
}

void List::printList()
{
    curr = head;
    while(curr != NULL)
    {
        cout<<curr->data<<" ";
        curr = curr->next;
        
    }
    cout<<"\n";
}


