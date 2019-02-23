#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::cout;
using std::endl;

int main(){
	vector<int> grades = {40, 80, 75, 20, 96, 69, 50};
	int lower_60 = 0, higher_90 = 0;

	for(int i=0; i<7; ++i){
		if(grades[i] > 90){
			++higher_90;}
		else if(grades[i] < 60){
			++lower_60;}}

	cout << "<60分:  " << lower_60 << " 個" << endl;
	cout << ">90分:  " << higher_90 << " 個" << endl;
}

