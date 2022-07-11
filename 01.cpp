/* 略 */
{
    int NUMBER,OUTPUT;
    int i,j=1,k=0,l=0;
    char c,in[8];
    while((c = fgetc(input_file))!=EOF)
    {
        in[k] = c;
        if(k>=7){
            k=0; i=0; OUTPUT=0;
            j=256;
            while(i<8)
            {
                j=j/2;
                char NUMBER2[2];
                NUMBER2[0] = in[i]; NUMBER2[1] = 0;
                NUMBER = atoi(NUMBER2);
                OUTPUT = OUTPUT + NUMBER*j;
                i++;
            }
            message[l] = OUTPUT;
            l++;
        }else{
            k++;
        }
    }
    message[l] = 0;
}
