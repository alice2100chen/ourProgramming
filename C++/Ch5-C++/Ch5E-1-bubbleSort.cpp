#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::ostream;
using std::cout;
using std::endl;

template <class T>			// should know about template
ostream &operator<<(ostream &os, vector<T> data){
	os << '[';
	for(auto &d: data){
		os << d << (&d==&data.back()? "":", ");}
	return os << ']';
}

template <class T>			// template for swapping both vector<int> and vector<string>
void swap(vector<T> &data, int x, int y){
	T temp = data.at(x);
	data.at(x) = data.at(y);
	data.at(y) = temp;
}

void one_bubble(vector<int> &data, vector<string> &animal_names, int i, int data_count){
	for(int j=0; j<data_count-1-i; ++j){
		if(data.at(j) > data.at(j+1)){
			swap(data, j, j+1);
			swap(animal_names, j, j+1);
		}}
}

int main(){
	vector<vector<int>> data_2d = {
		{90, 30, 40},
		{20, 40, 90},
		{70, 80, 70},
		{60, 30, 20}
	};
	vector<int> data_sum = {0, 0, 0, 0};
	int data_count = data_sum.size();

	vector<string> animal_names = {"企鵝", "兔子", "黑熊", "烏龜"};
	int animal_num = animal_names.size();

	for(int i=0; i<animal_num; ++i){
		for(int j=0; j<3; ++j){
			data_sum.at(i) += data_2d.at(i).at(j);}}

	cout << "總分統計結果如下: " << endl;
	cout << animal_names << endl;
	cout << data_sum << '\n' << endl;

	for(int i=0; i<data_count-1; ++i){
		one_bubble(data_sum, animal_names, i, data_count);
		cout << "第 " << i << " 回合結果:" << endl;
		for(int j=0; j<4; ++j){
			cout << '[' << animal_names.at(j) << ", " << data_sum.at(j) << ']' << endl;}
		cout << endl;
	}
	cout << "排序結束" << endl;

	for(int i=0; i<3; ++i){
		cout << "第 " << i+1 << " 名: " << animal_names.at(data_count-i-1) << endl;}
}
