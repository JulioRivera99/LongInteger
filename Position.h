#ifndef POSITION_H
#define POSITION_H

class Position {

private:
    int value;

public:
    Position();
	Position(int);//setter?
    int getValue();//getter?
	void setValue(int);
	virtual ~Position() { };
};

#endif
