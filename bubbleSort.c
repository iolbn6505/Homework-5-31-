#define SIZE 11//陣列大小
void bubbleSort(int * const a)//泡沫排序函數 (指向非常數資料的常數指標) 
{
	int pass,hold,i;
	for(pass=0;pass<SIZE;pass++)
	{
		for(i=0;i<SIZE-1;i++)
		{
			if(a[i]> a[i+1])//判斷a[i]是否有大於a[i+1] 
			{
				hold=a[i];
				a[i]=a[i+1];//a[i]和a[i+1]交換 
				a[i+1]=hold;
			}
		}
    } 
}


