#include <stdio.h>
#include <stdlib.h>
#define SIZE 11//�}�C�j�p 
void bubbleSort(int * const a);//�w�j�ƧǨ�� (���V�D�`�Ƹ�ƪ��`�ƫ���) 
int main() {
	int a[SIZE]={22,3,5,6,8,12,20,18,14,16,2};//�ŧi�}�C
	int i; 
	printf("Original Data\n");	
	for(i=0;i<SIZE;i++)
	{
		printf("%d ",a[i]);//��ܭ�l�}�C 
	}
	
	bubbleSort(a);
	
	printf("\nTrue Data\n");
	for(i=0;i<SIZE;i++)
	{
		printf("%d ",a[i]);//��ܥѤp��j���}�C 
	}
	printf("\n");
}
