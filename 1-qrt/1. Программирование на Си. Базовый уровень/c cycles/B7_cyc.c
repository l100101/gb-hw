#include <stdio.h>
int main()
{
	int a, a_copy,quantity=0,equality=0;
	scanf("%d",&a);
	a_copy=a;//�������� �������� ����� 
	
	while(a_copy>0)	//������� ���������� ���� � "a", ���������� ��� � "quantity"
	{
		a_copy=a_copy/10;
		quantity++;
	}
	
	double pow(double x, long n) //���������� ������� ��� ���������� � �������)
	{
	double powered = 1;
	while(n){
		if(n % 2) 
			{
				powered *= x;
				n--;
			}
			else
				{  
					x *= x;
					n /= 2;    
				}
			}
		return powered;
	}

	for(int i=0; i<quantity; i++)//������� �� 0 �� ���������� ����
	{
		for(j=0; j<10; j++) //���������� ������ ����� � ������ 0,1,2,3,4...9 
		{
			int power=pow(10,j);
			//numbers[i]=a/power%10;//
			
			
		}
		
		
		
		
		//int power=pow(10,i);
		//numbers[i]=a/power%10;//���������� ����� � ������, ������� � �������� �������
		//num[5]=12345/1%10=5
		//num[4]=12345/10%10=4
		//num[3]=12345/100%10=3
		//num[2]=12345/1000%10=2
		//num[1]=12345/10000%10=1
	}
	
	
	for(int num=0;num<10;num++)//��������� ������� ���� �� 0 �� 9 � �������
	{
		nubmers[j]==num ?  
	}
	
}
