#include <stdio.h>

int main(int argc, const char *argv[]) {

int a = 10;
int b = 20;
int even = 0;

while (a<b) {
if (a % 2 == 0)
even++;
a++;
}
printf ("There are %d even numbers in the sequence \n", even);

int input;

do {
    printf ( "Input a divider for 100, remember you can not divide by zero");
    scanf ("%d", &input);
} while (input == 0);
printf ("100/%d = %d \n", input, 100/input);
printf ("and the reminder will be %d", 100%input);
return 0;
}
