#include "IntNode.h"

using namespace std;


IntNode* create_newIntNode(int v)
{
	IntNode temp;
	IntNode* ptr = temp.create();
	ptr->setValue(v);
	cout << "construct IntNode" << endl;
	return ptr;
}

std::ostream& operator<<(std::ostream& os, const IntNode& n)
{
	n.print(os);
	return os;
}

IntNode::IntNode(int value) : value(value)
{
	//do nothing
}

void IntNode::setValue(int v)
{
	this->value = v;
}

int IntNode::getValue() const
{
	return this->value;
}

void IntNode::print(std::ostream& os) const
{
	os << "value is: " << this->value << endl;
}


