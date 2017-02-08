#include <stdio.h>
#include "complex.h"

int main()
{
    struct complex n1,n2,temp;
    int a,b,c;
    c=SampleAddInt( a,b);

    printf("For 1st complex number \n");
    printf("Enter real and imaginary part respectively:\n");
    scanf("%f %f", &n1.real, &n1.imag);

    printf("\nFor 2nd complex number \n");
    printf("Enter real and imaginary part respectively:\n");
    scanf("%f %f", &n2.real, &n2.imag);
    temp = add(n1, n2);
    printf("Sum = %.1f + %.1fi", temp.real, temp.imag);

    return 0;

}

