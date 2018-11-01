struct Node {
	Node *left;
	Node *right;
	int key;
	Node(int k);
};

class Bst {
	private:
	Node *rootNode;
	void insert(Node *root, int key);
	void inOrder(Node *root);
	void deleteTree(Node *root);

	public:
	Bst();
	~Bst();
	void insert(int key);
	void deleteTree(void);
	void inOrder(void);
};
