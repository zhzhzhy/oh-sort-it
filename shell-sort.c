#include <stdio.h>

void shell_insert(int *array,int increment,int len){
	int i,j,temp;
	for(i = increment;i < len;i++){
		temp = array[i];
		for(j = i-increment;j >= 0 && array[j] > temp;j -= increment){
			array[j+increment] = array[j];
		}
		array[j+increment] = temp;
	}


}
void shellsort(int *seq,int *array,int len,int length){
	for(int i = 0;i < length;i++){
		shell_insert(array,seq[i],len);	
	}

}
int main(){
	int array[] = {2,3,4,15,2,3,56,56,345,5,49,45,47,345};
	int len = sizeof(array) / sizeof(*array);
	int seq[] = {7,4,3,1};     //shell sequence(You can change it)But the end must be 1
	int length = sizeof(seq) / sizeof(*seq);
	shellsort(seq,array,len,length);
	for(int i = 0;i < len;i++){
		printf("%d\n",array[i]);
	}

}
