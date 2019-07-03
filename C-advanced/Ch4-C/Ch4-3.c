#include <stdio.h>

int main(){
	int num_2d_array[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	const char* animals_2d[][3] = {
		{"長頸鹿", "獅子", "兔子"},
		{"樹葉", "肉", "紅蘿蔔"},
		{"500", "120", "30"}
	};

	printf("[");
	for(int i=0; i<3; ++i){
		printf("[");
		for(int j=0; j<3; ++j){
			printf("%d%s", num_2d_array[i][j], j==2? "":", ");}
		printf("]%s", i==2? "":", ");
	}
	printf("]\n[");

	for(int i=0; i<3; ++i){
		printf("['");
		for(int j=0; j<3; ++j){
			printf("%s%s", animals_2d[i][j], j==2? "'":"', '");}
		printf("]%s", i==2? "":", ");
	}
	printf("]\n");
}
