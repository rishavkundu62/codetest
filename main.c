#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A,B;
    int C;
    float res;

    FILE *fptr = fopen("newsample1.txt", "w");
    if (fptr == NULL)
    {
        printf("Could not open file");
        return 0;
    }

    for(A=0.1;A<=20;A=A+0.4) //increase the value of A by 0.4
    {
        for (B=0.1;B<=6;B=B+0.4)//increase the value of B by 0.4
        {
            for(C=10;C<=599;C+=20)//increase the value of C by 20
            {
              res=( ( A + (B*5) - (C/50) ) + 12 );
              fprintf(fptr,"%0.2f \t %0.2f \t %d  \t %0.2f \n",A,B,C,res); //print the value of the equation in sample file
            }
        }
    }

    fclose(fptr);
    return 0;
}
