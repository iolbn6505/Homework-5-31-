#define SIZE 11//�}�C�j�p
void bubbleSort(int * const a)//�w�j�ƧǨ�� (���V�D�`�Ƹ�ƪ��`�ƫ���) 
{
	int pass,hold,i;
	for(pass=0;pass<SIZE;pass++)
	{
		for(i=0;i<SIZE-1;i++)
		{
			if(a[i]> a[i+1])//�P�_a[i]�O�_���j��a[i+1] 
			{
				hold=a[i];
				a[i]=a[i+1];//a[i]�Ma[i+1]�洫 
				a[i+1]=hold;
			}
		}
    } 
}


