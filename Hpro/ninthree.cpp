//#include <iostream> 
//#include <cstdio>  
//#include <stdio.h>  
//#include "header.h"
//int main()
//{
	////1. ���ڸ� �Է¹޾� ��� ���� �������� 0���� ����ϱ�
	//float a = 0;
	//printf("1�� ���� ���ڸ� �Է��ϼ���.");
	//std::cin >> a;
 //   
	//if (a > 0)
	//{
	//	printf("��� �Դϴ�\n");
	//}
	//else if(a < 0)
	//{
	//	printf("���� �Դϴ�\n");
	//}
	//else /*if (a == 0)*/
	//{
	//	printf("0�Դϴ�\n");
	//}


 //   //2. ���ڸ� �Է¹޾� Ȧ������ ¦������ ����ϱ�
	//int number1 = 0;
	//printf("2�� ���� ���ڸ� �Է��ϼ��� : ");
	//std::cin >> number1;
	//if (number1 % 2 == 0)
	//{
	//	printf("�Է��Ͻ� ���ڴ� ¦�� �Դϴ�.\n");
	//}
	//else /*if (number1 % 2 == 1)*/
	//{
	//	printf("�Է��Ͻ� ���ڴ� Ȧ�� �Դϴ�.\n");
	//}

 //   //3. �μ��� �Է� �޾� �� ū���� ����ϱ�, ���� ��� ���ٰ� ���
	//int num1 = 0, num2 = 0;
	//printf("3�� ���� ���ڸ� �� �� �Է��ϼ��� : ");
	//std::cin >> num1 >> num2;
	// 
	//if (num1 > num2)
	//{
	//	printf("���� �� ū ���� %d �Դϴ�\n",num1);
	//}
	//else if (num1 < num2)
	//{
	//	printf("���� �� ū ���� %d �Դϴ�\n", num2);
	//}
	//else/* if (num1 == num2)*/
	//{
	//	printf("�� ���� �����ϴ�.\n");
	//}


 //   //4. ���̿� Ű�� �Է� �޾� 6���̻� 120cm�̻��� �� �ѷ��ڽ��� ž�� ����, �� �ܿ��� �Ұ���
	//const unsigned int LimitAge = 5;
	//const float LimitHeight = 120.0f;
	//unsigned int Age = 0;
	//float Height = 0.0f; //�Ͻ��� ��ȯ (���� ��ȯ���ִ°�, ���� ǥ�� ������ ū ������ �����)
	//printf("���̿� Ű�� ������� �Է��ϼ��� : ");
	//std::cin >> Age >> Height;
	//if (Age >= LimitAge && Height >= LimitHeight)
	//{
	//	printf("ž�� �����մϴ�.\n");
	//}
	//else if (Age < Height)
	//{
	//	printf("ž�� �Ұ����Դϴ�.\n");
	//}

 //   //5. ������ �Է� �޾� 90�� a 80 b 70�� c 60�� d �� ���ϴ� f��� ����ϱ�
	//int score = 0;
	//printf("5�� ���� ������ �Է��ϼ���. :");
	//std::cin >> score;

	//if (score >= 90)
	//{
	//	printf("A�Դϴ�\n");
	//}
	//else if (score >= 80)
	//{
	//	printf("B�Դϴ�\n");
	//}
	//else if (score>=70)
	//{
	//	printf("C�Դϴ�\n");
	//}
	//else if(score>=60)
	//{
	//	printf("D�Դϴ�\n");
	//}
	//else
	//{
	//	printf("F�Դϴ�\n");
	//}
	//
	////>, < , >= , <= , ==

	////6. �� ������ ������ �Է¹޾�, �� ���� ����� 60�� �̻��̸� "�հ�", �ƴϸ� "���հ�"�� ���
	////	    �� �� �����̶� 40�� �̸��̸� ���հ� ����ϱ�.*/
	//
	//int score1 = 0, score2=0, score3=0;
	//float Average = 0; //���
	//printf("�� ������ ������ �Է��ϼ��� : \n");
	//std::cin >> score1 >> score2 >> score3;
	//	Average = (score1 + score2 + score3) / 3.0f;

	//	const int AverageLimit = 60;
	//	const int FailLimit = 40;
	//	float Average = (score1 + score2 + score3) / 3.0f;
    //  if ( (Average>= AverageLimit)&& (score1>=FailLimit && score2>=FailLimit&& score3>=FailLimit))
	//{
	//	printf("�հ��Դϴ�.\n");
	//}
	//else
	//	{
	//	
	//	}

	//(a !=b) : a��b�� �ٸ���.

////1. ���ڸ� �Է¹޾� ������� �������� 0���� ����ϱ�
//	int InputNumber = 0;
//	printf("���ڸ� �Է��ϼ���.");
//	std::cin >> InputNumber;
//	if (InputNumber > 0)
//	{
//		printf("��� �Դϴ�.\n");
//	}
//		else if(InputNumber <0)
//		{
//		printf("���� �Դϴ�.\n");
//		}
//		else
//	{
//		printf("0�Դϴ�.\n");
//	}
//	
//	
////2. ���ڸ� �Է¹޾� Ȧ������ ¦������ ����ϱ� -- �� �����ڷ� �������� Ȯ���غ���.
//	int Number1 = 0;
//	printf("���ڸ� �Է��ϼ��� : ");
//	std::cin >> Number1;
//	if (Number1 % 2 == 0)
//	{
//		printf("¦�� �Դϴ�\n");
//	}
//	else
//	{
//		printf("Ȧ�� �Դϴ�.\n");
//	}
////3. �� ���� �Է� �޾� �� ū ���� ����ϱ�.���� ���� ���ٰ� ���.
//	int Number2 = 0;
//	int Number3 = 0;
//	printf("���ڸ� �� �� �Է��ϼ��� : ");
//	std::cin >> Number2 >> Number3;
//	if (Number2 > Number3)
//	{
//		printf("���� %d�� %d���� �� Ů�ϴ�.\n",Number2,Number3);
//	}
//	else
//	{
//		printf("���� %d�� %d���� �� Ů�ϴ�.\n",Number3,Number2);
//	}
////4. ���̿� Ű�� �Է� �޾�, 6�� �̻�, 120cm �̻��� �� �ѷ��ڽ��� ž�� ����, �� �ܿ��� �Ұ������� ���
//	const unsigned int AgeLimit = 5;
//	const float HeightLimit = 120.0f;
//	unsigned int Age = 0;
//	float Height = 0.0f;
//	printf("���̿� Ű ������ �Է����ּ��� : ");
//	std::cin >> Age >> Height;
//	if (Age > AgeLimit && Height >= HeightLimit)
//	{
//		printf(" ž�� ����\n");
//	}
//	else
//	{
//		printf("ž�� �Ұ���\n");
//	}
//5. ������ �Է� �޾� 90�� �̻��� A, 80�� �̻��� B, 70�� �̻��� C, 60�� �̻��� D, �� ���ϴ� F��� ����ϱ�
    
//6. �� ������ ������ �Է¹޾�, �� ���� ��� 60�� �̻��̸� "�հ�", �ƴϸ� "���հ�"�� ����ϴ� ���α׷��� �ۼ��ϼ���. �Ѱ����̶� 40�� �̸��̸� ���հ� ����ϱ�
	




	/*return 0;
}*/