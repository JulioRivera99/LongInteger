#ifndef SLLPROJECTLIST_H
#define SLLPROJECTLIST_H

#include <stddef.h> // to use NULL
#include "ProjectList.h"
#include "SLLNode.h"

using namespace std;

class SLLProjectList : public ProjectList {

private:
    SLLNode * head;

public:
    SLLProjectList();
    ~SLLProjectList();
	
	void setHead(SLLNode*);
	SLLNode* getHead();
	
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
};

#endif
