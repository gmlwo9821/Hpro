#include <iostream> 
#include <cstdio>  
#include <stdio.h>  
#include "header.h"
int main()
{
	//1. ���ڸ� �Է¹޾� ��� ���� �������� 0���� ����ϱ�
	float a = 0;
	printf("1�� ���� ���ڸ� �Է��ϼ���.");
	std::cin >> a;
    
	if (a > 0)
	{
		printf("��� �Դϴ�\n");
	}
	else if(a < 0)
	{
		printf("���� �Դϴ�\n");
	}
	else if (a == 0)
	{
		printf("0�Դϴ�\n");
	}


    //2. ���ڸ� �Է¹޾� Ȧ������ ¦������ ����ϱ�
	int number1 = 0;
	printf("2�� ���� ���ڸ� �Է��ϼ��� : ");
	std::cin >> number1;
	if (number1 / 2 == 0)
	{
		printf("�Է��Ͻ� ���ڴ� ¦�� �Դϴ�.\n");
	}
	else if (number1 % 2 == 1)
	{
		printf("�Է��Ͻ� ���ڴ� Ȧ�� �Դϴ�.\n");
	}

    //3. �μ��� �Է� �޾� �� ū���� ����ϱ�, ���� ��� ���ٰ� ���
	int num1 = 0, num2 = 0;
	printf("3�� ���� ���ڸ� �� �� �Է��ϼ��� : ");
	std::cin >> num1 >> num2;
	 
	if (num1 > num2)
	{
		printf("���� �� ū ���� %d �Դϴ�\n",num1);
	}
	else if (num1 < num2)
	{
		printf("���� �� ū ���� %d �Դϴ�\n", num2);
	}
	else if (num1 == num2)
	{
		printf("�� ���� �����ϴ�.\n");
	}


    //4. ���̿� Ű�� �Է� �޾� 6���̻� 120cm�̻��� �� �ѷ��ڽ��� ž�� ����, �� �ܿ��� �Ұ���
	int age = 0;
	int hei = 0;
	printf("���̿� Ű�� ������� �Է��ϼ��� : ");
	std::cin >> age >> hei;
	if (age >= 6 && hei >= 120)
	{
		printf("ž�� �����մϴ�.\n");
	}
	else if (age < hei)
	{
		printf("ž�� �Ұ����Դϴ�.\n");
	}

    //5. ������ �Է� �޾� 90�� a 80 b 70�� c 60�� d �� ���ϴ� f��� ����ϱ�
	int sco = 0;
	printf("5�� ���� ������ �Է��ϼ���. :");
	std::cin >> sco;

	if (sco >= 90)
	{
		printf("A�Դϴ�\n");
	}
	else if (sco >= 80)
	{
		printf("B�Դϴ�\n");
	}
	else if (sco>=70)
	{
		printf("C�Դϴ�\n");
	}
	else if(sco>=60)
	{
		printf("D�Դϴ�\n");
	}
	else
	{
		printf("F�Դϴ�\n");
	}
	
	//>, < , >= , <= , ==

	//6. �� ������ ������ �Է¹޾�, �� ���� ����� 60�� �̻��̸� "�հ�", �ƴϸ� "���հ�"�� ���
	//	    �� �� �����̶� 40�� �̸��̸� ���հ� ����ϱ�.*/
	int score1 = 0,score2=0,score3=0;
	int avr = 0; //���
	printf("�� ������ ������ �Է��ϼ��� : \n");
	std::cin >> score1 >> score2 >> score3;
		avr = (score1 + score2 + score3) / 3;
	if (avr >= 60)
	{
		printf("�հ��Դϴ�.\n");
	}
	else if (avr < 60)
	{
		printf("���հ��Դϴ�.\n");
	}
	else if (score1<40 && score2<40 && score3 < 40)
		{
			printf("���հ��Դϴ�.\n");
		}







	return 0;
}