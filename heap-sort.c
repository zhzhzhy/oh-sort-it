#include <stdio.h>

void swap(int *tree,int i,int j){
	int temp = tree[i];
	tree[i] = tree[j];
	tree[j] = temp;

}

void heapify(int *tree,int n,int head){
	int max = head;	
	int c1 = 2*head + 1;
	int c2 = 2*head + 2;
	if(c1 < n && tree[c1] > tree[max]){
		max = c1;
	}
	if(c2 < n && tree[c2] > tree[max]){
		max = c2;
	}
	if(max != head){
		swap(tree,head,max);
		heapify(tree,n,max);	
	}

}

int main(){
	int array[] = {1,6,5,7,6,566,7,6,5,67,6,7,89,766};
	int len = sizeof(array)/sizeof(*array);
	heapify(array,len,0);
	for(int i = 0;i < len;i++){
		printf("%d\n",array[i]);	
	}

}
