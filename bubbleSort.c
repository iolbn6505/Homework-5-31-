#define SIZE 11
//void bubbleSort(int *element1Ptr,int *element2Ptr)
void bubbleSort(int * a)
{
	int pass,hold,i;
	for(pass=0;pass<SIZE;pass++)
	{
		for(i=0;i<SIZE-1;i++)
		{
			if(a[i]> a[i+1])//判斷a[i]是否有大於a[i+1] 
			{
				hold=a[i];
				a[i]=a[i+1];
				a[i+1]=hold;
			}
		}
    } 
/*	int hold;
	hold=*element1Ptr;
	*element1Ptr=*element2Ptr;
	*element2Ptr=hold;*/ 
}


