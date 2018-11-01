#include <iostream>
#include "bst.h"
using namespace std;


int main(void) {
	Bst bstree;

	bstree.insert(5);
	bstree.insert(3);
	bstree.insert(7);
	bstree.insert(2);
	bstree.insert(4);
	bstree.insert(6);
	bstree.insert(8);

	bstree.inOrder();

	return 0;
}

