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
		heapify(tree,n,head);
	}

}

void build_heap(int *tree,int n,int head){
	for(int i = (n-1)/2;i >= 0;i--){
		heapify(tree,n,i);	
	     }
}

void heapsort(int *tree,int n){
	int i = 0;
	do{
		build_heap(tree,n-i,0);	
		swap(tree,n-i-1,0);
		i++;
	}
	while(i < n);
}

int main(){
	int array[] = {1,6,5,7,6,566,7,6,5,67,6,7,89,766};
	int len = sizeof(array)/sizeof(*array);
	heapsort(array,len);
	for(int i = 0;i < len;i++){
		printf("%d\n",array[i]);	
	}

}
