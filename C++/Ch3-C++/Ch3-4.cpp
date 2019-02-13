#include <iostream>

using std::cout;
using std::endl;

int main(){
	int x = 10, y = 20;

	cout << (x>y? "True":"False") << endl;			// print "False"
	cout << (x<y? "True":"False") << endl;			// print "True"
	cout << (x==y? "True":"False") << endl;			// print "False"
}





// ================ Advance ================
/* 
 * To know: Ternary operator ":?" (aka Conditional operator)
 * To use: "condition ? exprT : exprF", do exprT if condition is true, else do exprF
 * Using ternary operator not only make code easier and shorter, but also better performance.
 */
/*
#include <iostream>

using std::cout;
using std::endl;

int main(){
	bool a = true, b = false;
	int c = 1, d = 0;

	if(a){
		cout << "a is t" << endl;}
	else{
		cout << "a is f" << endl;}
	if(b){
		cout << "b is t" << endl;}
	else{
		cout << "b is f" << endl;}
	if(c==1){
		cout << "c is 1" << endl;}
	else{
		cout << "c is not 1" << endl;}
	if(d==1){
		cout << "d is 1" << endl;}
	else{
		cout << "d is not 1" << endl;}

//-----
	cout << "a is " << (a? "t" : "f") << endl;
	cout << "b is " << (b? "t" : "f") << endl;
	cout << "c is " << (c==1? "1" : "not 1") << endl;
	cout << "d is " << (d==1? "1" : "not 1") << endl;

//-----
	a? cout << "a is t" << endl : cout << "a is f" << endl;
	b? cout << "b is t" << endl : cout << "b is f" << endl;
	c==1? cout << "c is 1" << endl : cout << "c is not 1" << endl;
	c==1? cout << "d is 1" << endl : cout << "d is not 1" << endl;
}
*/



// ================
/* 
 * To know: In C/C++, 0=false, non-0=true(usually use 1).
 * To use: You can use "boolalpha" to change cout from "0/1" to "false/true",
 *		use "noboolalpha" to change cout from "false/true" to "0/1".
 * Notice: "boolalpha" and "noboolalpha" are similar to <iomanip>, please refer Ch3-3.cpp-Advance.
 */
/*
#include <iostream>

using std::cout;
using std::endl;
using std::boolalpha;
using std::noboolalpha;

int main(){
	bool a = true;
	cout << a << endl;			// print: 1

	boolalpha(cout);
	cout << a << endl;			// print: true

	noboolalpha(cout);
	cout << a << endl;			// print: 1
	cout << boolalpha << a << endl;		// print: true
	cout << a << endl;			// print: true

	cout << noboolalpha << a << endl;	// print: 1
	cout << a << endl;			// print: 1
}
*/
