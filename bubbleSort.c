#include <stdio.h>
#include <stdlib.h>
#define SIZE 11
void bubbleSort(const int *Copy)//沫排序函數 (指向常數資料的非常數指標)
{
	int i,pass,hold;
	int arrayCopy[SIZE];//宣告arrayCopy來複製陣列資料 
	for(i=0;i<SIZE;i++)
	{
		arrayCopy[i]=Copy[i];//複製陣列資料 
	}
	
	for(pass=0;pass<SIZE;pass++)
	{
		for(i=0;i<SIZE-1;i++)
		{
			if(arrayCopy[i]> arrayCopy[i+1])//判斷arrayCopy[i]是否有大於arrayCopy[i+1] 
			{
				hold=arrayCopy[i];
				arrayCopy[i]=arrayCopy[i+1];//arrayCopy[i]與arrayCopy[i+1]交換 
				arrayCopy[i+1]=hold; 
			}
		}
    } 
    	
    printf("\nTrue Data\n");
	for(i=0;i<SIZE;i++)
	{
		printf("%d ",arrayCopy[i]);//顯示由小到大的陣列 
	}
}
