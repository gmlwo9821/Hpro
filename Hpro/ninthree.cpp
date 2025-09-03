#include <iostream> 
#include <cstdio>  
#include <stdio.h>  
#include "header.h"
int main()
{
	//1. 숫자를 입력받아 양수 인지 음수인지 0인지 출력하기
	float a = 0;
	printf("1번 문제 숫자를 입력하세요.");
	std::cin >> a;
    
	if (a > 0)
	{
		printf("양수 입니다\n");
	}
	else if(a < 0)
	{
		printf("음수 입니다\n");
	}
	else if (a == 0)
	{
		printf("0입니다\n");
	}


    //2. 숫자를 입력받아 홀수인지 짝수인지 출력하기
	int number1 = 0;
	printf("2번 문제 숫자를 입력하세요 : ");
	std::cin >> number1;
	if (number1 / 2 == 0)
	{
		printf("입력하신 숫자는 짝수 입니다.\n");
	}
	else if (number1 % 2 == 1)
	{
		printf("입력하신 숫자는 홀수 입니다.\n");
	}

    //3. 두수를 입력 받아 더 큰수를 출력하기, 같을 경우 같다고 출력
	int num1 = 0, num2 = 0;
	printf("3번 문제 숫자를 두 개 입력하세요 : ");
	std::cin >> num1 >> num2;
	 
	if (num1 > num2)
	{
		printf("가장 더 큰 수는 %d 입니다\n",num1);
	}
	else if (num1 < num2)
	{
		printf("가장 더 큰 수는 %d 입니다\n", num2);
	}
	else if (num1 == num2)
	{
		printf("두 수는 같습니다.\n");
	}


    //4. 나이와 키를 입력 받아 6세이상 120cm이상일 때 롤러코스터 탑승 가능, 그 외에는 불가능
	int age = 0;
	int hei = 0;
	printf("나이와 키를 순서대로 입력하세요 : ");
	std::cin >> age >> hei;
	if (age >= 6 && hei >= 120)
	{
		printf("탑승 가능합니다.\n");
	}
	else if (age < hei)
	{
		printf("탑승 불가능입니다.\n");
	}

    //5. 점수를 입력 받아 90점 a 80 b 70점 c 60점 d 그 이하는 f라고 출력하기
	int sco = 0;
	printf("5번 문제 점수를 입력하세요. :");
	std::cin >> sco;

	if (sco >= 90)
	{
		printf("A입니다\n");
	}
	else if (sco >= 80)
	{
		printf("B입니다\n");
	}
	else if (sco>=70)
	{
		printf("C입니다\n");
	}
	else if(sco>=60)
	{
		printf("D입니다\n");
	}
	else
	{
		printf("F입니다\n");
	}
	
	//>, < , >= , <= , ==

	//6. 세 과목의 점수를 입력받아, 세 과목 평균이 60점 이상이면 "합격", 아니면 "불합격"을 출력
	//	    단 한 과목이라도 40점 미만이면 불합격 출력하기.*/
	int score1 = 0,score2=0,score3=0;
	int avr = 0; //평균
	printf("세 과목의 점수를 입력하세요 : \n");
	std::cin >> score1 >> score2 >> score3;
		avr = (score1 + score2 + score3) / 3;
	if (avr >= 60)
	{
		printf("합격입니다.\n");
	}
	else if (avr < 60)
	{
		printf("불합격입니다.\n");
	}
	else if (score1<40 && score2<40 && score3 < 40)
		{
			printf("불합격입니다.\n");
		}







	return 0;
}