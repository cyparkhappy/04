#include <stdio.h>

int main(void){
    int op1, op2, res;

    printf("input two integers:");
    scanf("%i %i", &op1, &op2);

    res=op1 + op2;
    printf("%i + %i = %i\n", op1, op2, res);

    res=op1 - op2;
    printf("%i - %i = %i\n", op1, op2, res);

    res=op1*op2;
    printf("%i * %i = %i\n", op1, op2, res);

    res=op1/op2;
    printf("%i / %i = %i\n", op1, op2, res);

    res=op1 % op2;
    printf("%i %% %i = %i\n", op1, op2, res);

    return 0;
}