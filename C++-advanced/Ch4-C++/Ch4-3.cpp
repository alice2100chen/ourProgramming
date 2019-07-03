#include <iostream>
#include <string>

using std::string;
using std::ostream;
using std::cout;
using std::endl;

typedef struct int_or_string{			// to put int or sting in one array
	char type;
	int _i;
	string _s;

	int_or_string(int i): type('i'), _i(i) {}
	int_or_string(const char* c): type('s'), _s(string(c)) {}
}iors_t;

ostream &operator<<(ostream &os, iors_t iors){
	switch(iors.type){
		case 'i':
			os << iors._i; break;
		case 's':
			os << iors._s; break;
	} 
	return os;
}

int main(){
	int num_2d_array[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	iors_t animals_2d[3][3] = {
		{"長頸鹿", "獅子", "兔子"},
		{"樹葉", "肉", "紅蘿蔔"},
		{500, 120, 30}
	};

	// for printing array directly, please refer: Ch4-4.cpp
	for(int i=0; i<3; ++i){
		for(int j=0; j<3; ++j){
			cout << num_2d_array[i][j] << (j!=2? ", ":"; ");}}
	cout << endl;
	for(int i=0; i<3; ++i){
		for(int j=0; j<3; ++j){
			cout << animals_2d[i][j] << (j!=2? ", ":"; ");}}
	cout << endl;
}





// ================ C-Style ================
/*
#include <iostream>

using std::cout;
using std::endl;

int main(){
	const char* animals_2d[3][3] = {
		{"長頸鹿", "獅子", "兔子"},
		{"樹葉", "肉", "紅蘿蔔"},
		{"500", "120", "30"}
	};

	for(int i=0; i<3; ++i){
		for(int j=0; j<3; ++j){
			cout << animals_2d[i][j] << ' ';}
		cout << endl;
	}
}
*/
