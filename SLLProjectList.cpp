#include "SLLProjectList.h"

SLLProjectList::SLLProjectList() {
	this->head = NULL;
}

SLLProjectList::~SLLProjectList() {

}

void SLLProjectList::setHead(SLLNode* head){
	this->head = head;
}

SLLNode* SLLProjectList::getHead(){
	return head;
}

void SLLProjectList::insertFirst(int value) {
	SLLNode * temp;
	if(isEmpty())
	{
		temp = new SLLNode(value, NULL);
		setHead(temp);
		return;
	}
	temp = new SLLNode(value, getHead());
	setHead(temp);	
}

void SLLProjectList::deleteFirst(){
	SLLNode * temp = getHead();
	if(!isEmpty())
	{
		if( temp->getNext() == NULL)
		{
			setHead(NULL);
		}else{
			
			temp = temp->getNext();
			setHead(temp);
			
		}
	}
}

void SLLProjectList::insertLast(int value) {
	SLLNode *temp;
	if(isEmpty())
	{
		temp = new SLLNode(value, NULL);
		setHead(temp);
		return;
	}
	temp = getHead();
	while(temp->getNext() != NULL)
	{
		temp = temp->getNext();
	}
	SLLNode * cur = new SLLNode(value, NULL);
	temp->setNext(cur);
}

Position* SLLProjectList::first() {
	SLLNode*first;
	first = getHead();
	return first;
}

Position* SLLProjectList::last() {
	SLLNode *last;
	last = getHead();
	
	while( last->getNext() != NULL)
	{
		last = last->getNext();
	}
	return last;
}

Position* SLLProjectList::before(Position * p) {
    SLLNode * node = dynamic_cast<SLLNode*>(p);
	SLLNode * temp = getHead();
	
	if( temp != node)
	{
		while(temp != NULL)
		{
			if(temp->getNext() == node)
			{
			return temp;
			}
			temp = temp->getNext();
		}
	}
	return temp;
}

Position* SLLProjectList::after(Position * p) {
    SLLNode * node = dynamic_cast<SLLNode*>(p);
	if(node->getNext() == NULL)
	{
		return NULL;
	}else{
		return node->getNext();
	}
}

bool SLLProjectList::isFirst(Position * p) {
    SLLNode * node = dynamic_cast<SLLNode*>(p);
	if (node == getHead()){
		return true;
	}else{
		return false;
	}
}

bool SLLProjectList::isLast(Position * p) {
    SLLNode * node = dynamic_cast<SLLNode*>(p);
	SLLNode * temp = getHead();
	
	while(temp->getNext() != NULL)
	{
		temp = temp->getNext();
	}
	
	if(temp == node)
	{
	return true;
	}else
	{
	return false;
	}
}

bool SLLProjectList::isEmpty() {
	if (getHead() == NULL)
	{
	return true;
	}else{
	return false;
	}
}

int SLLProjectList::size() {
	int count = 0;
	SLLNode *temp;
	if(isEmpty() == true)
	{
		return 0;
	}
	temp = new SLLNode(head->getValue(),head->getNext());
	temp = getHead();
	while(temp != NULL)
	{
		temp = temp->getNext();
		count++;
	}
	return count;
}


