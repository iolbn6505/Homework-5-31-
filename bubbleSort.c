#define SIZE 11//皚
void bubbleSort(int * const a)//獁猨逼ㄧ计 (獶盽计戈盽计夹) 
{
	int pass,hold,i;
	for(pass=0;pass<SIZE;pass++)
	{
		for(i=0;i<SIZE-1;i++)
		{
			if(a[i]> a[i+1])//耞a[i]琌Τa[i+1] 
			{
				hold=a[i];
				a[i]=a[i+1];//a[i]㎝a[i+1]ユ传 
				a[i+1]=hold;
			}
		}
    } 
}


