#include "DLLProjectList.h"

DLLProjectList::DLLProjectList() {
    this->head = NULL;
	this->tail = NULL;
}

DLLProjectList::~DLLProjectList() {

}

void DLLProjectList::setHead(DLLNode* head){
	this->head = head;
}

void DLLProjectList::setTail(DLLNode* tail){
	this->tail = tail;
}

DLLNode* DLLProjectList::getHead(){
	return head;
}

DLLNode* DLLProjectList::getTail(){
	return tail;
}


void DLLProjectList::insertFirst(int value) {
	DLLNode * temp;
	if(isEmpty())
	{
		temp = new DLLNode(value, NULL, NULL);
		setHead(temp);
		setTail(temp);
		return;
	}
	temp = new DLLNode(value, getHead(), NULL);
	head->setPrev(temp);
	setHead(temp);
}

void DLLProjectList::deleteFirst(){
	DLLNode * temp = getHead();
	if(!isEmpty())
	{
		if( temp->getNext() == NULL)
		{
			setHead(NULL);
			setTail(NULL);
		}else{
			
			temp = temp->getNext();
			temp->setPrev(NULL);
			setHead(temp);
			
		}
	}
}

void DLLProjectList::insertLast(int value) {
	DLLNode *temp;
	if(isEmpty())
	{
		temp = new DLLNode(value, NULL, NULL);
		setHead(temp);
		setTail(temp);
		return;
	}
	temp = new DLLNode(value, NULL, getTail());
	tail->setNext(temp);
	setTail(temp);
}

Position* DLLProjectList::first() {
	DLLNode*first;
	first = getHead();
	return first;

}

Position* DLLProjectList::last() {
	DLLNode *last;
	last = getTail();
	return last;

}

Position* DLLProjectList::before(Position * p) {
    DLLNode * node = dynamic_cast<DLLNode*>(p);
	
	if(node->getPrev() == NULL)
	{
		return NULL;
	}else{
		return node->getPrev();
	}

}

Position* DLLProjectList::after(Position * p) {
    DLLNode * node = dynamic_cast<DLLNode*>(p);
	
	if(node->getNext() == NULL)
	{
		return NULL;
	}else{
		return node->getNext();
	}
}

bool DLLProjectList::isFirst(Position * p) {
	DLLNode * node = dynamic_cast<DLLNode*>(p);
	
	if (node == getHead()){
		return true;
	}else{
		return false;
	}
}

bool DLLProjectList::isLast(Position * p) {
    DLLNode * node = dynamic_cast<DLLNode*>(p);	
	
	if (node == getTail()){
		return true;
	}else{
		return false;
	}	
}

bool DLLProjectList::isEmpty() {
	if ((getHead() == NULL) && (getTail() == NULL))
	{
	return true;
	}else{
	return false;
	}
}

int DLLProjectList::size() {
	int count = 0;
	DLLNode *temp;
	if(isEmpty() == true)
	{
		return 0;
	}
	temp = new DLLNode(head->getValue(),head->getNext(),head->getPrev());
	temp = getHead();
	while(temp != NULL)
	{
		temp = temp->getNext();
		count++;
	}
	return count;
}


