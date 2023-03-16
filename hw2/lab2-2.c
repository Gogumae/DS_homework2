#include <stdio.h>

/*�����Ϳ� ���������͸� ����Ͽ� ���������� ����غ��� ���α׷��̴�.*/

int main() {
    
    int i;
    int *ptr;
    int **dptr;

    i = 1234;

    printf("[----- [������] [2019068057] -----]\n");

    /*ptr�� i�� �ּҸ� ����Ű�� ���� i�� ���� �ּ�, ptr�� ���� �ּҸ� ����Ѵ�.*/
    printf("[checking values before ptr = &i] \n");
    printf("value of i == %d\n", i);
    printf("address of i == %p\n", &i);
    printf("value of ptr == %p\n", ptr);  //�����Ͱ� �� � �ּҸ� ����Ű�� ���� ���� ��Ȳ�̹Ƿ� 0�� ��µ� ���̴�.
    printf("address of ptr == %p\n", &ptr);  //ptr�� �ּҸ� ���� ������.

    /*ptr�� i�� �ּҸ� ����Ų ��*/
    ptr = &i;
    printf("\n[checking values after ptr = &i] \n");
    printf("value of i == %d\n", i);  //i�� ���� ������ �ʾҴ�.
    printf("address of i == %p\n", &i);  //i�� �ּҴ� ������ �ʾҴ�.
    printf("value of ptr == %p\n", ptr);  //ptr�� ������ i�� �ּҰ� ��µȴ�.
    printf("address of ptr == %p\n", &ptr);  //ptr�� �ּҴ� ������ �ʾҴ�.
    printf("value of *ptr == %d\n", *ptr);  //ptr�� �������Ͽ� i�� ���� 1234�� ��µȴ�.

    /*dptr�� ptr�� �ּҸ� ����Ų ��*/
    dptr = &ptr;
    printf("\n[checking values after dptr = &ptr] \n");
    printf("value of i == %d\n", i);
    printf("address of i == %p\n", &i);
    printf("value of ptr == %p\n", ptr);
    printf("address of ptr == %p\n", &ptr);
    printf("value of *ptr == %d\n", *ptr);  //�� ���� ptr�� i�� �ּҸ� ����Ų ���� ��Ȳ�� ����.
    printf("value of dptr == %p\n", dptr);  //dptr�� ������ ptr�� �ּҰ� ��µȴ�.
    printf("address of dptr == %p\n", &dptr);  //dptr ���� �ּҸ� ���� ������.
    printf("value of *dptr == %p\n", *dptr);  //dptr�� �������Ͽ� ptr�� ���� i�� �ּҰ� ��µȴ�.
    printf("value of **dptr == %d\n", **dptr); //dptr�� �������Ͽ� i�� ���� 1234�� ��µȴ�.

    /*ptr�� �������Ͽ� i�� ���� 7777�� �ٲپ���.*/
    *ptr = 7777;
    printf("\n[after *ptr = 7777] \n");
    printf("value of i == %d\n", i);  //i�� 7777�� ��µȴ�.
    printf("value of *ptr == %d\n", *ptr);  //ptr�� �������Ͽ� i�� ����Ѵ�.
    printf("value of **dptr == %d\n", **dptr);  //dptr�� �������Ͽ� i�� ����Ѵ�.

    /*dptr�� �������Ͽ� i�� ���� 8888�� �ٲپ���.*/
    **dptr = 8888;
    printf("\n[after **dptr = 8888] \n");
    printf("value of i == %d\n", i);  //i�� 8888�� ��µȴ�.
    printf("value of *ptr == %d\n", *ptr);  //ptr�� �������Ͽ� i�� ����Ѵ�.
    printf("value of **dptr == %d\n", **dptr);  //dptr�� �������Ͽ� i�� ����Ѵ�.

    return 0;
}