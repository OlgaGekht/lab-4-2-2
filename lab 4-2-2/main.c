//
//  main.c
//В одномерном массиве, состоящем из n вещественных элементов, вычислить:
//- номер максимального по модулю элемента массива;
//- сумму элементов массива, расположенных после первого положительного элемента.

//

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    
    
    
    
    
    
    int N=1000, array[N], max=array[0], sum=0, a=0, number_max=0;
    
    printf("ENTER N (the number of the arrays' elements)\n");
    scanf ("%d", &N);
    
    if (N>1000 || N<0)
    {
        printf("Enter another n (<1000)  \n");
        scanf ("%d", &N);
    }
    
    printf("The number of the array's elements %d\n", N);
    
    for (int i = 0; i<N; i++)                                  // input and output  of elements
    {
        printf("enter the element of the array ");
        scanf("%d", &array[i]);
    }
    
    for (int i=1; i<N; i++)                //dont work
    {
        if ( abs(array[i])>abs(max) )
            max=array[i];
        number_max=i;
    }
    
    printf("max(abs) is  %d%d\n", max, number_max);
    
    
    for (int i=0; i<N; i++)                //to find the 1st positive number
    {
        if (array[i]>0)
        {a=i; break;}
        
    }
    
    for (int i=a; i<N; i++)                //sum
    {
        sum+=array[i];
    }
    
    printf("sum is  %d\n", sum);
    
    return 0;
}

