#include <stdio.h>

int numbers[10] = {0,0,0,0,0,0,0,0,0,0};//����� ���������� ���� �� 0 �� 9 ���������� � �����?
int contain = 0;//���������� �� ������ 2 ���������� ����? (0/1)
int main()
{
	int a, a_copy,i=0;
	
	scanf("%d",&a);
	
	a_copy=a;
	
	while(a>0)	//������� ���������� ���� � "a", ���������� ��� � "i"
	{
		a=a/10;
		i++;
	}

	while(i>0)
	{
		for(int j=0; j<=9; j++)	//���������, ����� ����� ���������� � �������
		{
			if(a_copy%10==j)	//� ���������� � ������ � ������� 
			{
				numbers[j]++;
			}
		}
		i--;
		a_copy/=10;
	}
	
	for(int o=0;o<=9; o++)
	{
		if(numbers[o]>1)
			{
				contain=1;
				break;
			}
	}
	contain ? printf("YES") : printf("NO");  
	
	

	return 0;
}
