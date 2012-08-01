#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "btree.h"

	
BTree::BTree() {
	iRootNode = new BNode();
}

BTree::~BTree() {
	delete iRootNode;
	iInstance = NULL;
}

void BTree::reset() {
	delete iRootNode;
	iRootNode = new BNode();
}

BTree* BTree::getInstance() {
	if ( !iInstance ) {
		iInstance = new BTree();
	} 
	return iInstance;
}



int BTree::insert( const char *aKey, const char *aValue ) {
	iRootNode = iRootNode->insert( aKey, aValue );
}
	
void BTree::dump() {
	iRootNode->dump();
}
