#include <stdio.h>
#include <iostream>
#include "List.h"

using namespace std;

int main()
{
	List test;
    test.addNode(41);
    test.addNode(52);
    test.addNode(66);
    test.enterFirst(9);
    test.enterFirst(3);
    test.delNode(9);
    test.removeLast();
    test.printList();
	return 0;
}
