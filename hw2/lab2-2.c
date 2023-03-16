#include <stdio.h>

/*포인터와 이중포인터를 사용하여 여러가지를 출력해보는 프로그램이다.*/

int main() {
    
    int i;
    int *ptr;
    int **dptr;

    i = 1234;

    printf("[----- [이찬희] [2019068057] -----]\n");

    /*ptr이 i의 주소를 가리키기 전의 i의 값과 주소, ptr의 값과 주소를 출력한다.*/
    printf("[checking values before ptr = &i] \n");
    printf("value of i == %d\n", i);
    printf("address of i == %p\n", &i);
    printf("value of ptr == %p\n", ptr);  //포인터가 그 어떤 주소를 가리키고 있지 않은 상황이므로 0이 출력될 것이다.
    printf("address of ptr == %p\n", &ptr);  //ptr은 주소를 따로 가진다.

    /*ptr이 i의 주소를 가리킨 후*/
    ptr = &i;
    printf("\n[checking values after ptr = &i] \n");
    printf("value of i == %d\n", i);  //i의 값은 변하지 않았다.
    printf("address of i == %p\n", &i);  //i의 주소는 변하지 않았다.
    printf("value of ptr == %p\n", ptr);  //ptr의 값으로 i의 주소가 출력된다.
    printf("address of ptr == %p\n", &ptr);  //ptr의 주소는 변하지 않았다.
    printf("value of *ptr == %d\n", *ptr);  //ptr을 역참조하여 i의 값인 1234가 출력된다.

    /*dptr이 ptr의 주소를 가리킨 후*/
    dptr = &ptr;
    printf("\n[checking values after dptr = &ptr] \n");
    printf("value of i == %d\n", i);
    printf("address of i == %p\n", &i);
    printf("value of ptr == %p\n", ptr);
    printf("address of ptr == %p\n", &ptr);
    printf("value of *ptr == %d\n", *ptr);  //이 위는 ptr이 i의 주소를 가리킨 후의 상황과 같다.
    printf("value of dptr == %p\n", dptr);  //dptr의 값으로 ptr의 주소가 출력된다.
    printf("address of dptr == %p\n", &dptr);  //dptr 역시 주소를 따로 가진다.
    printf("value of *dptr == %p\n", *dptr);  //dptr을 역참조하여 ptr의 값인 i의 주소가 출력된다.
    printf("value of **dptr == %d\n", **dptr); //dptr을 역참조하여 i의 값인 1234가 출력된다.

    /*ptr를 역참조하여 i의 값을 7777로 바꾸었다.*/
    *ptr = 7777;
    printf("\n[after *ptr = 7777] \n");
    printf("value of i == %d\n", i);  //i가 7777로 출력된다.
    printf("value of *ptr == %d\n", *ptr);  //ptr을 역참조하여 i를 출력한다.
    printf("value of **dptr == %d\n", **dptr);  //dptr을 역참조하여 i를 출력한다.

    /*dptr을 역참조하여 i의 값을 8888로 바꾸었다.*/
    **dptr = 8888;
    printf("\n[after **dptr = 8888] \n");
    printf("value of i == %d\n", i);  //i가 8888로 출력된다.
    printf("value of *ptr == %d\n", *ptr);  //ptr을 역참조하여 i를 출력한다.
    printf("value of **dptr == %d\n", **dptr);  //dptr을 역참조하여 i를 출력한다.

    return 0;
}