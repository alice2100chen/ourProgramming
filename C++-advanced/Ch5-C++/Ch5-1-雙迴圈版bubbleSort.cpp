#include <iostream>
#include <vector>

using std::vector;
using std::ostream;
using std::cout;
using std::endl;

ostream &operator<<(ostream &os, vector<int> data){
	os << '[';
	for(auto &d: data){
		os << d << (&d==&data.back()? "":", ");}
	return os << ']';
}

int main(){
	vector<int> data = {4, 1, 3, 5, 2};
	int data_count = data.size();

	for(int i=0; i<data_count-1; ++i){
		for(int j=0; j<data_count-1-i; ++j){
			if(data.at(j) > data.at(j+1)){
				int temp = data.at(j);
				data.at(j) = data.at(j+1);
				data.at(j+1) = temp;
			}}
		cout << "第 " << i << "回合結果: " << data << endl;
	}
	cout << "排序結束" << endl;
}
