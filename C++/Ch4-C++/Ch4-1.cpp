#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::cout;
using std::endl;

int main(){
	vector<int> score_array = {85, 92, 88, 96};
	vector<string> animals = {"長頸鹿", "獅子", "老虎", "河馬", "熊", "兔子", "斑馬"};

//	=== should know more about pointer, ternary operator, range-based for loop ===
	for(auto &score: score_array){
		cout << score << (&score==&score_array.back()? "\n":", ");}
	for(auto &one_animal: animals){
		cout << one_animal << (&one_animal==&animals.back()? "\n":", ");}

//	=== easier way ===
//	for(auto &score: score_array){
//		cout << score << ' ';}
//	cout << endl;
//	for(auto &one_animal: animals){
//		cout << one_animal << ' ';}
//	cout << endl;
}






// ================ C-Style ================
/*
#include <iostream>

using std::cout;

int main(){
	int score_array[] = {85, 92, 88, 96};
	const char* animals[] = {"長頸鹿", "獅子", "老虎", "河馬", "熊", "兔子", "斑馬"};

	for(int i=0, arr_len=(sizeof(score_array)/sizeof(int)); i<arr_len; ++i){
		cout << score_array[i] << (i==arr_len-1? '\n':' ');}

	for(int i=0, arr_len=(sizeof(animals)/sizeof(char*)); i<arr_len; ++i){
		cout << animals[i] << (i==arr_len-1? '\n':' ');}
}
*/
