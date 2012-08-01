#include "bnode.h"

class BTree {
public:
	/**
	* @retval insert new node
	*/
	int insert( const char *aKey, const char *aValue );
	/**
	* @retval depth of subtree
	*/
	int remove( const char *aKey );
	/**
	* @retval value belonging to the key
	*/
	const char* find( const char *aKey );

	/**
	* @retval pointer to BTree instance (created if not preexisting)
	*/
	void reset();

	/**
	* Dump content of current tree
	*/
	void dump();
	
	~BTree();

private:
	BNode *iRootNode;
	static BTree *iInstance;
};
