//Name: Julio Rivera
//Class: CS 435

#include <iostream>
#include <string>
#include <time.h> //clock_t, clock, CLOCKS_PER_SEC 
#include "LongInteger.h"
#include "UtilityOperations.h"

int main(int argc, char** argv)
{
	clock_t start,end;
	int runTime[3];
	//Step 1 test cases
	cout << "Step 1 test cases" << endl <<endl;
	// 1 initialize Long Integers A-H
	cout << "1 initialize Long Integers A-H" << endl;
	
	LongInteger * A;
	A = new LongInteger("2222");
	LongInteger * B;
	B = new LongInteger("99999999");
	LongInteger * C;
	C = new LongInteger("-246813575732");
	LongInteger * D;
	D = new LongInteger("180270361023456789");
	LongInteger * E;
	E = new LongInteger("1423550000000010056810000054593452907711568359");
	LongInteger * F;
	F = new LongInteger("-350003274594847454317890");
	LongInteger * G;
	G = new LongInteger("29302390234702973402973420937420973420937420937234872349872934872893472893749287423847");
	LongInteger * H;
	H = new LongInteger("-98534342983742987342987339234098230498203894209928374662342342342356723423423");
	
	
	//2 For each Long Integer traverse its ProjectList and print the value of each node
	cout <<  endl << "2 For each Long Integer traverse its ProjectList and print the value of each node" << endl;
	cout << "traversing A to print out it's nodes" << endl;
	A->nodeOutput();
	cout << "traversing B to print out it's nodes" << endl;
	B->nodeOutput();
	cout << "traversing C to print out it's nodes" << endl;
	C->nodeOutput();
	cout << "traversing D to print out it's nodes" << endl;
	D->nodeOutput();
	cout << "traversing E to print out it's nodes" << endl;
	E->nodeOutput();
	cout << "traversing F to print out it's nodes" << endl;
	F->nodeOutput();
	cout << "traversing G to print out it's nodes" << endl;
	G->nodeOutput();
	cout << "traversing H to print out it's nodes" << endl;
	H->nodeOutput();	
	
	//3 Print each Long Integer to standard output using output().
	cout << endl << "3 Print each Long Integer to standard output using output()" << endl;
	cout << " the output of A is" << endl;
	A->output();
	cout << " the output of B is" << endl;
	B->output();
	cout << " the output of C is" << endl;
	C->output();
	cout << " the output of D is" << endl;
	D->output();
	cout << " the output of E is" << endl;
	E->output();
	cout << " the output of F is" << endl;
	F->output();
	cout << " the output of G is" << endl;
	G->output();
	cout << " the output of H is" << endl;
	H->output();
	
	//4 Print the sign and number of digits of each Long Integer.
	cout << endl << "4 Print the sign and number of digits of each Long Integer" << endl;
	cout << "the sign of A is ";
	if ( A->getSign()){
		cout << "-";
	}else{
		cout << "+";
	}
	cout << " and the Number of digits in A is " << A->getDigitCount() << endl;
	cout << "the sign of B is ";
	if ( B->getSign()){
		cout << "-";
	}else{
		cout << "+";
	}
	cout << " and the Number of digits in B is " << B->getDigitCount() << endl;
	cout << "the sign of C is ";
	if ( C->getSign()){
		cout << "-";
	}else{
		cout << "+";
	}
	cout << " and the Number of digits in C is " << C->getDigitCount() << endl;
	cout << "the sign of D is ";
	if ( D->getSign()){
		cout << "-";
	}else{
		cout << "+";
	}
	cout << " and the Number of digits in D is " << D->getDigitCount() << endl;
	cout << "the sign of E is ";
	if ( E->getSign()){
		cout << "-";
	}else{
		cout << "+";
	}
	cout << " and the Number of digits in E is " << E->getDigitCount() << endl;
	cout << "the sign of F is ";
	if ( F->getSign()){
		cout << "-";
	}else{
		cout << "+";
	}
	cout << " and the Number of digits in F is " << F->getDigitCount() << endl;
	cout << "the sign of G is ";
	if ( G->getSign()){
		cout << "-";
	}else{
		cout << "+";
	}
	cout << " and the Number of digits in G is " << G->getDigitCount() << endl;
	cout << "the sign of H is ";
	if ( H->getSign()){
		cout << "-";
	}else{
		cout << "+";
	}
	cout << " and the Number of digits in H is " << H->getDigitCount() << endl;
	
	//5 Store the value of A and B in regular ints and apply all of the utility methods.
	cout << endl << "5 Store the value of A and B in regular ints and apply all of the utility methods" << endl;
	int a = 2222;
	int b = 99999999;
	int temp;
	temp = overflow(a);
	cout << "the overflow of A is: " << temp << endl;
	temp = overflow(b);
	cout << "the overflow of B is: " << temp << endl;
	temp = underflow(a);
	cout << "the 8 digit underflow of A is: " << temp << endl;
	temp = underflow(b);
	cout << "the 8 digit underflow of B is: " << temp << endl;
	temp = upperHalf(a);
	cout << "the upper half of A is: " << temp << endl;
	temp = upperHalf(b);
	cout << "the upper half of B is: " << temp << endl;
	temp = lowerHalf(a);
	cout << "the lower half of A is: " << temp << endl;
	temp = lowerHalf(b);
	cout << "the lower half of B is: " << temp << endl;
	temp = digits(a);
	cout << "the number of digits on A is: " << temp << endl;
	temp = digits(b);
	cout << "the number of digits on B is: " << temp << endl;
	
	//6 For each Long Integer compare it to A-H using equalTo, lessThan, greaterThan
	LongInteger* units[8];
	
	
	LongInteger AA = LongInteger("2222");
	LongInteger BB = LongInteger("99999999");
	LongInteger CC = LongInteger("-246813575732");
	LongInteger DD = LongInteger("180270361023456789");
	LongInteger EE = LongInteger("1423550000000010056810000054593452907711568359");
	LongInteger FF = LongInteger("-350003274594847454317890");
	LongInteger GG = LongInteger("29302390234702973402973420937420973420937420937234872349872934872893472893749287423847");
	LongInteger HH = LongInteger("-98534342983742987342987339234098230498203894209928374662342342342356723423423");
	
	units[0] = &AA;
	units[1] = &BB;
	units[2] = &CC;
	units[3] = &DD;
	units[4] = &EE;
	units[5] = &FF;
	units[6] = &GG;
	units[7] = &HH;
	
	cout << endl << "For each Long Integer compare it to A-H using equalTo, lessThan, greaterThan" << endl << endl;
	
	for(char h1 = 'a'; h1 <= 'h'; ++h1){
		LongInteger* cur1 = units[h1 - 97];
		
		for(char h2 = 'a'; h2 <= 'h'; ++h2){
			LongInteger* cur2 = units[h2 - 97];
			
			cout << "Comparisons to " << h1 << endl;
			if(cur1->equalTo(cur2)){
				cout << h1 << " and " << h2 << " are the same" << endl;
			}else{
				cout << h1 << " and " << h2 << " are not the same" << endl;
			}
			
			if (cur1->lessThan(cur2)){
				cout << h1 << " is less than " << h2 << endl;
			}else{
				cout << h1 << " is not less than " << h2 << endl;
			}
			
			if (cur1->greaterThan(cur2)){
				cout << h1 << " is greater than " << h2 << endl;
			}else{
				cout << h1 << " is not greater than " << h2 << endl;
			}
			
		}
	}
	
	//Step 2
	//1.For each Long Integer add it to every other Long Integer (one at a time) and print the result
	cout << endl << "1:For each Long Integer add it to every other Long Integer (one at a time) and print the result" << endl;
	start = clock();
	for(char h1 = 'a'; h1 <= 'h'; ++h1){
		LongInteger* cur1 = units[h1 - 97];
		
		for(char h2 = 'a'; h2 <= 'h'; ++h2){
			LongInteger* cur2 = units[h2 - 97];
			
			cout << "Additions to " << h1 << endl;
			LongInteger* sum = cur1->add(cur2);
			cout << h1 << " + " << h2 << endl;
			sum->output();
			cout << endl;
			
		}
	}
	end = clock();
	runTime[0] = end - start;
	//2.For each Long Integer subtract it from every other Long Integer (one at a time) and print the result
	cout << "2:For each Long Integer subtract it from every other Long Integer (one at a time) and print the result" << endl;
	start = clock();
	for(char h1 = 'a'; h1 <= 'h'; ++h1){
		LongInteger* cur1 = units[h1 - 97];
		
		for(char h2 = 'a'; h2 <= 'h'; ++h2){
			LongInteger* cur2 = units[h2 - 97];
			
			cout << "Subtractions to " << h1 << endl;
			LongInteger* sub = cur1->subtract(cur2);
			cout << h1 << " - " << h2 << endl;
			sub->output();
			cout << endl;
			
		}
	}
	end = clock();
	runTime[1] = end - start;
	
	//3:For each Long Integer multiply it by every other Long Integer (one at a time) and print the result
	cout << "3:For each Long Integer multiply it by every other Long Integer (one at a time) and print the result" << endl;
	start = clock();
	for(char h1 = 'a'; h1 <= 'h'; ++h1){
	LongInteger* cur1 = units[h1 - 97];
		
		for(char h2 = 'a'; h2 <= 'h'; ++h2){
			LongInteger* cur2 = units[h2 - 97];
		
			cout << "Multiplies to " << h1 << endl;
			LongInteger* mul = cur1->multiply(cur2);
			cout << h1 << " * " << h2 << endl;
			mul->output();
			cout << endl;
			
		
		}
	}
	end = clock();
	runTime[2] = end - start;
	
	//Compute the following (in alphabetical order):
	
	cout << "4:Compute I-Z (in alphabetical order)" << endl;
	//t[0] = clock();
	cout << endl <<"I through N(all additions)" << endl;
	LongInteger * I;
	I = A->add(D);
	I->output();
	LongInteger * J;
	J = B->add(C);
	J->output();
	LongInteger * K;
	K = C->add(D);
	K->output();
	LongInteger * L;
	L = I->add(I);
	L->output();
	LongInteger * M;
	M = A->add(I);
	M->output();
	LongInteger * N;
	N = B->add(K);
	N->output();
	//t[0] = clock() - t[0];
	
	cout << endl << "O through T(all subtractions)" << endl;
	//t[1] = clock();
	LongInteger * O;
	O = A->subtract(D);
	O->output();
	LongInteger * P;
	P = C->subtract(D);
	P->output();
	LongInteger * Q;
	Q = D->subtract(C);
	Q->output();
	LongInteger * R;
	R = L->subtract(L);
	R->output();
	LongInteger * S;
	S = P->subtract(O);
	S->output();
	LongInteger * T;
	T = N->subtract(Q);
	T->output();
	//t[1] = clock() - t[1];
	cout << endl << "U through Z(all multiplication)" << endl;
	//t[2] = clock();
	LongInteger * U;
	U = A->multiply(D);//a*d
	U->output();
	LongInteger * V;
	V = B->multiply(C);
	V->output();
	LongInteger * W;
	W = D->multiply(D);
	W->output();
	LongInteger * X;
	X = O->multiply(I);
	X->output();
	LongInteger * Y;
	Y = J->multiply(P);
	Y->output();
	LongInteger * Z;
	Z = M->multiply(N);
	Z->output();
	//t[2] = clock() - t[2];
	
	//compute the 2nd, 5th, 10th abd 25th power on A-H
	start = clock();
	for(char h1 = 'a'; h1 <= 'h'; ++h1){
		LongInteger* cur1 = units[h1 - 97];
				
		cout << "Result of power of " << h1 << endl;
		LongInteger* pow = cur1->power(2);
		cout << h1 << "^2" << endl;
		pow->output();
		cout << endl;

		pow = cur1->power(5);
		cout << h1 << "^5" << endl;
		pow->output();
		cout << endl;

		pow = cur1->power(10);
		cout << h1 << "^10" << endl;
		pow->output();
		cout << endl;
		
		
		pow = cur1->power(25);
		cout << h1 << "^25" << endl;
		pow->output();
		cout << endl;
	}
	end = clock();
	runTime[3] = end - start;
	
	//Display running time
	cout << endl << "Addition took " << runTime[0] << " ticks" << endl;
	cout << "Subtraction took " << runTime[1] << " ticks" << endl;
	cout << "Multiplication took " << runTime[2] << " ticks" << endl;
	cout << "Power took " << runTime[3] << " ticks" << endl;
	
	
}