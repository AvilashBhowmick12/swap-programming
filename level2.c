#include<stdio.h>
/* function defination to swap the vaules */
void swap(int *x, int *y)
{
    int temp; 
    temp= *x;                       /* save the value at address x */
    *x = *y;                        /* put y into x */
    return ;
}
int main()
{
    int a=34, b=74;                 /* two vairables */
    printf("%d and %d\n", a , b);
    swap(&a, &b);                   /* swapping values of a and b in previous positions (call by reference)*/
    printf("%d and %d\n", a , b);   /* final printing the value of *x */
    return 0;
}
