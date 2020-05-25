#include <stdio.h>

int main(void)
{

    int num;
    int n;
    int highest =0 ;
    int countHigh = 0;


    scanf("%d",&num);

    int num2[num];

    for(n =0; n<=num-1;n++)
    {
        scanf("%d",&num2[n]);
    }
     for(n =0; n<=num-1;n++)
    {
        if(num2[n]>highest)
        {
            highest = num2[n];
            countHigh=1;
        }
        else if(highest == num2[n])
        {
            countHigh++;
        }
    }


printf("%d",countHigh);



    return 0;
}
