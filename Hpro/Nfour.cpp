#include <iostream> 
#include <cstdio>  
#include <stdio.h>  


int main()
{
	//int flag = 0b1010;
	////ob0001 = ���� Ű�� ��������.
	////ob0010 = ������ Ű�� ��������.
	////ob0100 = ���� Ű�� ��������.
	////ob1000 = �Ʒ��� Ű�� ��������.

	//if ((flag & 0b0010) != 0b0000)
	//{
	//	//������ Ű�� �������ֵ�.
	//}
	//else
	//{
	//	//������ Ű�� ������ ���� �ʴ�.
	//}

	//flag = flag | 0b0001; // flag - 0b1011

	////int flag =		 0b1010; 
	//int result = flag ^ 0b0001; //��� - 0b1011;
	//result = 0b1011 ^ 0b0001;   //��� - 0b1010

	//flag = 0b1010;
	//int test = 0b0001;
	//test = ~test; //���� Ű�� ������ ������ ��� ����

	////enum = ����鿡�� ����� �˾ƺ��� ���� �̸��� �ٿ� ���� ��
	//enum key
	//{
	//	Up = 1 << 0,		//0b0001
	//	Down = 1 << 1,		//0b0010
	//	Left = 1 << 2,		//0b0100
	//	Right = 1 << 3		//0b1000
	
	

//	if ((flag & Up)!) = 0)
//	{
//		Up�� �������ִ�.
//	}
//	int testFlag = Up;

	// ���� �ǽ� : ����� �ϳ� �Է� �ް� Ȧ�� ���� ¦������ ����ϱ�(% ������)
	
	//int InputNumber = 0;
	//printf("����� �ϳ� �Է��ϼ��� : ");
	//std::cin >> InputNumber;

	//if ((InputNumber & 1)!=0)
	//{
	//	printf("Ȧ�� �Դϴ�.\n");
	//}
	//else
	//{
	//	printf("¦�� �Դϴ�\n");
	//}

	////��� ���� 10�� ��� for��
	////for(int i=0; i < 10; i++)
	////{
	////	printf("Hello World : %d\n", i);
	////}

	//int Count = 1;
	//do
	//{
	//	printf("Hello World While : %d\n", Count);
	//	Count++;
	//} while ((Count % 3) != 0); // �ϴ� �ѹ� �����ϰ� while()�� ������ ���̸� �ڵ� �� ����
	//
	//
	//
	//while ((Count % 3) != 0) // while()�� ������ ���̸� �ڵ� �� ����
	//{
	//	printf("Hello World While : %d\n", Count);
	//	Count++;
	//}

	//	1. 0�� �Է¹��� ������ �Է��� ��� �ް�, 0�� �ԷµǸ� �Է¹��� ������ ���� ����ϱ�
	//		while�̶� do=while��� �غ���
	printf("1�� ���� ���ڸ� ��� �Է��ϼ��� : ");
	int inputnumber1 = -1;
	int sum = 0;
	while (inputnumber1 != 0)
	{
		std::cin >> inputnumber1;
		sum = sum + inputnumber1;
	}
	printf("�հ�� : %d�Դϴ�.",sum);

	
	//	2. �Է¹��� ������ ������ ����غ���
	int number1;
	printf("���ڸ� �Է� :");
	std::cin >> number1;
	
	for (int number1=2; number1 < 10; number1++)
	{
		for (int number2 = 1; number2 < 10; number2++)
		{

		printf("%d*%d=%d\n", number1, number2 ,number1*number2);
		}
	}

		//C++��Ÿ��
		std::random_device RandomDivece;
		std::mt19937 Generate(RandomDivece());
		
		printf("�յ���� : ");
		std::unifrom_int_distribution<> uniformDis(1, 100);  //1~100���� ���ڸ� �̾���
		for (int i = 0; i < 10; i++)
		{
			int Number = uniformDis(Generate);
			printf("%d", Number);
			if (i < 9)
			{
				printf(",");
			}
		 }
			printf("\n");


			printf("���Ժ��� : ");
			std::noraml_distribution<> normalDis(80, 10);
			for (int i = 0; i < 10; i++)
			{
				float fNumber = normalDis(Generate);
				printf("%.2f", fNumber);
				if (i < 9)
				{
					printf(",");
				}
			}
			printf("\n");


			// 1. �ֻ����� 100���� ������ 6�� �� �� ���Դ��� ī�����ؼ� ����ϱ�
			// 2. ����, ����,������ �����
			//     -3������
			//		-enumȰ��
			// 3. ���̷ο�
			//		-��ǻ�Ͱ� 1~100������ ������ ���ڸ� �����ϰ�
			//		����ڰ� ���� ������ �Է��� �޾� " �� ����","�� ����" ���� ��Ʈ�� �����ϴ� ����
			//		-5�� �ȿ� ����� �¸�
			//	4. ���� ������ �κ��丮�� ��Ʈ�÷��׷� ǥ���ϱ�
			//		- ������ ������ ��Ÿ���� enum�� �����
			//		- Ư�� �������� �߰��ϰ� �����ϴ� ���� �����ֱ�










	//  5. �Է¹��� ���ڸ�ŭ�� ���� ���� �Ƕ�̵� �׸���
    //	    3�� �Է¹޾����� 
	//         *
	//        ***
	//		 *****

	return 0;

	//�׽�Ʈ 3�� ó�� �߰� �� �ݺ�
	
}
//��Ʈ ������
// & (And)	�� ��Ʈ�� ��� 1�̸� 1, �ƴϸ� 0
// Ư�� ��Ʈ�� ������ �Ǿ� �ִ��� Ȯ���ϴµ� ���(�÷��� �˻��)
//int a = 10;      // 0b1010
//int b = 9;       // 0b1001
//int c = a & b;   // 0b1000
//// | (Or)   �� ��Ʈ�� �ϳ��� 1�̸� 1, �Ѵ� 0�̸� 0
//// Ư�� ��Ʈ�� �÷��׸� �����ϰ� ���� �� ���(�÷��� ����)
//int a = 10;      // 0b1010
//int b = 9;       // ob1001 
//int c = a | b;   // ob1011
//// ^ (XOR) �� ��Ʈ�� ���� �ٸ��� 1, �ٸ��� 0
//// Ư�� ��Ʈ�� ����ϰ� ���� �� ���
//int a = 10;      // 0b1010
//int b = 9;       // ob1001 
//int c = a | b;   // ob0011
//// ~ (Not) ��Ʈ���� ���� ��Ų��.
//// ��� ��� ������ �����ϰ� ���� �� ���
//int a = 10;     //ob1010
//// a = ~a;         //ob0101
//// << (Left Shift)	��Ʈ���� �������� �̵�
// //�� �� ������ ������ ���� �ι谡 �ȴ�.
// int a = 7;     //ob0111
// //a = a << 1;	//ob1110
//// >> (Right Shift) ��Ʈ���� ���������� �̵�
// //�� �� ������ ������ ���� ������ �ȴ�.
// int a = 7;     //ob0111
//// a = a << 1;    //ob0011

 
//  �ݺ���
//  -��� ���� �ϳ�
//	-Ư�� �ڵ� ����� ���ǿ� ���� ���� �� �ݺ��ؼ� ������ �� �ְ� ���ִ� ��
//	for			��������       
//	while		������
//	do-while	��������
