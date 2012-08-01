#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "bnode.h"

BNode::BNode() :
		iDepth( 0 ),
		iKey( 0 ), 
		iValue( 0 ),
		iLeft( 0 ),
		iRight( 0 )
{
}

BNode::~BNode()
{
	delete iLeft;
	delete iRight;
	free( iValue );
	free( iKey );
}

BNode* BNode::getLeft() {
	if ( !iLeft ) {
		iLeft = new BNode();
	}
	return iLeft;
}

BNode* BNode::getRight() {
	if ( !iRight ) {
		iRight = new BNode();
	}
	return iRight;
}

BNode* BNode::rotRight( BNode *aParent ) {
	BNode *result = NULL;
	printf("rotRight\n");
	if ( ( NULL != aParent ) && ( NULL != aParent->iLeft ) ) {
		result = aParent->iLeft;
		aParent->iLeft = result->iRight;
		result->iRight = aParent;
		result->updateDepth();
	}
	return result;
}

BNode* BNode::rotLeft( BNode *aParent ) {
	BNode *result = NULL;
	printf("rotLeft\n");
	if ( ( NULL !=  aParent ) && ( NULL != aParent->iRight ) ) {
		result = aParent->iRight;
		aParent->iRight = result->iLeft;
		result->iLeft = aParent;
		result->updateDepth();
	}
	return result;
}

int BNode::updateDepth() {
	int leftDepth, rightDepth, result;
	leftDepth = iLeft ? iLeft->updateDepth() : -1;
	rightDepth = iRight ? iRight->updateDepth() : -1;
	iDepth = leftDepth > rightDepth ? leftDepth : rightDepth;
	iDepth++;
	return iDepth;
}


BNode* BNode::insert( const char *aKey, const char *aValue ) {
	BNode* result = this;
  printf("insert\n");
	if ( !iKey ) {
		iKey = (char*) malloc( strlen( aKey ) + 1 );
		strcpy( iKey, aKey ); 
		iValue = (char*) malloc( strlen( aValue ) + 1 );
		strcpy( iValue, aValue ); 
	} else {
		int leftDepth, rightDepth;
		int cmp = strcmp( aKey, iKey );
		if ( cmp > 0 ) {
			iRight = getRight()->insert(aKey, aValue);
			rightDepth = iRight->iDepth;
			leftDepth = iLeft ? iLeft->iDepth : -1;
			if ( iDepth <= rightDepth ) iDepth = rightDepth + 1;
			if ( rightDepth - leftDepth > 1 ) {
				printf("rd: %d, ld: %d\n", rightDepth, leftDepth);
                                result = rotLeft( this );
			}
		} else if ( cmp < 0 ) {
			iLeft = getLeft()->insert(aKey, aValue);
			leftDepth = iLeft->iDepth;
			rightDepth = iRight ? iRight->iDepth : -1;
			if ( iDepth <= leftDepth ) iDepth = leftDepth + 1;
                        int diff = leftDepth - rightDepth;
                        if ( diff > 1 ) {
				printf("rd: %d, ld: %d\n", rightDepth, leftDepth);
                                result = rotRight( this );
			}
			
		} else {
			free( iValue );
			iValue = (char*) malloc( strlen( aValue ) + 1 );
			strcpy( iValue, aValue );
		}
	}
	return result;
}

void BNode::dump( ) {
	int i = 10 - iDepth;
	if ( iLeft ) iLeft->dump();
	while( i-- > 0) printf(" ");
	printf("%d:[%s]:%s\n", iDepth, iKey, iValue);
	if ( iRight ) iRight->dump();
}
