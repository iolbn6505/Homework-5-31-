#include <stdio.h>
#include <stdlib.h>
#define SIZE 11
void bubbleSort(const int *Copy)//�j�ƧǨ�� (���V�`�Ƹ�ƪ��D�`�ƫ���)
{
	int i,pass,hold;
	int arrayCopy[SIZE];//�ŧiarrayCopy�ӽƻs�}�C��� 
	for(i=0;i<SIZE;i++)
	{
		arrayCopy[i]=Copy[i];//�ƻs�}�C��� 
	}
	
	for(pass=0;pass<SIZE;pass++)
	{
		for(i=0;i<SIZE-1;i++)
		{
			if(arrayCopy[i]> arrayCopy[i+1])//�P�_arrayCopy[i]�O�_���j��arrayCopy[i+1] 
			{
				hold=arrayCopy[i];
				arrayCopy[i]=arrayCopy[i+1];//arrayCopy[i]�ParrayCopy[i+1]�洫 
				arrayCopy[i+1]=hold; 
			}
		}
    } 
    	
    printf("\nTrue Data\n");
	for(i=0;i<SIZE;i++)
	{
		printf("%d ",arrayCopy[i]);//��ܥѤp��j���}�C 
	}
}
