//first let us make sorted and unsorted array
//	//insert the first elemnet from unsorted array to sorted array 
//	//by giving temp to store the first elemnets in unsorted array
//	//j is sorted array and i is unsorted array
//	//time complexity-->O(n^2)v
//	//space complexity --->O(1)
#include<stdio.h>
void InsertionSort(int A[],int n){
	int i,j;//intilazing the indexes of unsorted and sorted array
	//consider j for sorted arrray anf i for unsorted array
	for(i=1;i<n;i++){
		j=i-1;//intiliazing the first element as sorted
		int temp =A[i];//inserted value
		while(j>=0 && A[j]>temp){//comparing the elements in sorted and unsorted array
			A[j+1]=A[j];
			j--;
		}
		A[j+1]=temp;
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int A[n],i;
	for(i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	InsertionSort(A,n);
	for(i=0;i<n;i++){
		printf("%d ",A[i]);
	}
}
