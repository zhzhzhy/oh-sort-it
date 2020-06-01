#include <stdio.h>

void insertion(int array[],int size_arr){
	for(int i = 0;i < size_arr;i++){
			int temp = array[i];
			int j = i-1;
			while(j >= 0 && array[j] > temp){
			   array[j+1] = array[j];
			   j--;
			}
			array[j+1] = temp;
	}
}
int main(){
	int arr[]={2,7,8,6,4,6,16,78};
	int size_arr = sizeof(arr) / sizeof(arr[0]);
	insertion(arr,size_arr);
	for(int i = 0;i <size_arr;i++){
		printf("%d\n",arr[i]);
	}
}
