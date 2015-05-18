#ifndef LONGINTEGER_H
#define LONGINTEGER_H

#include <string>
#include "DLLProjectList.h"
#include "SLLProjectList.h"
#include "ArrayProjectList.h"
#include <stdlib.h> // to use atoi
#include <iostream> // for output and node output
#include "UtilityOperations.h"

using std::string;


class LongInteger {

private:
    ProjectList * list;
	bool isNegative;

public:

	LongInteger();
    LongInteger(const string&);
    ~LongInteger();
	
	void setNegative (bool);
	//void setTail(DLLNode*);
	bool getNegative() const;
	
    void output();
	void nodeOutput();

    bool getSign() const;

    int getDigitCount();

    bool equalTo(const LongInteger *) const;
    bool lessThan(const LongInteger*) const;
    bool greaterThan(const LongInteger*) const;
	bool unsignedGreaterThan(const LongInteger*) const;

    LongInteger* add(const LongInteger*) const;
	LongInteger* unsignedAdd(const LongInteger*, const LongInteger*) const;
    LongInteger* subtract(const LongInteger*) const;
	LongInteger* unsignedSubtract(const LongInteger*, const LongInteger*) const;
    LongInteger* multiply(const LongInteger*) const;
    LongInteger* power(const int pow) const;
	LongInteger* unsignedPower(LongInteger*, const int pow) const;
};

#endif // LONGINTEGER_H
