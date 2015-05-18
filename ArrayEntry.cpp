#include "ArrayEntry.h"

ArrayEntry::ArrayEntry() : Position() {
}

ArrayEntry::ArrayEntry(int value, int index) : Position(value) {
	this->index = index;
}

ArrayEntry::~ArrayEntry() {

}


int ArrayEntry::getIndex() {
	return index;
}

void ArrayEntry::setIndex(int index) {
	this->index = index;
}