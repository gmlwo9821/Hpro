#define _CRT_SECURE_NO_WARNINGS

#include <iostream> 
#include <cstdio>  
#include <stdio.h>  
#include "header.h"
int main()
{ 
//1. printf 문을 이용해서 아래와 같은 모양 찍어보기
  printf("  *\n");
  printf(" ***\n");
  printf("*****\n");

//2. 특수문자를 이용해서 미로 모양 출력해보기
 printf("□□□□□□□ \n");
 printf("□□  □ □ \n");
 printf("□	□ □ □\n");
 printf("□	□ □ □\n");
 printf("□□  □  □\n");
 printf("□□□□□□□ \n");
////3. 두 수를 입력받아 스왑하기
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


//7. 동전 개수 계산하기
//   금액을 입력받아 500원, 100원, 50원, 10원 동전이 각각 몇 개 필요한지 계산하는 프로그램.
//   금액이 큰 동전을 최대한 많이 받아야 한다.
	//1760원을 기준으로 연습해보자 500원 3개 100원2개 50원1개 10원1개
	int r = 0, k = 0, f = 0, p = 0,i=0;
	printf("금액을 입력하세요 : %d\n", r);
	std::cin >> r;
	k = r / 500;
	f = r % 500 / 100;
	p = r % 100 / 50;
	i = r % 50 / 10;
	printf("입력하신 금액은 500원 : %d 개, 100원 : %d 개, 50원 : %d개, 10원 : %d개 입니다\n", k, f, p, i);
	


//8. 자리수 분리하기(입력은 항상 세자리라고 가정) 수를 입력받고 100의 자리, 10의 자리, 1의 자리를 각각 출력하고 각 자리의 수를 합해서 출력하기
int bak=0,sak=0,ilk=0;
int eak = 0; //입력하는 숫자
int bom = 0; //자리수 합
printf("3자리 숫자를 입력하세요 : ", eak);  // 이거 왜 초록색 밑줄임? printf에 서삭 문자열에 전달된 인수가 너무 많습니다.
std::cin >> eak;
bak = eak / 100;
sak = eak % 100 / 10;
ilk = eak % 10 / 1;
printf("100의 자리 : %d, 10의자리 : %d, 1의 자리 : %d\n", bak, sak, ilk);
//std::cin >> bak>>sak>>ilk>>bom;
bom = bak + sak + ilk;
printf("각 자리 수의 합은 : %d\n", bom);
return 0;

}