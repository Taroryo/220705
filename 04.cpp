#include <stdio.h>
#define roop(i,a,b) for(i=a;i<b;i++)
int main(void)
{
    FILE *poin = fopen("04in.csv","r"); FILE *pout = fopen("04out.csv","w");
    int i,totals=0,eachtotal[5],point,totaltotal=0;
    char c;
    roop(i,0,5){ eachtotal[i]=0; }
    i=0;
    while(fscanf(poin, "%d,", &point) != EOF){
        i++;
        totals += point;
        eachtotal[i-1] += point;
        if(i!=5){
            fprintf(pout,"%d,",point);
        } else {
            fprintf(pout,"%d,%d\n",point,totals/5);
            totals = 0; i = 0;
        }
    }
    roop(i,0,5){
        fprintf(pout,"%d,",eachtotal[i]/5);
        totaltotal += eachtotal[i];
    }
    fprintf(pout,"%d\n",totaltotal);
    fclose(poin); fclose(pout);
    return 0;
}
