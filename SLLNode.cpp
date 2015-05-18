#include "SLLNode.h"

SLLNode::SLLNode(int value, SLLNode * next) : Position(value) {
	this->next = next;
}

void SLLNode::setNext(SLLNode* next) {
	this->next = next;
}

SLLNode* SLLNode::getNext() {
	return next;
}