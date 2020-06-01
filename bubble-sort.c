#include <stdio.h>

void bubblesort(int *array,int len){
	int temp,i,j;
	for(i = 0;i < len;i++){
		int flag = 0;
		for(j = i;j < len-1;j++){
			if(array[j+1] < array[j]){
			   temp = array[j];
			   array[j] = array[j+1];
			   array[j+1] = temp;
			   flag = 1;
			}
		}
		if(flag == 0){break;}
	}
	


}
int main(){
	int array[] = {1,2,56,3,4,5,64,67,12,32};
	int len = sizeof(array) / sizeof(array[0]);
	bubblesort(array,len);
	for(int i = 0;i < len;i++){
		printf("%d\n",array[i]);
	}

}
