#ifndef PROJECTLIST_H
#define PROJECTLIST_H

#include "Position.h"

class ProjectList {

public:

    virtual ~ProjectList() { }

    virtual void insertFirst(int) = 0;
	virtual void deleteFirst() = 0;
    virtual void insertLast(int) = 0;

    virtual Position* first() = 0;
    virtual Position* last() = 0;

    virtual Position* before(Position*) = 0;
    virtual Position* after(Position*) = 0;

    virtual bool isFirst(Position*) = 0;
    virtual bool isLast(Position*) = 0;

    virtual bool isEmpty() = 0;

    virtual int size() = 0;
};


#endif
