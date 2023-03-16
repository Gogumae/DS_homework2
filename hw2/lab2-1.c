#include <stdio.h>

/*각 자료형의 크기와 각 자료형을 가리키는 포인터의 크기를 출력하는 프로그램이다.*/

int main() {

/*char, int, float, double형의 변수를 선언한다.*/
char charType;
int integerType;
float floatType;
double doubleType;

printf("----- [이찬희] [2019068057] -----]\n");

/*선언된 변수들의 크기를 출력한다.*/
printf("Size of char: %ld byte\n",sizeof(charType));
printf("Size of int: %ld bytes\n",sizeof(integerType));
printf("Size of float: %ld bytes\n",sizeof(floatType));
printf("Size of double: %ld bytes\n",sizeof(doubleType));

printf("-----------------------------------------\n");

/*변수를 사용하지 않고, 각 자료형의 크기를 출력한다.*/
printf("Size of char: %ld byte\n",sizeof(char));
printf("Size of int: %ld bytes\n",sizeof(int));
printf("Size of float: %ld bytes\n",sizeof(float));
printf("Size of double: %ld bytes\n",sizeof(double));

printf("-----------------------------------------\n");

/*
각 자료형을 가리키는 포인터의 크기를 출력한다.
주소를 저장하기 때문에 각 자료형과 관계없이 32비트의 경우 4바이트, 64비트의 경우 8바이트의 크기를 갖는다.
*/
printf("Size of char*: %ld byte\n",sizeof(char*));
printf("Size of int*: %ld bytes\n",sizeof(int*));
printf("Size of float*: %ld bytes\n",sizeof(float*));
printf("Size of double*: %ld bytes\n",sizeof(double*));

return 0;
}