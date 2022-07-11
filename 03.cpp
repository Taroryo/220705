#include<stdio.h>
#define roop(i,a,b) for(int i=a;i<b;i++)
int main(void)
{
    int x,y;
    const char *poin = "03in.pgm";
    const char *pout = "03out.pgm";
    FILE *input_file = fopen(poin, "r");
    FILE *output_file = fopen(pout, "w");
    if (input_file == NULL)
    {
        printf("Error opening file %s\n", poin);
        return 1;
    }
    if (output_file == NULL)
    {
        printf("Error opening file %s\n", pout);
        return 1;
    }
    int din[10][10],dout[10][10];
    roop(x,0,10)
    {
        roop(y,0,10)
        {
            fscanf(input_file,"%d ",&din[x][y]);
        }
    }
    roop(x,0,10)
    {
        roop(y,0,10)
        {
            dout[10-x-1][10-y-1] = din[x][y];
        }
        fprintf(input_file, "\n");
    }
    roop(x,0,10)
    {
        roop(y,0,10){ fprintf(output_file, "%d ", dout[x][y]);}
        fprintf(output_file, "\n");
    }
    fclose(input_file); fclose(output_file);
    return 0;
}
