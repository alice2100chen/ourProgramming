#include <stdio.h>

int main(){
	const char* contest_names[] = {"游泳", "單車", "跑步"};
	const char* times[] = {"30分鐘", "1小時", "1小時半"};

	for(int i=0; i<3; ++i){
		printf("%s : %s\n", contest_names[i], times[i]);}
}
