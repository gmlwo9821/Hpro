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
  printf("□□□□□□□\n");
  printf("□□  □□\n");
  printf("□	□ □  □\n");
  printf("□	□  □ □\n");
  printf("□□  □  □\n");
  printf("□□□□□□□\n");
//3. 두 수를 입력받아 스왑하기
 




//4. 두 수를 입력받아 사각형의 넓이 구하기
  int a, b, c;
  a = 0;
  b = 0;
  c = 0;

printf("가로의 길이를 입력하세요. : %d\n", a);
std::cin >> a;

printf("세로의 길이를 입력하세요. : %d\n", b);
std::cin >> b;
c = a * b;
printf("사각형의 넓이는 : %d\n", c);


//5. 두 수를 입력받아 나머지 출력받기
int x, y, z;
x = 0;
y = 0;
z = 0;
printf("숫자를 하나 입력하세요. : %d\n", x);
std::cin >> x;

printf("숫자를 하나 입력하세요. : %d\n",y);
std::cin >> y;
z= x - (x / y *y);
printf("나머지는 : %d\n", z);
//6. 시간 계산기 초를 입력 받아 시분초 출력하기
//int S,M,H;
//S = 0;
//M = 0;
//H = 0;
//printf("초를 입력하세요. : %d\n", S);
//std::cin >> S;
//S = S/60%60
//H = S / 3600;

//printf("입력하신 초의 시분초는 %d 시 %d분 %d 초 입니다", H, M, S);


//7. 동전 개수 계산하기
//   금액을 입력받아 500원, 100원, 50원, 10원 동전이 각각 몇 개 필요한지 계산하는 프로그램.
//   금액이 큰 동전을 최대한 많이 받아야 한다.

//int m, n, q
//int m = 0;
//int n = 0;
//int q = 0;

//printf("금액을 입력하세요 : %d\n", m);
//std::cin >> m;



//8. 자리수 분리하기(입력은 항상 세자리라고 가정)
//   수를 입력받고 100의 자리, 10의 자리, 1의 자리를 각각 출력하기
//   각 자리의 수를 합해서 출력하기
int bak,sak,ilk,bom;
int eak;
bak,sak,ilk,bom = 0;
eak = 0;
printf("숫자를 입력하세요 : %d\n", eak);
std::cin >> eak;
bak = eak / 100;
sak = bak % 100 / 10;
ilk = eak % 10 / 1;
printf("100의 자리 : %d\n, 10의자리 : %d\n, 1의 자리 : %d\n", bak, sak, ilk);
std::cin >> bak,sak,ilk;
bom = bak + sak + ilk;
printf("각 자리 수의 합은 : %d\n", bom);
std::cin >> bom;

return 0;

}