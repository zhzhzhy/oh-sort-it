#include <stdio.h>


int partition(int array[],int L,int R){
	int temp = array[L];	
	while(L < R){
		while(L < R && array[R] >= temp){R--;}
		if(L < R){
			array[L] = array[R];
			L++;
			}
		while(L < R && array[L] <= temp){L++;}
		if(L < R){
			array[R] = array[L];
			R--;
			}

		}
	array[L] = temp;
	return L;
}

void quicksort(int array[],int L,int R){
	if(L >= R){return;}
	int M = partition(array,L,R);
	quicksort(array,L,M-1);
	quicksort(array,M+1,R);
}

int main(){
	int array[] = {12,3,15,23,45,12,5,65,1,2,5,7,5,9,4,12};
	int len = sizeof(array)/sizeof(*array);
	quicksort(array,0,len-1);
	for(int i = 0;i < len;i++){
		printf("%d\n",array[i]);
	}
}
