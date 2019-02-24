#include <stdio.h>

int main(){
	const char* animals[] = {"長頸鹿", "獅子", "老虎", "河馬", "熊", "兔子", "斑馬"};

	for(int i=0, arr_len=sizeof(animals)/sizeof(char*); i<arr_len; ++i){
		printf("%s\n", animals[i]);}
}
