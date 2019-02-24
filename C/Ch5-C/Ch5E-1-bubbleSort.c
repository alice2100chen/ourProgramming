#include <stdio.h>

void swap_int(int data[], int x, int y){
	int temp = data[x];
	data[x] = data[y];
	data[y] = temp;
}

void swap_string(const char* data[], int x, int y){
	const char* temp = data[x];
	data[x] = data[y];
	data[y] = temp;
}

void print_arr_int(int data[], int arr_len){
	printf("[");
	for(int i=0; i<arr_len; ++i){
		printf("%d%s", data[i], i==arr_len-1? "":", ");}
	printf("]\n");
}

void print_arr_string(const char* data[], int arr_len){
	printf("[");
	for(int i=0; i<arr_len; ++i){
		printf("%s%s", data[i], i==arr_len-1? "":", ");}
	printf("]\n");
}

void one_bubble(int data[], const char* animal_names[], int i, int data_count){
	for(int j=0; j<data_count-1-i; ++j){
		if(data[j] > data[j+1]){
			swap_int(data, j, j+1);
			swap_string(animal_names, j, j+1);
		}}
}

int main(){
	int data_2d[][3] = {
		{90, 30, 40},
		{20, 40, 90},
		{70, 80, 70},
		{60, 30, 20}
	};
	int data_sum[] = {0, 0, 0 ,0};
	int data_count = sizeof(data_sum)/sizeof(int);

	const char* animal_names[] = {"企鵝", "兔子", "黑熊", "烏龜"};
	int animal_num = sizeof(animal_names)/sizeof(char*);

	for(int i=0; i<animal_num; ++i){
		for(int j=0; j<3; ++j){
			data_sum[i] += data_2d[i][j];}}

	printf("總分統計結果如下:\n");
	print_arr_string(animal_names, animal_num);
	print_arr_int(data_sum, data_count);

	for(int i=0; i<data_count-1; ++i){
		one_bubble(data_sum, animal_names, i, data_count);
		printf("第 %d 回合結果:\n", i);
		for(int j=0; j<4; ++j){
			printf("[%s, %d]\n", animal_names[j], data_sum[j]);}
		printf("\n");
	}
	printf("排序結束\n");

	for(int i=0; i<3; ++i){
		printf("第 %d 名: %s\n", i+1, animal_names[data_count-i-1]);}
}
