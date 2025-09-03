#define _CRT_SECURE_NO_WARNINGS

//#include <iostream> 
//#include <cstdio>  
//#include <stdio.h>  
//#include "header.h"
//int main()
//{
	//1. printf 문을 이용해서 아래와 같은 모양 찍어보기
	//printf("  *\n");
	//printf(" ***\n");
	//printf("*****\n");

	////2. 특수문자를 이용해서 미로 모양 출력해보기
	//printf("□□□□□□□ \n");
	//printf("□□  □ □ \n");
	//printf("□	□ □ □\n");
	//printf("□	□ □ □\n");
	//printf("□□  □  □\n");
	//printf("□□□□□□□ \n");
	//////3. 두 수를 입력받아 스왑하기
	// 
	//
	//
	//
	//
	////4. 두 수를 입력받아 사각형의 넓이 구하기
	//  int a, b, c;
	//  a = 0;
	//  b = 0;
	//  c = 0;
	//
	//printf("가로의 길이를 입력하세요. : %d\n", a);
	//std::cin >> a;
	//
	//printf("세로의 길이를 입력하세요. : %d\n", b);
	//std::cin >> b;
	//c = a * b;
	//printf("사각형의 넓이는 : %d\n", c);
	//
	//
	////5. 두 수를 입력받아 나머지 출력받기
	//int x, y, z;
	//x = 0;
	//y = 0;
	//z = 0;
	//printf("숫자를 하나 입력하세요. : %d\n", x);
	//std::cin >> x;
	//
	//printf("숫자를 하나 입력하세요. : %d\n",y);
	//std::cin >> y;
	//z= x - (x / y *y);
	//printf("나머지는 : %d\n", z);

	//6. 시간 계산기 초를 입력 받아 시분초 출력하기
	//int S,M,H;
	//S = 0;
	//M = 0;
	//H = 0;
	//printf("초를 입력하세요. : %d\n", S);
	//std::cin >> S;
	//S = S/60%60
	//H = S / 3600;

	//printf("입력하신 초는 %d 시 %d분 %d 초 입니다", H, M, S);


	////7. 동전 개수 계산하기
	////   금액을 입력받아 500원, 100원, 50원, 10원 동전이 각각 몇 개 필요한지 계산하는 프로그램.
	////   금액이 큰 동전을 최대한 많이 받아야 한다.
	//	//1760원을 기준으로 연습해보자 500원 3개 100원2개 50원1개 10원1개
	//int r = 0, k = 0, f = 0, p = 0, i = 0;
	//printf("금액을 입력하세요 : %d\n", r);
	//std::cin >> r;
	//k = r / 500;
	//f = r % 500 / 100;
	//p = r % 100 / 50;
	//i = r % 50 / 10;
	//printf("입력하신 금액은 500원 : %d 개, 100원 : %d 개, 50원 : %d개, 10원 : %d개 입니다\n", k, f, p, i);



	////8. 자리수 분리하기(입력은 항상 세자리라고 가정) 수를 입력받고 100의 자리, 10의 자리, 1의 자리를 각각 출력하고 각 자리의 수를 합해서 출력하기
	//int bak = 0, sak = 0, ilk = 0;
	//int eak = 0; //입력하는 숫자
	//int bom = 0; //자리수 합
	//printf("3자리 숫자를 입력하세요 : ", eak);  // 이거 왜 초록색 밑줄임? printf에 서삭 문자열에 전달된 인수가 너무 많습니다.
	//std::cin >> eak;
	//bak = eak / 100;
	//sak = eak % 100 / 10;
	//ilk = eak % 10 / 1;
	//printf("100의 자리 : %d, 10의자리 : %d, 1의 자리 : %d\n", bak, sak, ilk);
	////std::cin >> bak>>sak>>ilk>>bom;
	//bom = bak + sak + ilk;
	//printf("각 자리 수의 합은 : %d\n", bom);


	//9월 3일 오전 강의 수업 내용
	//float number1 = 10.0f; //10이라는 float 타입의 값을 float인 number1에 넣기
	//float number2 = 15.0f; //15라는 double 타입의 값을 float인 number2에 넣기

	//std::cin >> number1 >> number2;
	//printf("number1 : %f\n number2 : %f", number1, number2);    //2자리 까지만 하고 싶으면 %.2f

	//원의 실습 : 원의 반지름을 입력 받고 넚이 구하기.

	//float a = 0.0f; // 0.0 이라는 float 값을 float인 a에 넣기 /원의 반지름
	//float b = 0.0f; // 원의 넓이
	//const float pi = 3.14159f; //pi값을 선언하고 정의
	//
 //   printf("원의 반지름을 입력하세요 : ");
 //   std::cin >> a;

	//b = a * a * pi;
 //   printf("원의 넓이는 : %f\n 입니다.\n", b);



	//int square = 0;
	//printf("정사각형의 한변의 길이를 입력하세요 : ");
	//std::cin >> square;
	//printf("정사각형의 넓이는 [%d}입니다.", square* square);

	//오버플로우 발생할 수 있음.



 //   float a = 10.0f;
	//float b = 10.0f;

	//bool result = a == b; //F9 브레이크 포인트 설정/해제
	//std::cin >> b;
	//b = b * 123.0f;


	//if : 소괄호 안에 true면 중괄호 안의 코드를 실행하라.
	// 내가 특정 조건을 만족할 때만 어떤 코드를 실행하고 싶을 때 사용.
	//int a = 10;
	//int b = 0;
	//printf("a는 10\nb를 입력하세요 : ");
	//std::cin >> b;

	//if (a>b)
	//{
	//	printf("if가 성공했다\n");
	//	printf("b가 %d라서 a가 더 크다.", b);
	//}
	//if (a <= b)
	//{
	//	printf("b가 %d라서 a가 작거나 같다.\n", b);
	//}

	////if else 이거 아니면 저거 일때
	//if (a > b)
	//{
	//	printf("a가 b보다 크다");
	//}
	//else
	//{
	//	printf("a가 b보다 작거나 같다");
	//}

	//if (b<60)
	//{
	//	//f
	//}
	//else if(b<70)
	//{
	//	//d
	//}
	//else if (b < 80)
	//{
	//	//c
	//}
	//else if (b < 90)
	//{
	//	//b
	//}
	//else
	//{
	//	//a
	//}

	//int a = 0;
	//std::cin >> a;
	//switch (a)
	//{case1:
	//printf("1이다.\n");
	//		break;
	//case3:
	//printf("3이다.\n");
	//		break;
	//case5:
	//printf("5이다.\n");
	//		break;
	//default:
	//	printf("1,3,5가 아니다.\n");
	//	break;
	//
	//	int a = 10;
	//	int b = 20;
	//	int c = 0;
	//	
	//	if (a>b)
	//	{
	//		c = a * 2 + b;
	//		
	//	}
	//	else
	//	{
	//		c = a + b * 2;
	//	}

	//	c = (a + b) ? (a * 2 + b) : (a + b * 2); //삼항연산자
	//

	////}
	//int a = 10;
	//if (a > 5 && a < 15)  // 실패할 확률이 큰 것을 앞 쪽을 둠 (최적화가 일어남)
	//{	
	//	//성공
	//}
	//else
	//{
	//	//실패
	//}
	//
	//return 0;

	//float 타입을 ==로 비교할 때 반드시 아래와 같이 진행해야함.
	/*
	float epsilon = 0.001f;
	a < (b + epsilon);
	a > (b - epsilon);
		
		*/


/*
이진수 (Binary)
-컴퓨터는 0과 1만 알 수 있기 때문에 기본적으로 이진수를 사용

int number = 10; //사람이 알아보기 위해 10진수로 값을 대입
                 // 실제 메모리에는 0000 0000 0000 0000 00000 0000 0000 1010

   ex) 13 = 2^3*1 + 2^2*1 +2^1*0 + 2^0*1 = 1101

   데이터 타입
   int : 정수형 일반적으로 32bit 범위는 (대략 -21억 ~ + 21억)
   float : 실수형. 32bit. 태생적으로 오타가 있는 타입. 대략 총 7자리부터 오차 발생
   double : 실수형, 64bit
   bool : 블리언, true/false만 저장  8bit
   char : 캐릭터, 글자하나를 저장하는 데이터 타입, 정수형. 8bit = 0에서 256까지 가능
      char alpha = 'a'; //무조건 글자 하나만 저장
   std::string : 스트링, 문자열을 쉽게 다룰 수 있는 자료형
       문자열 : 글자 여러 개가 연결된 것.
	   std::string str = "Hello World!";        string 사실상 무제한.
	   char* str;
	   char str[32];
	   
	   상수(Constant) 
	   -변하지 않는 수
	   -코드의 안정성과 가독성을 높여준다.(매직넘버 회피에 좋다)
	   -(매크로와는 달리 타입체크가 가능하다.)

*/
		/*
		1. 비교연산자
		- 비교를 하는 연산자.
		>, <, >= , <=, ==
		a>b  
		- 참이냐 거짓이냐가 결과로 나온다.

		a=10;
		b=20;
		a>b 결과는 거짓
		bool result = a>b; //결과는 거짓이니깐 result = false;


		int a= 50;
		int b = 50;
		bool result = ( a==b); //결과는 참이니깐 result = true;



		2. 제어문
		-프로그램의 흐름을 제어하는 문(Statement)
		-조건문 : 조건에 따라 프로그램의 흐름을 변경하는 문
		 - if, else if, else
		 - switch 
		 - 삼항연산자

		-반복문 : 일정 조건에 따라 코드를 반복하는 문
		//
		//
		3. 논리 연산자 
		--bool 값을 양변에 받아 bool로 된 결과를 낸다.
		&& = and      &&의 양쪽이 둘다 true면 true 그 외는 false   ex) false false는 false
		|| = or       ||의 양쪽에 하나라도 true가 있으면 true 아니면 false
		 ! = not	  ! 뒤에 bool이 true면 false, false면 true
		*/

          //변수는 사용하기 직전에 선언하기
//}