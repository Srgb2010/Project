#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ARRAY_LENGTH 10
#define NUMBERS_AMOUNT 1000000

void printArray(int* array, int length) {
int i;
for (i = 0; i < length; i++)
    printf("%d ", array[i]);
}

float average(int* array, int length) {
float result = 0;
int i;
for (i = 0; i < length; i++) {
   result += *(array + i);
}
return result/length;
}

int main(int argc, const char* argv[]) {


int arr [ARRAY_LENGTH];
int i = 0;
float result = 0;

while (i < ARRAY_LENGTH) {
    printf("Enter the value No. %d ", i);
    scanf("%d", arr + i);
    i++;
}
printf ("Our array is: ");

printArray (arr, ARRAY_LENGTH);


printf ("\n And the mean is: ");

printf("%f ", average(arr, ARRAY_LENGTH));
return 0;

}
