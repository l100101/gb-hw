//	������: ���������� ���������� �� ���� �� ����� �� �������
//	 ������ ���������� ����� ����� �� �������, ����� ������ ���������� �� ������ �� �� 
#include <stdio.h>

int mod(int num)//������ �����
{
	if (num<0)
		{
			num=-num;
		}
	return num;
}

int power(int n, int p) 
{
	if (p==0) return 1;//����� � 0 ������� = 1
	if (p==1) return n;//����� � 1 ������� = �����
	
	int result=n;
	
	for(int i=1;i<p;i++)
	{
		result *= n;
	}
	return result;
}

int main()
{
	int n,p;
	do
	{
		scanf("%d%d",&n, &p);
	}while(mod(n)>1000 || mod(p)>1000 || p<0);//���� ���� ������������, �� ������ ��� ���
	
	printf("%d",power(n,p));
	return 0;
}
