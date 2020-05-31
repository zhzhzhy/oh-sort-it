#include <stdio.h>
#include <string.h>

void merge(int array[],int L,int R){
	int M = (L + R) / 2;
	int left_size = M - L + 1;
	int right_size = R - M;
	int left[left_size];
	int right[right_size];
	int i,j,k;
	for(i = 0;i < left_size;i++){
	   left[i] = array[i];
	}
	for(i = 0;i < right_size;i++){
	   right[i] = array[M + i + 1];
	}
	i = j = k = 0;
	while(i < left_size && j < right_size){
		if(left[i] < right[j]){
	   		array[k] = left[i];
	   		i++;
	   		k++;
		}
		else{
			array[k] = right[j];
			j++;
			k++;
		}
	}
	while(i < left_size){
  		array[k] = left[i];
   		i++;
   		k++;
	}
	while(j < right_size){
  		array[k] = right[j];
   		j++;
   		k++;
	}


}

int main(){
	int i;
	int arr[] = {1,3,5,7,13,5,7,9,10};
	merge(arr,0,8);
	for(i=0;i<=8;i++){
		printf("%d\n",arr[i]);
	}
	return 0;
}
