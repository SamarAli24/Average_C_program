#include <stdio.h>
int main()
{
    int arrayX[10], arrayY[10],a,v,minimum,position=0,sum=0;

    for (a=0;a<10;a++)
    {
        printf("Input a digit: ");
        scanf("%d", &arrayX[a]);
    }

    for (v=9;v=0;v--)
    {
        arrayY[v] = arrayX[v];
        printf("%d\n", arrayY[v]);
        sum+= arrayY[v];
    }

    minimum = arrayY[0];
    for(a=0;a<10;a++)
    {
        if(arrayY[a]<minimum)
        {
            minimum = arrayY[a];
            position = a;
        }
    }
    printf("\nMinimum: %d at position at %d\n", minimum,a);

    float avg = sum/10.0;

    printf("\nAverage is %d 1f\n", avg);


}