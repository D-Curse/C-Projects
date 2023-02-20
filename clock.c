//CLOCK 
//DEV : D CURSE 

#include <stdio.h>
#include <conio.h>
#include <stdlib.h> 
#include <unistd.h>

void main(){
    int h, m, s;
    printf("\tTHE CLOCK\n");
    printf("\t\tBY - D CURSE\n");

    printf("ENTER THE CURRENT TIME\n");
    printf("HOUR : ");
    scanf("%d",&h);
    printf("MIN : ");
    scanf("%d",&m);
    printf("SEC : ");
    scanf("%d",&s);

    printf("PRESS ANY KEY TO CONTINUE\n");
    while(!kbhit()){}

    while(kbhit()!=13){
        system("cls");
        printf("\t%d : %d : %d",h,m,s);
        if(s == 59){
            s = 0;
            m++;
        }

        if(m == 60){
            m = 0;
            h++;
        }
        if (h == 13){
            h = 1;
        }
        s++;
        sleep(1);
    }
}