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
	//printf("1�� ���� ���ڸ� ��� �Է��ϼ��� : ");
	//int inputnumber1 = -1;
	//int sum = 0;
	//while (inputnumber1 != 0)
	//{
	//	std::cin >> inputnumber1;
	//	sum = sum + inputnumber1;
	//}
	//printf("�հ�� : %d�Դϴ�.",sum);

	//
	////	2. �Է¹��� ������ ������ ����غ���
	//int number1;
	//printf("���ڸ� �Է� :");
	//std::cin >> number1;
	//
	//for (int number1=2; number1 < 10; number1++)
	//{
	//	for (int number2 = 1; number2 < 10; number2++)
	//	{

	//	printf("%d*%d=%d\n", number1, number2 ,number1*number2);
	//	}
	//}

	//	//C++��Ÿ��
	//	std::random_device RandomDivece;
	//	std::mt19937 Generate(RandomDivece());
	//	
	//	printf("�յ���� : ");
	//	std::unifrom_int_distribution<> uniformDis(1, 100);  //1~100���� ���ڸ� �̾���
	//	for (int i = 0; i < 10; i++)
	//	{
	//		int Number = uniformDis(Generate);
	//		printf("%d", Number);
	//		if (i < 9)
	//		{
	//			printf(",");
	//		}
	//	 }
	//		printf("\n");
	// 
	//	for (int i = 0; i < InputNumber; i++)
	//	{
	//		for (int j = 0; j < (InputNumber - (i + 1)); j++)
	//		{
	//			printf(" ");
	//		}
	//		for (int k = 0; k < (i * 2 + 1); k ++)
	//		{
	//			printf("*");
	//		}
	//		printf("\n");
	//	���� ******************************************
	// 1. �������� ���ڸ� �����ϴ¹�
	// 2. C ��Ÿ��
	//      - rand();			�Լ� Ȱ��
	//		- srand(time(0));	�õ尪 ����
	// 3. C++ ��Ÿ��
	//		3.1 #include <random> �ʿ�
	//		3.2 C��Ÿ�Ϻ��� ���� ����� �����Ѵ�.
	// �����ε� ��ǻ�� �ȿ� �˰����� ���ڰ� �Ȱ��� �� �ִ�.
	// ������ �õ带 �־��ָ� �õ尪 ��ġ���� �����ϴ� ��
	// �ð��� �ٲ�� ��
    // 
	
   
	// c��Ÿ���� ���� ����
	//srand(time(0)); //���� ���ӿ� ����
	//srand(0); //�׽�Ʈ�� ����
	//for (int i = 0; i < 100; i++)
	//{
	//	int RandomNumber = rand();
	//	printf("������ ���� : %d\n", RandomNumber);

	//}
	//	// 0 ~ 5������ ���ڸ� �������� ���ϰ� �ʹ�.
	//	int RandomNumber1 = rand() % 6;
	//	// 1 ~ 6������ ���ڸ� �������� ���ϰ� �ʹ�.
	//	int RandomNumber1 = rand() % 6 + 1;

		////C++��Ÿ��
		//std::random_device RandomDivece;
		//std::mt19937 Generate(RandomDivece());
		//
		//printf("�յ���� : ");
		//std::unifrom_int_distribution<> uniformDis(1, 100);  //1~100���� ���ڸ� �̾���
		//for (int i = 0; i < 10; i++)
		//{
		//	int Number = uniformDis(Generate);
		//	printf("%d", Number);
		//	if (i < 9)
		//	{
		//		printf(",");
		//	}
		// }
		//	printf("\n");


		//	printf("���Ժ��� : ");
		//	std::noraml_distribution<> normalDis(80, 10);
		//	for (int i = 0; i < 10; i++)
		//	{
		//		float fNumber = normalDis(Generate);
		//		printf("%.2f", fNumber);
		//		if (i < 9)
		//		{
		//			printf(",");
		//		}
		//	}
		//printf("\n");


			// 1. �ֻ����� 100���� ������ 6�� �� �� ���Դ��� ī�����ؼ� ����ϱ�
		/*int count = 0;
		srand(time(0));
		for (int Repeat = 0; Repeat < 1000000; Repeat++)
		{
			int Dice = rand() % 6 + 1;
			if(Dice==6)
			{
				printf("6�� %d��ŭ ���Խ��ϴ�.\n", count);
				count++;
			}
		}*/
			// 2. ����, ����,������ �����
			//     -3������
			//		-enumȰ��
		
		enum select 
		{scissors = 1,rock,paper};
		int User, Computer;
		int UserScore = 0;
		int ComputerScore = 0;
		srand(time(0));
		printf("scissors(1),rock(2),paper(3) �� �� ���� ���ÿ�\n\n");
		
		Computer =rand() % 3+1;
		while (UserScore < 3 && ComputerScore < 3)
		{
			std::cin >> User;
			if (User < 1 || User>3)
			{
				printf("�ٽ� �����ϼ���\n");
				continue;
			}

			else if (User == Computer)
			{
				printf("�����ϴ�.\n");
				printf("���� ���ھ�� ����vs��ǻ�� %d vs %d �Դϴ�.\n", UserScore, ComputerScore);
				printf("�ٽ� �Է��ϼ���\n");
			}
			else if ((User == 1 && Computer == 3) || (User == 2 && Computer == 1) || (User == 3 && Computer == 2))
			{
				printf("������ �¸��Ͽ����ϴ�.\n");
				UserScore++;
				printf("���� ���ھ�� ����vs��ǻ�� %d vs %d �Դϴ�.\n", UserScore, ComputerScore);
				printf("�ٽ� �Է��ϼ���\n");
				

			}
			else
			{
				printf("��ǻ�Ͱ� �¸��Ͽ����ϴ�.\n");
				ComputerScore++;
				printf("���� ���ھ�� ����vs��ǻ�� %d vs %d �Դϴ�.\n", UserScore, ComputerScore);
				printf("�ٽ� �Է��ϼ���\n");
				
			}

		}
		if (UserScore >= 3)
		{
			printf("������ �¸��Ͽ����ϴ�.\n");
		}
		else //if (computerscore == 3)
		{
			printf("��ǻ�Ͱ� �¸��Ͽ����ϴ�.\n");
		}
			
		
		
		    // 3. ���̷ο�
			//		-��ǻ�Ͱ� 1~100������ ������ ���ڸ� �����ϰ�
			//		����ڰ� ���� ������ �Է��� �޾� " �� ����","�� ����" ���� ��Ʈ�� �����ϴ� ����
			//		-5�� �ȿ� ����� �¸�
        const unsigned int LifeLimit = 0;
		int Computer1;
		int User1=0;
		int Life=5;
		srand(time(0));
		Computer1 = rand() % 100 + 1;
		
		printf("���ڸ� �Է��ؼ� ������ ���߼���!\n\n");
		
		while (User1 != Computer1 && Life>LifeLimit)
		{
			std::cin >> User1;
			if (Computer1>User1)
			{
				printf(" �� ����\n");
				Life--;
				printf("�������� %d�� ���ҽ��ϴ�.\n",Life);
			}
			else if (Computer1<User1)
			{
				printf("�� ����\n");
				Life--;
				printf("�������� %d�� ���ҽ��ϴ�.\n",Life);
			}
		}
		if (User1 == Computer1)
		{
			printf("�¸��ϼ̽��ϴ�.\n");
		}
		else if (Life <= 0)
		{
			printf("�й��ϼ̽��ϴ�.\n");
		}
			



			//	4. ���� ������ �κ��丮�� ��Ʈ�÷��׷� ǥ���ϱ�
			//		- ������ ������ ��Ÿ���� enum�� �����
			//		- Ư�� �������� �߰��ϰ� �����ϴ� ���� �����ֱ�


		//enum Item {

		//	KeyRed =1,		// 1<<0
		//	KeyGreen =4,	// 1<<1
		//	KeyBrue = 5		// 1<<2
		//	};
		//int Inventory = 0;
		// �κ��丮 ���� ����ϱ�(�κ��丮�� ��Ʈ ���뿡 ���� ���
 		// 1�� : ������ �߰� 2�� ������ ������ 3�� ����
		// �̹� �ִ� �������� �߰��Ϸ��� �ϸ� " �̹� �ִ� ������ �Դϴ�"
		// ���� �������� �������� �ϸ� ���� �������Դϴ�. ���


	

			return 0;
		}








	//  5. �Է¹��� ���ڸ�ŭ�� ���� ���� �Ƕ�̵� �׸���
    //	    3�� �Է¹޾����� 
	//         *
	//        ***
	//		 *****



	//�׽�Ʈ 3�� ó�� �߰� �� �ݺ�
	

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
