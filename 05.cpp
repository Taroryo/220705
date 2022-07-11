#include<stdio.h>
int main()
{
    const char *fin_name = "05.txt"; const char *fout_name = "05.txt";
    FILE *fin = fopen(fin_name, "r"); FILE *fout = fopen(fout_name, "w");
    int i=0,shuppatu,tochaku;
    char character[26],c,hajime,owari;
    while((c=fgetc(fin))!=EOF){
        if (i<26) {
            character[i]=c;
        } else if(i == 26){
            hajime=c;
        } else if(i == 26+1){
            owari=c;
        }
        i++;
    }
    for(i=0;i<26;i++){
        if(character[i]==hajime){
            shuppatu = i;
        }else if(character[i]==owari){
            tochaku = i;
        }
    }
    if(shuppatu<tochaku){
        if(tochaku-shuppatu-1<shuppatu+(26-2)-tochaku){
            for(i=shuppatu;i<tochaku+1;i++){
                fprintf(fout,"%c",character[i]);
            }
        } else {
            for(i=shuppatu+1-1;i>=0;i--){
                fprintf(fout,"%c",character[i]);
            }
            for(i=26-1-1;i>=tochaku;i--){
                fprintf(fout,"%c",character[i]);
            }
        }
    } else {
        if(shuppatu-tochaku-1<tochaku+(26-2)-shuppatu){
            for(i=shuppatu+1-1;i>=tochaku;i--){
                fprintf(fout,"%c",character[i]);
            }
        } else {
            for(i=shuppatu;i<26-1;i++){
                fprintf(fout,"%c",character[i]);
            }
            for(i=0;i<tochaku+1;i++){
                fprintf(fout,"%c",character[i]);
            }
        }
    }
    fclose(fin); fclose(fout);
    return 0;
}
