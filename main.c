#include <stdio.h>
#include <stdlib.h>
#define SIZE 11//�}�C�j�p 
void bubbleSort(const int const *Copy);//�w�j�ƧǨ�� (���V�`�Ƹ�ƪ��`�ƫ���)
int main() {
	int a[SIZE]={22,1,5,6,8,12,20,18,14,16,2};//�ŧi�}�C 
	int i,pass;
	printf("Original Data\n");
	
	for(i=0;i<SIZE;i++)
	{
		printf("%d ",a[i]);//��ܭ�l�}�C 
	}
	
	bubbleSort(a);//�I�s�w�j�ƧǨ��
}
