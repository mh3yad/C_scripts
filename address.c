#include <stdio.h>
#include <string.h>
int main(void){
        int i=0;
        int n=50;
        int *p=&n;
        char *c="AYAD";
        //printf("%i\nand \n%p\n",n,p);
        //printf("%p\n",&p);
        //printf("%p\n%p\n",c,&c[2]);
        //printf("\n\n%c\n",*c);
        //printf("\n%c\n",*(c+3));
        //printf("%i",strlen(c));
        for(i=0;i<strlen(c);i++){
                printf("\n%c\n",*(c+i));

        }
}

