#include <iostream>
#include "bst.h"

Node::Node(int k) {
	left = NULL;
	right = NULL;
	key = k;
}

Bst::Bst() {
	rootNode = NULL;
}

Bst::~Bst() {
	deleteTree();
}

void Bst::insert(int key) {
	if (!rootNode)
		rootNode = new Node(key);
	else
		insert(rootNode, key);
}

void Bst::insert(Node *root, int key) {
	if (key > root->key) {
		if (!root->right)
			root->right = new Node(key);
		else
			insert(root->right, key);
	}
	else {
		if (!root->left)
			root->left = new Node(key);
		else
			insert(root->left, key);
	}
}

void Bst::deleteTree(void) {
	deleteTree(rootNode);
}

void Bst::deleteTree(Node *root) {
	if (root) {
		deleteTree(root->left);
		deleteTree(root->right);
		delete(root);
	}
}

void Bst::inOrder(void) {
	inOrder(rootNode);
}

void Bst::inOrder(Node *root) {
	if (root) {
		inOrder(root->left);
		std::cout << " " << root->key;
		inOrder(root->right);
	}
}

