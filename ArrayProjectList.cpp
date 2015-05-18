#include "ArrayProjectList.h"

ArrayProjectList::ArrayProjectList() {
	this->n = 0;
	sizeMax = 8;
	values = new ArrayEntry[sizeMax]();
}

ArrayProjectList::~ArrayProjectList() {

}

void ArrayProjectList::insertFirst(int value) {
	if(n + 1 > sizeMax)
	{
		reSize();
	}
	values[n].setValue(value);
	values[n].setIndex(n);
	n++;
}

void ArrayProjectList::deleteFirst() {
	ArrayEntry * newValues = new ArrayEntry[sizeMax];
	
	for(int k=0; k < n-1; k++)
	{
		newValues[k] = values[k];
	}
	delete[] values;
	values = newValues;
	n--;
}

void ArrayProjectList::insertLast(int value) {
	ArrayEntry * newValues = new ArrayEntry[sizeMax];
	if(n + 1 > sizeMax)
	{
		reSize();
	}

	newValues[0].setValue(value);
	newValues[0].setIndex(0);

		for(int k=0; k < n-1; k++)
	{
		newValues[k+1] = values[k];
	}
	delete[] values;
	values = newValues;
	
	n++;
}

Position* ArrayProjectList::first() {
	ArrayEntry * first;
	first = &values[n-1];
	return first;
}

Position* ArrayProjectList::last() {
	ArrayEntry * last;
	last = &values[0];
	return last;
}

Position* ArrayProjectList::before(Position * p) {
    ArrayEntry * entry = dynamic_cast<ArrayEntry*>(p);
	
	if(entry == first())
	{
		return NULL;
	}
	return &values[entry->getIndex()+1]; 
}

Position* ArrayProjectList::after(Position * p) {
    ArrayEntry * entry = dynamic_cast<ArrayEntry*>(p);
	if(entry == last())
	{
		return NULL;
	}
	return &values[entry->getIndex()-1];
}

bool ArrayProjectList::isFirst(Position * p) {
    ArrayEntry * entry = dynamic_cast<ArrayEntry*>(p);
	if(entry == &values[n-1])
	{
		return true;
	}else
	{
		return false;
	}
}

bool ArrayProjectList::isLast(Position * p) {
    ArrayEntry * entry = dynamic_cast<ArrayEntry*>(p);
	if(entry == &values[0])
	{
		return true;
	}else
	{
		return false;
	}
}

bool ArrayProjectList::isEmpty() {
	if(n == 0)
	{
		return true;
	}else
	{
		return false;
	}
}

int ArrayProjectList::size() {
	return n;
}

void ArrayProjectList::reSize() {
	ArrayEntry * newValues = new ArrayEntry[sizeMax*2];
	std::copy(values, values + n, newValues);
	delete[] values;
	values = newValues;
	sizeMax *= 2;
	}


