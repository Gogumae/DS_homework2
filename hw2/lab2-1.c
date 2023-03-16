#include <stdio.h>

/*�� �ڷ����� ũ��� �� �ڷ����� ����Ű�� �������� ũ�⸦ ����ϴ� ���α׷��̴�.*/

int main() {

/*char, int, float, double���� ������ �����Ѵ�.*/
char charType;
int integerType;
float floatType;
double doubleType;

printf("----- [������] [2019068057] -----]\n");

/*����� �������� ũ�⸦ ����Ѵ�.*/
printf("Size of char: %ld byte\n",sizeof(charType));
printf("Size of int: %ld bytes\n",sizeof(integerType));
printf("Size of float: %ld bytes\n",sizeof(floatType));
printf("Size of double: %ld bytes\n",sizeof(doubleType));

printf("-----------------------------------------\n");

/*������ ������� �ʰ�, �� �ڷ����� ũ�⸦ ����Ѵ�.*/
printf("Size of char: %ld byte\n",sizeof(char));
printf("Size of int: %ld bytes\n",sizeof(int));
printf("Size of float: %ld bytes\n",sizeof(float));
printf("Size of double: %ld bytes\n",sizeof(double));

printf("-----------------------------------------\n");

/*
�� �ڷ����� ����Ű�� �������� ũ�⸦ ����Ѵ�.
�ּҸ� �����ϱ� ������ �� �ڷ����� ������� 32��Ʈ�� ��� 4����Ʈ, 64��Ʈ�� ��� 8����Ʈ�� ũ�⸦ ���´�.
*/
printf("Size of char*: %ld byte\n",sizeof(char*));
printf("Size of int*: %ld bytes\n",sizeof(int*));
printf("Size of float*: %ld bytes\n",sizeof(float*));
printf("Size of double*: %ld bytes\n",sizeof(double*));

return 0;
}