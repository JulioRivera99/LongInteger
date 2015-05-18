#include "UtilityOperations.h"


int overflow(const int t) {
	int over;
	over = t/100000000;
	return over;
}

int underflow(const int t) {
	int under;
	under = t%100000000;
	return under;
}

int upperHalf(const int t) {
	int upper;
	upper = t/10000;
	return upper;
}

int lowerHalf(const int t) {
	int lower;
	lower = t%10000;
	return lower;
}

int digits(const int t) {
	int num = t;
	int total = 0;
	do
	{
		num = num/10;
		total++;
	}while( num != 0);
	return total;
}

