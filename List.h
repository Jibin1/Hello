#ifndef LIST_H
#define LIST_H

class List
{
private: 
    struct node
    {
        int data; 
        node* next;
    };
    typedef struct node* nodePtr;
    nodePtr head;
    nodePtr curr;
    nodePtr temp;
 
public:
    List();
    void addNode(int addData);
    void delNode(int delData);
    void printList();
    void removeLast();
    void enterFirst(int addData);
    ~List();

};

#endif // LIST_H
