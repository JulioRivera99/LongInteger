#ifndef DLLPROJECTLIST_H
#define DLLPROJECTLIST_H

#include <stddef.h> // to use NULL
#include "ProjectList.h"
#include "DLLNode.h"

using namespace std;

class DLLProjectList : public ProjectList {

private:
    DLLNode * head;
    DLLNode * tail;

public:
    DLLProjectList();
    ~DLLProjectList();
	
	void setHead(DLLNode*);
	void setTail(DLLNode*);
	DLLNode* getHead();
	DLLNode* getTail();

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
