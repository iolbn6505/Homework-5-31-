#include <stdio.h>
#include <stdlib.h>
#define SIZE 11//陣列大小 
void bubbleSort(const int const *Copy);//泡沫排序函數 (指向常數資料的常數指標)
int main() {
	int a[SIZE]={22,1,5,6,8,12,20,18,14,16,2};//宣告陣列 
	int i,pass;
	printf("Original Data\n");
	
	for(i=0;i<SIZE;i++)
	{
		printf("%d ",a[i]);//顯示原始陣列 
	}
	
	bubbleSort(a);//呼叫泡沫排序函數
}
