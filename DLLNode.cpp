#include "DLLNode.h"

DLLNode::DLLNode(int value, DLLNode * next, DLLNode * prev) : Position(value) {
	this->next = next;
	this->prev = prev;
}

void DLLNode::setNext(DLLNode* next){
	this->next = next;
}

void DLLNode::setPrev(DLLNode* prev){
	this->prev = prev;
}

DLLNode* DLLNode::getNext(){
	return next;
}

DLLNode* DLLNode::getPrev(){
	return prev;
}
