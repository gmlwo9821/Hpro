#include <iostream> 
#include <cstdio>  
#include <stdio.h>  


int main()
{
	//int flag = 0b1010;
	////ob0001 = 왼쪽 키가 눌러졌다.
	////ob0010 = 오른쪽 키가 눌러졌다.
	////ob0100 = 위쪽 키가 눌러졌다.
	////ob1000 = 아래쪽 키가 눌러졌다.

	//if ((flag & 0b0010) != 0b0000)
	//{
	//	//오른쪽 키가 눌러져있따.
	//}
	//else
	//{
	//	//오른쪽 키가 눌러져 있지 않다.
	//}

	//flag = flag | 0b0001; // flag - 0b1011

	////int flag =		 0b1010; 
	//int result = flag ^ 0b0001; //결과 - 0b1011;
	//result = 0b1011 ^ 0b0001;   //결과 - 0b1010

	//flag = 0b1010;
	//int test = 0b0001;
	//test = ~test; //왼쪽 키를 제외한 나머지 모두 세팅

	////enum = 상수들에게 사람이 알아보기 좋은 이름을 붙여 놓은 것
	//enum key
	//{
	//	Up = 1 << 0,		//0b0001
	//	Down = 1 << 1,		//0b0010
	//	Left = 1 << 2,		//0b0100
	//	Right = 1 << 3		//0b1000
	
	

//	if ((flag & Up)!) = 0)
//	{
//		Up이 눌러져있다.
//	}
//	int testFlag = Up;

	// 간단 실습 : 양수를 하나 입력 받고 홀수 인지 짝수인지 출력하기(% 사용금지)
	
	//int InputNumber = 0;
	//printf("양수를 하나 입력하세요 : ");
	//std::cin >> InputNumber;

	//if ((InputNumber & 1)!=0)
	//{
	//	printf("홀수 입니다.\n");
	//}
	//else
	//{
	//	printf("짝수 입니다\n");
	//}

	////헬로 월드 10번 찍기 for문
	////for(int i=0; i < 10; i++)
	////{
	////	printf("Hello World : %d\n", i);
	////}

	//int Count = 1;
	//do
	//{
	//	printf("Hello World While : %d\n", Count);
	//	Count++;
	//} while ((Count % 3) != 0); // 일단 한번 실행하고 while()의 조건이 참이면 코드 블럭 실행
	//
	//
	//
	//while ((Count % 3) != 0) // while()의 조건이 참이면 코드 블럭 실행
	//{
	//	printf("Hello World While : %d\n", Count);
	//	Count++;
	//}

	//	1. 0을 입력받을 때까지 입력을 계속 받고, 0이 입력되면 입력받은 숫자의 합을 출력하기
	//		while이랑 do=while모두 해보기
	//printf("1번 문제 숫자를 계속 입력하세요 : ");
	//int inputnumber1 = -1;
	//int sum = 0;
	//while (inputnumber1 != 0)
	//{
	//	std::cin >> inputnumber1;
	//	sum = sum + inputnumber1;
	//}
	//printf("합계는 : %d입니다.",sum);

	//
	////	2. 입력받은 숫자의 구구단 출력해보기
	//int number1;
	//printf("숫자를 입력 :");
	//std::cin >> number1;
	//
	//for (int number1=2; number1 < 10; number1++)
	//{
	//	for (int number2 = 1; number2 < 10; number2++)
	//	{

	//	printf("%d*%d=%d\n", number1, number2 ,number1*number2);
	//	}
	//}

	//	//C++스타일
	//	std::random_device RandomDivece;
	//	std::mt19937 Generate(RandomDivece());
	//	
	//	printf("균등분포 : ");
	//	std::unifrom_int_distribution<> uniformDis(1, 100);  //1~100사이 숫자를 뽑아줌
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
	//	램덤 ******************************************
	// 1. 무작위로 숫자를 선택하는법
	// 2. C 스타일
	//      - rand();			함수 활용
	//		- srand(time(0));	시드값 설정
	// 3. C++ 스타일
	//		3.1 #include <random> 필요
	//		3.2 C스타일보다 많은 기능을 제공한다.
	// 수열인데 컴퓨터 안에 알고리즘이 숫자가 똑같이 들어가 있다.
	// 랜덤한 시드를 넣어주면 시드값 위치부터 시작하는 것
	// 시간이 바뀌는 것
    // 
	
   
	// c스타일의 랜덤 사용법
	//srand(time(0)); //실제 게임용 설정
	//srand(0); //테스트용 설정
	//for (int i = 0; i < 100; i++)
	//{
	//	int RandomNumber = rand();
	//	printf("랜덤한 숫자 : %d\n", RandomNumber);

	//}
	//	// 0 ~ 5까지의 숫자를 랜덤으로 구하고 싶다.
	//	int RandomNumber1 = rand() % 6;
	//	// 1 ~ 6까지의 숫자를 랜덤으로 구하고 싶다.
	//	int RandomNumber1 = rand() % 6 + 1;

		////C++스타일
		//std::random_device RandomDivece;
		//std::mt19937 Generate(RandomDivece());
		//
		//printf("균등분포 : ");
		//std::unifrom_int_distribution<> uniformDis(1, 100);  //1~100사이 숫자를 뽑아줌
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


		//	printf("정규분포 : ");
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


			// 1. 주사위를 100만번 돌려서 6이 몇 번 나왔는지 카운팅해서 출력하기
		/*int count = 0;
		srand(time(0));
		for (int Repeat = 0; Repeat < 1000000; Repeat++)
		{
			int Dice = rand() % 6 + 1;
			if(Dice==6)
			{
				printf("6은 %d만큼 나왔습니다.\n", count);
				count++;
			}
		}*/
			// 2. 가위, 바위,보게임 만들기
			//     -3선승제
			//		-enum활용
		
		enum select 
		{scissors = 1,rock,paper};
		int User, Computer;
		int UserScore = 0;
		int ComputerScore = 0;
		srand(time(0));
		printf("scissors(1),rock(2),paper(3) 중 한 개를 내시오\n\n");
		
		Computer =rand() % 3+1;
		while (UserScore < 3 && ComputerScore < 3)
		{
			std::cin >> User;
			if (User < 1 || User>3)
			{
				printf("다시 선택하세요\n");
				continue;
			}

			else if (User == Computer)
			{
				printf("비겼습니다.\n");
				printf("현재 스코어는 유저vs컴퓨터 %d vs %d 입니다.\n", UserScore, ComputerScore);
				printf("다시 입력하세요\n");
			}
			else if ((User == 1 && Computer == 3) || (User == 2 && Computer == 1) || (User == 3 && Computer == 2))
			{
				printf("유저가 승리하였습니다.\n");
				UserScore++;
				printf("현재 스코어는 유저vs컴퓨터 %d vs %d 입니다.\n", UserScore, ComputerScore);
				printf("다시 입력하세요\n");
				

			}
			else
			{
				printf("컴퓨터가 승리하였습니다.\n");
				ComputerScore++;
				printf("현재 스코어는 유저vs컴퓨터 %d vs %d 입니다.\n", UserScore, ComputerScore);
				printf("다시 입력하세요\n");
				
			}

		}
		if (UserScore >= 3)
		{
			printf("유저가 승리하였습니다.\n");
		}
		else //if (computerscore == 3)
		{
			printf("컴퓨터가 승리하였습니다.\n");
		}
			
		
		
		    // 3. 하이로우
			//		-컴퓨터가 1~100사이의 임의의 숫자를 선택하고
			//		사용자가 맞출 때까지 입력을 받아 " 더 높게","더 낮게" 등의 힌트를 제공하는 게임
			//		-5번 안에 맞춰야 승리
        const unsigned int LifeLimit = 0;
		int Computer1;
		int User1=0;
		int Life=5;
		srand(time(0));
		Computer1 = rand() % 100 + 1;
		
		printf("숫자를 입력해서 정답을 맞추세요!\n\n");
		
		while (User1 != Computer1 && Life>LifeLimit)
		{
			std::cin >> User1;
			if (Computer1>User1)
			{
				printf(" 더 높게\n");
				Life--;
				printf("라이프가 %d개 남았습니다.\n",Life);
			}
			else if (Computer1<User1)
			{
				printf("더 낮게\n");
				Life--;
				printf("라이프가 %d개 남았습니다.\n",Life);
			}
		}
		if (User1 == Computer1)
		{
			printf("승리하셨습니다.\n");
		}
		else if (Life <= 0)
		{
			printf("패배하셨습니다.\n");
		}
			



			//	4. 공포 게임의 인벤토리를 비트플래그로 표현하기
			//		- 아이템 종류를 나타내는 enum을 만들고
			//		- 특정 아이템을 추가하고 삭제하는 예시 보여주기


		//enum Item {

		//	KeyRed =1,		// 1<<0
		//	KeyGreen =4,	// 1<<1
		//	KeyBrue = 5		// 1<<2
		//	};
		//int Inventory = 0;
		// 인벤토리 내용 출력하기(인벤토리의 비트 내용에 따라 출력
 		// 1번 : 아이템 추가 2번 아이템 버리기 3번 종료
		// 이미 있는 아이템을 추가하려고 하면 " 이미 있는 아이템 입니다"
		// 없는 아이템을 버릴려고 하면 없는 아이템입니다. 출력


	

			return 0;
		}








	//  5. 입력받은 숫자만큼의 층을 가진 피라미드 그리기
    //	    3을 입력받았으면 
	//         *
	//        ***
	//		 *****



	//테스트 3번 처음 중간 끝 반복
	

//비트 연산자
// & (And)	두 비트가 모두 1이면 1, 아니면 0
// 특정 비트가 세팅이 되어 있는지 확인하는데 사용(플래그 검사용)
//int a = 10;      // 0b1010
//int b = 9;       // 0b1001
//int c = a & b;   // 0b1000
//// | (Or)   두 비트가 하나라도 1이면 1, 둘다 0이면 0
//// 특정 비트에 플래그를 세팅하고 싶을 때 사용(플래그 설정)
//int a = 10;      // 0b1010
//int b = 9;       // ob1001 
//int c = a | b;   // ob1011
//// ^ (XOR) 두 비트가 서로 다르면 1, 다르면 0
//// 특정 비트를 토글하고 싶을 때 사용
//int a = 10;      // 0b1010
//int b = 9;       // ob1001 
//int c = a | b;   // ob0011
//// ~ (Not) 비트값을 반전 시킨다.
//// 모두 취소 같은거 구현하고 싶을 때 사용
//int a = 10;     //ob1010
//// a = ~a;         //ob0101
//// << (Left Shift)	비트들을 왼쪽으로 이동
// //한 번 움직일 때마다 수가 두배가 된다.
// int a = 7;     //ob0111
// //a = a << 1;	//ob1110
//// >> (Right Shift) 비트들을 오른쪽으로 이동
// //한 번 움직일 때마다 수가 절반이 된다.
// int a = 7;     //ob0111
//// a = a << 1;    //ob0011

 
//  반복문
//  -제어문 중으 하나
//	-특정 코드 블록을 조건에 따라 여러 번 반복해서 실행할 수 있게 해주는 문
//	for			ㅁㄴㅇㄹ       
//	while		ㅁㄴㅇ
//	do-while	ㅂㅈㄷㄱ
