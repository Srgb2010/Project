#include <stdio.h>

int main(void) {
/* int age;
printf("How old are you? ");
scanf("%d", &age);
printf("\nYou are %d years.", age);*/

char a = 11;
char b = 15;
printf("a = %d, b = %d\n", a, b);
a = a ^ b;
b = b ^ a;
a = a ^ b;
printf("a = %d, b = %d\n", a, b);
a = a << 3;
b =b >> 2;
printf("a = %d, b = %d\n", a, b);
return 0;
}
