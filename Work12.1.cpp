#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
    int decNum, binDigit, i = 0;
    int arrayBinNum[128];

    printf("Enter Decimal Number : ");
    scanf("%d", &decNum); 

    while (decNum != 0)
    {
        binDigit = decNum % 2;
        arrayBinNum[i] = binDigit;
        decNum /= 2;
        i++;
    }

    printf("Binary : "); 
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", arrayBinNum[j]);
    }
}