#define _CRT_SECURE_NO_WARNINGS

#include <iostream> 
#include <cstdio>  
#include <stdio.h>  
#include "header.h"
int main()
{ 
//1. printf ���� �̿��ؼ� �Ʒ��� ���� ��� ����
  printf("  *\n");
  printf(" ***\n");
  printf("*****\n");

//2. Ư�����ڸ� �̿��ؼ� �̷� ��� ����غ���
  printf("��������\n");
  printf("���  ���\n");
  printf("��	�� ��  ��\n");
  printf("��	��  �� ��\n");
  printf("���  ��  ��\n");
  printf("��������\n");
//3. �� ���� �Է¹޾� �����ϱ�
 




//4. �� ���� �Է¹޾� �簢���� ���� ���ϱ�
  int a, b, c;
  a = 0;
  b = 0;
  c = 0;

printf("������ ���̸� �Է��ϼ���. : %d\n", a);
std::cin >> a;

printf("������ ���̸� �Է��ϼ���. : %d\n", b);
std::cin >> b;
c = a * b;
printf("�簢���� ���̴� : %d\n", c);


//5. �� ���� �Է¹޾� ������ ��¹ޱ�
int x, y, z;
x = 0;
y = 0;
z = 0;
printf("���ڸ� �ϳ� �Է��ϼ���. : %d\n", x);
std::cin >> x;

printf("���ڸ� �ϳ� �Է��ϼ���. : %d\n",y);
std::cin >> y;
z= x - (x / y *y);
printf("�������� : %d\n", z);
//6. �ð� ���� �ʸ� �Է� �޾� �ú��� ����ϱ�
//int S,M,H;
//S = 0;
//M = 0;
//H = 0;
//printf("�ʸ� �Է��ϼ���. : %d\n", S);
//std::cin >> S;
//S = S/60%60
//H = S / 3600;

//printf("�Է��Ͻ� ���� �ú��ʴ� %d �� %d�� %d �� �Դϴ�", H, M, S);


//7. ���� ���� ����ϱ�
//   �ݾ��� �Է¹޾� 500��, 100��, 50��, 10�� ������ ���� �� �� �ʿ����� ����ϴ� ���α׷�.
//   �ݾ��� ū ������ �ִ��� ���� �޾ƾ� �Ѵ�.

//int m, n, q
//int m = 0;
//int n = 0;
//int q = 0;

//printf("�ݾ��� �Է��ϼ��� : %d\n", m);
//std::cin >> m;



//8. �ڸ��� �и��ϱ�(�Է��� �׻� ���ڸ���� ����)
//   ���� �Է¹ް� 100�� �ڸ�, 10�� �ڸ�, 1�� �ڸ��� ���� ����ϱ�
//   �� �ڸ��� ���� ���ؼ� ����ϱ�
int bak,sak,ilk,bom;
int eak;
bak,sak,ilk,bom = 0;
eak = 0;
printf("���ڸ� �Է��ϼ��� : %d\n", eak);
std::cin >> eak;
bak = eak / 100;
sak = bak % 100 / 10;
ilk = eak % 10 / 1;
printf("100�� �ڸ� : %d\n, 10���ڸ� : %d\n, 1�� �ڸ� : %d\n", bak, sak, ilk);
std::cin >> bak,sak,ilk;
bom = bak + sak + ilk;
printf("�� �ڸ� ���� ���� : %d\n", bom);
std::cin >> bom;

return 0;

}