class BNode {
public:
	BNode();
	~BNode();
//	BNode* remove( const char *aKey );
	BNode* insert( const char *aKey, const char *aValue );
	void dump();
private:
	BNode* getRight();
	BNode* getLeft();
	BNode* rotLeft( BNode* );
	BNode* rotRight( BNode* );
	int updateDepth();
	unsigned int iDepth;
	char *iKey, *iValue;
	BNode *iLeft, *iRight;
};

