#include <iostream>

using std::cout;
using std::endl;

int main(){
	int x = 10, y = 20;
	x = 30 ;

	cout << x << ' ' << y << endl;
}





// ================ Advance ================
/* 
 * To know: Difference between "char", "string", "const char*"; also "pointer" and "const".
 * To use: Different variable.
 * Note: In C++, use std::string instead of const char*.
 */
/*
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main(){
	// !! constant(immutable) means you cannot change after you define it.
	// [I]=immtuable(const), [M]=mutuable
	// [!warning] = warning: ISO C++ forbids converting a string constant to ‘char*

	char b = 'B';			// b is a [M] character('B')
	const char c = 'C';		// c is a [I] const char('C')
	char de[] = "DE";		// de is a [M] char array(char de[3]={'D','E','\0'});
	const char fg[] = "FG";		// fg is a [I] const char array(const char[3])

	char *hi = "HI";		// [!warning] hi is a (M) pointer to (M) char('H')
	const char *jk = "JK";		// jk is a (M) pointer to a (I) const char('J')
	char* const lm = "LM";		// [!warning] lm is a (I) const pointer to a char('L')
	const char* const no = "NO";	// op is a (I) const pointer to a (I) const char('N')
	string pq = "PQ";		// lm is a string object, construct with const char*("PQ")

	cout << b << c << de << fg << hi << jk << lm << no << pq << endl;	// print: BCDEFGHIJKLMNOPQ
	
//-----
	b = 'b';
//	c = 'c';	// error: assignment of read-only variable ‘c’
//	de = "de";	// error: invalid array assignment
//	de = "def";	// error: incompatible types in assignment of ‘const char [4]’ to ‘char [3]’
	de[0] = 'd';	// "DE" => "dE"
//	fg = "fg";	// error: assignment of read-only variable ‘fg’
	hi = "hi";	// [!warning]
	hi = "hi@@";	// [!warning]
	jk = "jk";	// "JK" => "jk"
//	lm = "lm";	// error: assignment of read-only variable ‘lm’
//	no = "no";	// error: assignment of read-only variable ‘no’
	pq = "pq";	// string("PQ") => string("pq")

	cout << b << c << de << fg << hi << jk << lm << no << pq << endl;	// print: bCdEFGhi@@jkLMNOpq

//-----
//	lm[0] = 'l';	// Segmentation fault (core dumped)
//	jk[0] = 'J';	// error: assignment of read-only location ‘* jk’
	de[2] = '@';	// !! Dangerous
	de[3] = '\0';	// !! Dangerous

	cout << de << endl;	// print: pE@
}
*/



// ================
/* 
 * To know: How to define many variables in one line, especially pointer.
 */
/*
#include <iostream>

using std::cout;
using std::endl;

int main(){
	int b = 1, c = 2;

	cout << b << c << endl;		// print: 12

//-----
	int *B = &b;
	int C = c;
	*B = 3;		// (A->a) => 3, (a=3)
	C = 4;		// B => 4

	cout << b << c << endl;		// print: 32
	cout << B << C << endl;		// print: 0x??4, (0x?? = address of b)
	cout << *B << C << endl;	// print: 34

//-----
	// Note: each pointer should have a * before it, otherwise it's not a pointer
	int *R, S;		// R is a pointer to int, S is an int
	int* P, Q;		// P is a pointer to int, Q is an int
	int *T, *U;		// T, U are both pointer to int

//-----
//	int* X = &b, Y = &c;		// (X) error: invalid conversion from ‘int*’ to ‘int’
	int *X = &b, *Y = &c;		// (O)
	// Note: each pointer should have * before it, otherwise it is not a pointer

	cout << *X << *Y << endl;	// print: 32
}
*/
