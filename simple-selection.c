#include <stdio.h>

void swap(int *array,int i,int j){
	int temp;
	temp = array[i];
	array[i] = array[j];
	array[j] = temp;
}

void selection(int array[],int len){
	int i,j;	
	for(i = 0;i < len;i++){
		for(j = i+1;j < len;j++){
			if(array[j] < array[i]){
				swap(array,j,i);
			}
		}
	}

}

int main(){
	int array[] = {1,234,5,4,3242,34,54,65,76,56,546};
	int len = sizeof(array)/sizeof(*array);
	selection(array,len);
	for(int i = 0;i < len;i++){
		printf("%d\n",array[i]);
	}

}
