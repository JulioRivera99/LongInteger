#ifndef ARRAYPROJECTLIST_H
#define ARRAYPROJECTLIST_H

#include <stddef.h> // to use NULL
#include <algorithm>// std::copy
#include "ProjectList.h"
#include "ArrayEntry.h"

using namespace std;

class ArrayProjectList : public ProjectList {

private:
    ArrayEntry* values;
	
	int sizeMax;
	
	// OR
	
	//ArrayEntry * entries;
	
	int n;

public:
    ArrayProjectList();
    ~ArrayProjectList();

    void insertFirst(int);
	void deleteFirst();
    void insertLast(int);

    Position* first();
    Position* last();

    Position* before(Position*);
    Position* after(Position*);

    bool isFirst(Position*);
    bool isLast(Position*);

    bool isEmpty();

    int size();
	void reSize();
};

#endif
