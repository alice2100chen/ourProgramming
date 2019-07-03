#include <stdio.h>

int main(){
	int score_array[] = {85, 92, 88, 96};
	const char* animals[] = {"長頸鹿", "獅子", "老虎", "河馬", "熊", "兔子", "斑馬"};

	printf("[");
	for(int i=0, arr_len=sizeof(score_array)/sizeof(int); i<arr_len; ++i){
		printf("%d%s", score_array[i], i==arr_len-1? "":", ");}
	printf("]\n['");

	for(int i=0, arr_len=sizeof(animals)/sizeof(char*); i<arr_len; ++i){
		printf("%s%s", animals[i], i==arr_len-1? "'":"', '");}
	printf("]\n");
}
