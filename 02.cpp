#include<stdio.h>
#include<string.h>
int main(void)
{
    FILE *filepointer1 = fopen("02.txt","r"); FILE *filepointer2 = fopen("02.txt","w");
    int i, j;
    char str[10][11], tmp[11];

    for (i=0;i<10;i++) { fscanf(filepointer1,"%s", str[i]); }
    for(i=1;i<10;i++){
        for(j=1;j<10;j++){
            if(strcmp(str[j-1], str[j])>0){
                strcpy(tmp, str[j-1]);
                strcpy(str[j-1], s[j]);
                strcpy(str[j], tmp);
            }
        }
    }
    for (i=0;i<10;i++)
    fprintf(filepointer2,"%s\n", str[i]);
    fclose(filepointer1); fclose(filepointer2);
    return 0;
}
