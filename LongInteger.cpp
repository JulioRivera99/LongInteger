#include "LongInteger.h"


LongInteger::LongInteger()
{
	this->list = new DLLProjectList();
	//this->list = new SLLProjectList();
	//this->list = new ArrayProjectList();
}

LongInteger::LongInteger(const string& str) {
	// Do not change this line until Step 3
    this->list = new DLLProjectList();
	//this->list = new SLLProjectList();
	//this->list = new ArrayProjectList();
	
	string s,t,p;
	int l,i,k;
	
	t = str;
	s = str.at(0);
	if( s == "-")
	{
		t.erase(0,1);
		setNegative(true);
	}else{
		setNegative(false);
	}
	
	if( t.length() > 8 )
	{
		i = t.length() - 8;
		
			while( i > 0) {
			if ( i < 9)
			{
				k = i;
			}
			p = t.substr(i,8);
			l = atoi(p.c_str());
			list->insertFirst(l);
			i -= 8;
		}
	
		p = t.substr(0,k);
		l = atoi(p.c_str());
		list->insertFirst(l);
	}else{
		i = t.length();
		p = t.substr(0,i);
		l = atoi(p.c_str());
		list->insertFirst(l);	
		
	}
	
}

LongInteger::~LongInteger() {
    delete this->list;
}

void LongInteger::setNegative(bool isNegative){
	this->isNegative = isNegative;
}

bool LongInteger::getNegative() const{
	return isNegative;
}


void LongInteger::output(){
	Position * cur;
	int num;
	if ( list->isEmpty()){
		cout << "error the list is empty" << endl;
		return;
	}
	cout << "The value of the long integer is" << endl;
	if(getSign()){
		cout << "-";
	}
	
	cur = list->first();
	cout << cur->getValue();
	while( cur != list->last()){
		cur = list->after(cur);
		num = 8 - digits(cur->getValue());
		while( num > 0)
		{
			cout << "0";
			num--;
		}
		cout << cur->getValue();
	}
	cout << endl;
}

void LongInteger::nodeOutput(){
	Position * cur;
	if ( list->isEmpty()){
		cout << "error the list is empty" << endl;
		return;
	}
	
	cur = list->first();
	cout << "The node on this list are" << endl;
	cout << cur->getValue() << " ";
	while( cur != list->last()){
		cur = list->after(cur);
		cout << cur->getValue() << " ";
	}
	cout << endl;
}

bool LongInteger::getSign() const {
	if (getNegative())
	{
		return true;
	}else{
		return false;
	}
}

int LongInteger::getDigitCount(){
	Position * cur;
	int totalDigits;
	cur = list->first();
	totalDigits = digits(cur->getValue()) + ((list->size()-1)*8);
	return totalDigits;
}

bool LongInteger::equalTo(const LongInteger* i) const {
	Position * cur1;
	Position * cur2;
	cur1 = list->first();
	cur2 = i->list->first();
	if ( getSign() == i->getSign()){
		if( list->size() == i->list->size()){
			if(cur1->getValue() == cur2->getValue()){
				while(cur1 != list->last())
				{
					cur1 = list->after(cur1);
					cur2 = i->list->after(cur2);
					if(cur1->getValue() != cur2->getValue())
					{
						return false;
					}
				}
				return true;
			}
		}
	}else{
		return false;
	}
}

bool LongInteger::lessThan(const LongInteger* i) const {
	Position * cur1;
	Position * cur2;
	cur1 = list->first();
	cur2 = i->list->first();
	if( getSign() && !i->getSign() ){
		return true;
	}else if( !getSign() && i->getSign() ) {
		return false;
	}else if(getSign() && i->getSign()){
		if( list->size() > i->list->size()){
			return true;
		}else if( list->size() < i->list->size()){
			return false;
		}else if ( list->first()->getValue() > i->list->first()->getValue() ){
			return true;
		}else{
			while(cur1 != list->last())
				{
					cur1 = list->after(cur1);
					cur2 = i->list->after(cur2);
					if(cur1->getValue() > cur2->getValue())
					{
						return true;
					}else if(cur1->getValue() < cur2->getValue()){
						return false;
					}
				}
			return false;
		}
	}else if( list->size() < i->list->size()){
		return true;
	}else if( list->size() > i->list->size()){
		return false;
	}else if ( list->first()->getValue() < i->list->first()->getValue() ){
		return true;
	}else{
		while(cur1 != list->last())
				{
					cur1 = list->after(cur1);
					cur2 = i->list->after(cur2);
					if(cur1->getValue() < cur2->getValue())
					{
						return true;
					}else if(cur1->getValue() > cur2->getValue()){
						return false;
					}
				}
		return false;
	}
}

bool LongInteger::unsignedGreaterThan(const LongInteger* i) const {
	Position * cur1;
	Position * cur2;
	cur1 = list->first();
	cur2 = i->list->first();
	
	if( list->size() > i->list->size()){
		return true;
	}else if( list->size() < i->list->size()){
		return false;
	}else if ( list->first()->getValue() > i->list->first()->getValue() ){
		return true;
	}else{
		while(cur1 != list->last())
				{
					cur1 = list->after(cur1);
					cur2 = i->list->after(cur2);
					if(cur1->getValue() > cur2->getValue())
					{
						return true;
					}else if(cur1->getValue() < cur2->getValue()){
						return false;
					}
				}
		return false;
	}
}


bool LongInteger::greaterThan(const LongInteger* i) const {
	Position * cur1;
	Position * cur2;
	cur1 = list->first();
	cur2 = i->list->first();
	if( !getSign() && i->getSign() ){
		return true;
	}else if( getSign() && !i->getSign() ) {
		return false;
	}else if(getSign() && i->getSign()){
		if( list->size() < i->list->size()){
			return true;
		}else if( list->size() > i->list->size()){
			return false;
		}else if ( list->first()->getValue() < i->list->first()->getValue() ){
			return true;
		}else{
			while(cur1 != list->last())
				{
					cur1 = list->after(cur1);
					cur2 = i->list->after(cur2);
					if(cur1->getValue() < cur2->getValue())
					{
						return true;
					}else if(cur1->getValue() > cur2->getValue()){
						return false;
					}
				}
			return false;
		}
	}else if( list->size() > i->list->size()){
		return true;
	}else if( list->size() < i->list->size()){
		return false;
	}else if ( list->first()->getValue() > i->list->first()->getValue() ){
		return true;
	}else{
		while(cur1 != list->last())
				{
					cur1 = list->after(cur1);
					cur2 = i->list->after(cur2);
					if(cur1->getValue() > cur2->getValue())
					{
						return true;
					}else if(cur1->getValue() < cur2->getValue()){
						return false;
					}
				}
		return false;
	}
}

LongInteger* LongInteger::add(const LongInteger* i) const {
	
	LongInteger* add;
	if(!getSign() && !i->getSign())
	{
		add = unsignedAdd(this, i);
		add->setNegative(false);
	}else if(getSign() && i->getSign())
	{
		add = unsignedAdd(this, i);
		add->setNegative(true);
	}else if(!getSign() && i->getSign())
	{
		if( this->unsignedGreaterThan(i))
		{
			add = unsignedSubtract(this, i);
			add->setNegative(false);
		}else
		{
			add = unsignedSubtract(i, this);
			add->setNegative(true);
		}
	}else if(getSign() && !i->getSign())
	{
		if( this->unsignedGreaterThan(i))
		{
			add = unsignedSubtract(this, i);
			add->setNegative(true);
		}else
		{
			add = unsignedSubtract(i, this);
			add->setNegative(false);
		}
	}
	return add;
	
}

LongInteger* LongInteger::unsignedAdd(const LongInteger* x, const LongInteger* y) const {
	int i,j;
	Position * cur1;
	Position * cur2;
	cur1 = x->list->last();
	cur2 = y->list->last();
	i = x->list->size();
	j = y->list->size();
	
	LongInteger* add = new LongInteger();
	
	int numCarry = 0;
	
	while( numCarry > 0 || i > 0 || j > 0)
	{
		int numValue = numCarry;
		if(i > 0)
		{
			numValue += cur1->getValue();
			i -= 1;
			if(cur1 != x->list->first())
			{
				cur1 = x->list->before(cur1);
			}
		}
		if(j > 0)
		{
			numValue += cur2->getValue();
			j -= 1;
			if(cur2 != y->list->first())
			{
				cur2 = y->list->before(cur2);
			}
		}
		numCarry = overflow(numValue);
		numValue = underflow(numValue);
		
		add->list->insertFirst(numValue);
	
	}
	return add;
}



LongInteger* LongInteger::subtract(const LongInteger* i) const {

	LongInteger* sub;
	if(!getSign() && !i->getSign())
	{
		if( this->unsignedGreaterThan(i))
		{
			sub = unsignedSubtract(this, i);
			sub->setNegative(false);
		}else
		{
			sub = unsignedSubtract(i, this);
			sub->setNegative(true);
		}
	}else if(getSign() && i->getSign())
	{
		if( this->unsignedGreaterThan(i))
		{
			sub = unsignedSubtract(this, i);
			sub->setNegative(true);
		}else
		{
			sub = unsignedSubtract(i, this);
			sub->setNegative(false);
		}
	}else if(!getSign() && i->getSign())
	{
		sub = unsignedAdd(this, i);
		sub->setNegative(false);
	}else if(getSign() && !i->getSign())
	{
		sub = unsignedAdd(this, i);
		sub->setNegative(true);
	}
	return sub;

}

LongInteger* LongInteger::unsignedSubtract(const LongInteger* x, const LongInteger* y) const {
	int i,j;
	Position * cur1;
	Position * cur2;
	cur1 = x->list->last();
	cur2 = y->list->last();
	i = x->list->size();
	j = y->list->size();
	
	LongInteger* sub = new LongInteger();
	
	int numBorrow = 0;
	
	while( i > 0 || j > 0)
	{
		int numValue = numBorrow;
		if(i > 0)
		{
			numValue += cur1->getValue();
			i -= 1;
			if(cur1 != x->list->first())
			{
				cur1 = x->list->before(cur1);
			}
		}
		if(j > 0)
		{
			numValue -= cur2->getValue();
			j -= 1;
			if(cur2 != y->list->first())
			{
				cur2 = y->list->before(cur2);
			}
		}
		if(numValue < 0)
		{
			numValue += 100000000;
			numBorrow = -1;
		}else
		{
			numBorrow = 0;
		}
		if( numValue > 0 || sub->list->size() == 0){
		sub->list->insertFirst(numValue);
		}
	}
	return sub;
}




LongInteger* LongInteger::multiply(const LongInteger* i) const {
	int k,j,c1,c2,d1,d2,z1,z2,z3,v1,v2;
	int count = 0;
	int x = 10000;
	Position * cur1;
	Position * cur2;
	cur1 = list->last();
	cur2 = i->list->last();
	k = list->size();
	j = i->list->size();
	LongInteger* mul = new LongInteger("0");
	
	while(j > 0)
	{
		LongInteger* temp = new LongInteger("0");
		k = list->size();
		
		for (int q = 0; q < count; q++)
		{
			temp->list->insertFirst(0);
		} 
		
		bool inserted = false;
		int carry = 0;
		while(k > 0 )
		{
			
			c1 = upperHalf(cur1->getValue());
			c2 = lowerHalf(cur1->getValue());
			d1 = upperHalf(cur2->getValue());
			d2 = lowerHalf(cur2->getValue());
			z1 = c1 * d1;
			z3 = c2 * d2;
			z2 = ( (c1 + c2) * (d1 + d2) ) - z1 - z3;
			v1 = z1 + upperHalf(z2);
			v2 = z3 + (lowerHalf(z2) * x );
			
			carry = overflow(v2);
			v2 = underflow(v2);
			
			temp->list->first()->setValue( v2 + temp->list->first()->getValue());
			temp->list->insertFirst(v1);

			if(cur1 != list->first())
			{
				cur1 = list->before(cur1);
			}
			k -=1;
		}
		
		if ( carry > 0 )
		{
			temp->list->first()->setValue( temp->list->first()->getValue() + carry);
		}
		
		mul = unsignedAdd(mul,temp);
		if(cur2 != i->list->first())
		{
			cur2 = i->list->before(cur2);
		}
		j -=1;
		cur1 = list->last();
		count++;
		delete temp;
	}
	
	if( (getSign() && i->getSign()) || (!getSign() && !i->getSign()) )
	{
		mul->setNegative(false);
	}else{
		mul->setNegative(true);
	}
	
	if ( mul->list->first()->getValue() == 0 && mul->list->size() > 1){
		mul->list->deleteFirst();
    } 
return mul;	

}

LongInteger* LongInteger::power(const int p) const {
	LongInteger* pow = new LongInteger("1");
	pow = multiply(pow);
	int expo = p;
	
	pow = unsignedPower(pow, expo);
	
	if(expo % 2 != 0 && getSign())
	{
		pow->setNegative(true);
	}else
	{
		pow->setNegative(false);
	}
	
	return pow;
}


LongInteger* LongInteger::unsignedPower(LongInteger* pow, const int p) const{
	
	int expo = p;
	
	if ( expo == 0)
	{
		pow = new LongInteger("1");
		return pow;
	} else if ( expo == 1)
	{
		return pow;
	} else if( expo % 2 == 0)
	{
		LongInteger* pw = unsignedPower( pow, expo/2);
		pow = pw->multiply(pw);
		return pow;
	}else
	{
		LongInteger* pw = unsignedPower( pow, expo/2);
		pow = pw->multiply(pw->multiply(pow));
		return pow;
	}
	
}


