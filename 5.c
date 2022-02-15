#include <stdio.h>

int main(int argc, const char *argv[]) {

const int RANGE_MIN = 0;
const int RANGE_MAX = 100;
int input;
printf ("Input a number: ");
scanf ("%d", &input);
printf ("Your number '%d' %sfit the range of (%d  to %d)\n",
        input,
        (input >= RANGE_MIN && input <= RANGE_MAX) ? "" : "does not ",
        RANGE_MIN, RANGE_MAX);

const int NUMS_TO_ASK = 10;
int i = 0;
float total = 0;
do {
    printf ("Input a number: ");
scanf ("%d", &input);
total += input;
} while (++i < NUMS_TO_ASK);

printf ("The of entered nums is %.2f\n", total / i);
int lines;
printf ("Input a number of lines: ");
scanf ("%d", &lines);
int j;
for (i = 0; i < lines; i++) {
   for (j = 0; j < lines - i; j++)
        printf (" ");
   for (j = lines - i * 2; j <= lines; j++)
        printf ("^");
        printf ("\n");
   }



return 0;
}
