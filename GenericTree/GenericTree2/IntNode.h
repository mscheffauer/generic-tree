#pragma once

#include "Node.h"

class IntNode : public Node {
protected:
	int value = 0;
public:

	explicit IntNode(int v = 0);
	virtual ~IntNode() = default;
	explicit IntNode(const IntNode& n) = default;

	IntNode* create() const   override    // Virtual constructor (creation) 
	{
		return new IntNode();
	}
	IntNode* clone() const  override      // Virtual constructor (copying) 
	{
		return new IntNode(*this);
	}

	void setValue(int v);
	int getValue() const;

	IntNode& operator=(const IntNode& n) = default;
	friend std::ostream& operator <<(std::ostream& os, const IntNode& n);
	void print(std::ostream& os) const override; 

};

IntNode* create_newIntNode(int v);

