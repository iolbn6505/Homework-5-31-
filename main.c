#include <stdio.h>
#include <stdlib.h>
#define SIZE 11//陣列大小 
void bubbleSort(int * const a);//泡沫排序函數 (指向非常數資料的常數指標) 
int main() {
	int a[SIZE]={22,3,5,6,8,12,20,18,14,16,2};//宣告陣列
	int i; 
	printf("Original Data\n");	
	for(i=0;i<SIZE;i++)
	{
		printf("%d ",a[i]);//顯示原始陣列 
	}
	
	bubbleSort(a);
	
	printf("\nTrue Data\n");
	for(i=0;i<SIZE;i++)
	{
		printf("%d ",a[i]);//顯示由小到大的陣列 
	}
	printf("\n");
}
