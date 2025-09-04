//#include <iostream> 
//#include <cstdio>  
//#include <stdio.h>  
//#include "header.h"
//int main()
//{
	////1. 숫자를 입력받아 양수 인지 음수인지 0인지 출력하기
	//float a = 0;
	//printf("1번 문제 숫자를 입력하세요.");
	//std::cin >> a;
 //   
	//if (a > 0)
	//{
	//	printf("양수 입니다\n");
	//}
	//else if(a < 0)
	//{
	//	printf("음수 입니다\n");
	//}
	//else /*if (a == 0)*/
	//{
	//	printf("0입니다\n");
	//}


 //   //2. 숫자를 입력받아 홀수인지 짝수인지 출력하기
	//int number1 = 0;
	//printf("2번 문제 숫자를 입력하세요 : ");
	//std::cin >> number1;
	//if (number1 % 2 == 0)
	//{
	//	printf("입력하신 숫자는 짝수 입니다.\n");
	//}
	//else /*if (number1 % 2 == 1)*/
	//{
	//	printf("입력하신 숫자는 홀수 입니다.\n");
	//}

 //   //3. 두수를 입력 받아 더 큰수를 출력하기, 같을 경우 같다고 출력
	//int num1 = 0, num2 = 0;
	//printf("3번 문제 숫자를 두 개 입력하세요 : ");
	//std::cin >> num1 >> num2;
	// 
	//if (num1 > num2)
	//{
	//	printf("가장 더 큰 수는 %d 입니다\n",num1);
	//}
	//else if (num1 < num2)
	//{
	//	printf("가장 더 큰 수는 %d 입니다\n", num2);
	//}
	//else/* if (num1 == num2)*/
	//{
	//	printf("두 수는 같습니다.\n");
	//}


 //   //4. 나이와 키를 입력 받아 6세이상 120cm이상일 때 롤러코스터 탑승 가능, 그 외에는 불가능
	//const unsigned int LimitAge = 5;
	//const float LimitHeight = 120.0f;
	//unsigned int Age = 0;
	//float Height = 0.0f; //암시적 변환 (대충 변환해주는거, 보통 표현 범위가 큰 쪽으로 변경됨)
	//printf("나이와 키를 순서대로 입력하세요 : ");
	//std::cin >> Age >> Height;
	//if (Age >= LimitAge && Height >= LimitHeight)
	//{
	//	printf("탑승 가능합니다.\n");
	//}
	//else if (Age < Height)
	//{
	//	printf("탑승 불가능입니다.\n");
	//}

 //   //5. 점수를 입력 받아 90점 a 80 b 70점 c 60점 d 그 이하는 f라고 출력하기
	//int score = 0;
	//printf("5번 문제 점수를 입력하세요. :");
	//std::cin >> score;

	//if (score >= 90)
	//{
	//	printf("A입니다\n");
	//}
	//else if (score >= 80)
	//{
	//	printf("B입니다\n");
	//}
	//else if (score>=70)
	//{
	//	printf("C입니다\n");
	//}
	//else if(score>=60)
	//{
	//	printf("D입니다\n");
	//}
	//else
	//{
	//	printf("F입니다\n");
	//}
	//
	////>, < , >= , <= , ==

	////6. 세 과목의 점수를 입력받아, 세 과목 평균이 60점 이상이면 "합격", 아니면 "불합격"을 출력
	////	    단 한 과목이라도 40점 미만이면 불합격 출력하기.*/
	//
	//int score1 = 0, score2=0, score3=0;
	//float Average = 0; //평균
	//printf("세 과목의 점수를 입력하세요 : \n");
	//std::cin >> score1 >> score2 >> score3;
	//	Average = (score1 + score2 + score3) / 3.0f;

	//	const int AverageLimit = 60;
	//	const int FailLimit = 40;
	//	float Average = (score1 + score2 + score3) / 3.0f;
    //  if ( (Average>= AverageLimit)&& (score1>=FailLimit && score2>=FailLimit&& score3>=FailLimit))
	//{
	//	printf("합격입니다.\n");
	//}
	//else
	//	{
	//	
	//	}

	//(a !=b) : a와b가 다르다.

////1. 숫자를 입력받아 양수인지 음수인지 0인지 출력하기
//	int InputNumber = 0;
//	printf("숫자를 입력하세요.");
//	std::cin >> InputNumber;
//	if (InputNumber > 0)
//	{
//		printf("양수 입니다.\n");
//	}
//		else if(InputNumber <0)
//		{
//		printf("음수 입니다.\n");
//		}
//		else
//	{
//		printf("0입니다.\n");
//	}
//	
//	
////2. 숫자를 입력받아 홀수인지 짝수인지 출력하기 -- 논리 연산자로 가능한지 확인해보기.
//	int Number1 = 0;
//	printf("숫자를 입력하세요 : ");
//	std::cin >> Number1;
//	if (Number1 % 2 == 0)
//	{
//		printf("짝수 입니다\n");
//	}
//	else
//	{
//		printf("홀수 입니다.\n");
//	}
////3. 두 수를 입력 받아 더 큰 수를 출력하기.같을 경우는 같다고 출력.
//	int Number2 = 0;
//	int Number3 = 0;
//	printf("숫자를 두 번 입력하세요 : ");
//	std::cin >> Number2 >> Number3;
//	if (Number2 > Number3)
//	{
//		printf("숫자 %d가 %d보다 더 큽니다.\n",Number2,Number3);
//	}
//	else
//	{
//		printf("숫자 %d가 %d보다 더 큽니다.\n",Number3,Number2);
//	}
////4. 나이와 키를 입력 받아, 6세 이상, 120cm 이상일 때 롤러코스터 탑승 가능, 그 외에는 불가능으로 출력
//	const unsigned int AgeLimit = 5;
//	const float HeightLimit = 120.0f;
//	unsigned int Age = 0;
//	float Height = 0.0f;
//	printf("나이와 키 순서로 입력해주세요 : ");
//	std::cin >> Age >> Height;
//	if (Age > AgeLimit && Height >= HeightLimit)
//	{
//		printf(" 탑승 가능\n");
//	}
//	else
//	{
//		printf("탑승 불가능\n");
//	}
//5. 점수를 입력 받아 90점 이상은 A, 80점 이상은 B, 70점 이상은 C, 60점 이상은 D, 그 이하는 F라고 출력하기
    
//6. 세 과목의 점수를 입력받아, 세 과목 모두 60점 이상이면 "합격", 아니면 "불합격"을 출력하는 프로그램을 작성하세요. 한과목이라도 40점 미만이면 불합격 출력하기
	




	/*return 0;
}*/