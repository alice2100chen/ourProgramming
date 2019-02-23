#include <iostream>#include <vector>using std::vector;using std::ostream;using std::cout;using std::endl;ostream &operator<<(ostream &os, vector<int> data){	os << '[';	for(auto &d: data){		os << d << (&d==&data.back()? "":", ");}	return os << ']';}int binary_search(vector<int> &data, int left, int right, int target){	if(left > right){		return -1;}	int middle = int((right-left) / 2 +left);	if(data.at(middle) > target){		return binary_search(data, left, middle-1, target);}	else if(data.at(middle) < target){		return binary_search(data, middle+1, right, target);}	else{		return middle;}}int main(){	vector<int> data = {2, 3, 5, 7, 9, 11, 12, 15, 20, 22, 25};	int data_count = data.size();	int target = 7;	int found_index = binary_search(data, 0, data_count-1, target);	if(found_index == -1){		cout << "無法找到搜尋目標 " << target << endl;}	else{		cout << "發現搜尋目標 " << target << " , 位於陣列中第 " << found_index << " 個位置" << endl;}}