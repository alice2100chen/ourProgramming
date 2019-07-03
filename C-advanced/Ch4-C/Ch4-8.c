#include <stdio.h>

int main(){
	const char* animals_2d[][3] = {
		{"長頸鹿", "獅子", "兔子"},
		{"樹葉", "肉", "紅蘿蔔"},
		{"500", "120", "30"}
	};

	for(int i=0; i<3; ++i){
		for(int j=0; j<3; ++j){
			printf("%s\n", animals_2d[i][j]);}}
}
