#include <stdio.h>
#include <stdlib.h>
#include "lib.c"
int main()
{
    char group[50]={0}, name[50]={0};
    double x1, x2, delta;
    int N;
    FILE* input_W = fopen ("Input.txt", "r");
    if (input_W==NULL)
    {
        printf("The file couldn`t be open");
    }
    else
    {
        fscanf(input_W, "%lf %lf %d %lf %s %s", &x1, &x2, &N, &delta, group, name);
        fclose(input_W);
        if(N==0)
        {
            N = ((x2 - x1) / delta) + 1;
        }
        else if( delta!=((x2 - x1) / (N - 1)))
        {
            delta = (x2 - x1) / (N - 1);
        }
        int check=0;
        check=W_files(x1,N,delta,group,name);
        if(check==1)
        {
            binary_print(group,name);
        }
    }
    return(0);
}
