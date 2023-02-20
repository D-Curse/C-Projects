//TIC TAC TOE 
//DEV : D CURSE

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <unistd.h>

void board();
void logic();
void intro();
void spc(int s);
void lines(int l);
void note();
void data();
void data1();
void data2();
void data3();
void history();
void menu();
void start();

int val = 1;
char ch;
char sq1 = '1',sq2 = '2',sq3 = '3';
char sq4 = '4',sq5 = '5',sq6 = '6';
char sq7 = '7',sq8 = '8',sq9 = '9';
char sq;

FILE *fp;

struct database{
    char p1[20];
    char p2[20];
}s;


void main(){
    intro();
}

void intro(){
    lines(80);
    spc(2);
    printf("\t\tWELCOME TO D CURSE's TIC TAC TOE");
    spc(2);
    lines(80);
    spc(3);

    printf("\tPRESS ANY KEY TO CONTINUE...");
    while(!kbhit()){}
    note();
}


void note(){
    system("cls");
    lines(80);
    spc(2);
    printf("\t\tNOTE");
    spc(2);
    lines(80);
    spc(3);
    printf("\tIN THIS GAME PLAEYRS WILL PLAY TURN BY TURN\n");
    printf("\tYOU HAVE TO MARK THE SQUARE\n");
    printf("\tIF ANY ROW OR COLUMN IS ALL MARKED BY YOUR MARK THEN YOU WIN\n");
    printf("\tEVEN IF THE DIAGONALS ACROSS THE BOARD IS OCCUPIED BY YOUR MARK THEN TOO YOU WIN\n");
    spc(2);
    printf("\tPLAYER I GETS THE MARK 'X'\n\tPLAYER 2 GETS THE MARK 'O'\n");
    printf("\tHOPE YOU ENJOY THE GAME\n");
    spc(2);
    printf("\tGOOD LUCK");
    spc(2);
    
    ch = getch();
   while(!kbhit()){}
   menu();
}

void menu(){
    system("cls");
    printf("\t--> 1. START\n");
    printf("\t--> 2. RULES\n");
    printf("\t--> 3. HISTORY\n");
    printf("\t--> 4. EXIT\n");

    printf("\tENTER YOU CHOICE\n");
    printf("\t--> ");
    scanf("%d",&ch);
    switch(ch){
        case 1 : start();
            break;

        case 2 : note();
            break;

        case 3 : history();
            break;

        case 4 : exit(1);
            break;
    }
}

void spc(int s){
    for(int free = 0; free < s; free++){
        printf("\n");
    }
}

void lines(int l){
    printf("\t");
    for(int free = 0; free < l; free++ ){
        printf("_");
    }
}

void board(){
    lines(60);
    spc(2);
    printf("\t\tTIC TAC TOE");
    spc(1);
    printf("\t\t\tDEV : DCURSE");
    spc(2);
    lines(60);
    spc(3);


    printf("\t _____ _____ _____\n");
    printf("\t|  %c  |  %c  |  %c  |\n",sq1,sq2,sq3);
    printf("\t|_____|_____|_____|\n");
    printf("\t|  %c  |  %c  |  %c  |\n",sq4,sq5,sq6);
    printf("\t|_____|_____|_____|\n");
    printf("\t|  %c  |  %c  |  %c  |\n",sq7,sq8,sq9);
    printf("\t|_____|_____|_____|\n");

    spc(2);
    printf("\tPRESS ANY KEY TO CONTINUE");
    while(!kbhit()){}
}

void logic(){
    loop: spc(2);
        goto win;
        spc(2);
        loop1 : if (val == 1){
                goto player1;
            }
            else if (val == 2){
                goto player2;
            }
            else {
                printf("ERROR IN THE GAME");
            }

    player1 : system("cls");
        board();
        spc(4);
        printf("TURN : PLAYER 1");
        spc(2);
        printf("\tWHERE DO YOU WANT TO MARK ?");
        printf("\n--> SQUARE NO : ");
        scanf("%d",&sq);

        switch(sq){
            case 1 : if(sq1 == '1'){
                sq1 = 'X';
                goto updatep1;
                }
                else{
                    if(sq1 == 'X'){
                        goto ifp1;
                    }
                    else{
                        goto elsep1;
                    }
                }
                break;
            case 2 : if(sq2 == '2'){
                sq2 = 'X';
                goto updatep1;
                }
                else{
                    if(sq2 == 'X'){
                        goto ifp1;
                    }
                    else{
                        goto elsep1;
                    }
                }
                break;
            case 3 : if(sq3 == '3'){
                sq3 = 'X';
                goto updatep1;
                }
                else{
                    if(sq3 == 'X'){
                        goto ifp1;                    
                    }
                    else{
                        goto elsep1;  
                    }
                }
                break;
            case 4 : if(sq4 == '4'){
                sq4 = 'X';
                goto updatep1;
                }
                else{
                    if(sq4 == 'X'){
                        goto ifp1;                       
                    }
                    else{
                       goto elsep1; 
                    }
                }
                break;
            case 5 : if(sq5 == '5'){
                sq5 = 'X';
                goto updatep1;
                }
                else{
                    if(sq5 == 'X'){
                        goto ifp1;                       
                    }
                    else{
                      goto elsep1;  
                    }
                }
                break;
            case 6 : if(sq6 == '6'){
                sq6 = 'X';
                goto updatep1;
                }
                else{
                    if(sq6 == 'X'){
                        goto ifp1;     
                    }
                    else{
                        goto elsep1;
                    }
                }
                break;
            case 7 : if(sq7 == '7'){
                sq7 = 'X';
                goto updatep1;
                }
                else{
                    if(sq7 == 'X'){
                        goto ifp1;
                    }
                    else{
                        goto elsep1;
                    }
                }
                break;
            case 8 : if(sq8 == '8'){
                sq8 = 'X';
                goto updatep1;
                }
                else{
                    if(sq8 == 'X'){
                        goto ifp1;
                    }
                    else{
                        goto elsep1;
                    }
                }
                break;
            case 9 : if(sq9 == '9'){
                sq9 = 'X';
                goto updatep1;
                }
                else{
                    if(sq9 == 'X'){
                        goto ifp1;
                    }
                    else{
                        goto elsep1;
                    }
                }
                break;
            default : printf("INVALID INPUT");
                goto player1;
        }

    player2 : spc(1);
        system("cls");
        board();
        spc(4);
        printf("TURN : PLAYER 2");
        spc(2);
        printf("\tWHERE DO YOU WANT TO MARK ?");
        printf("\n--> SQUARE NO : ");
        scanf("%d",&sq);

        switch(sq){
            case 1 : if(sq1 == '1'){
                sq1 = 'O';
                goto updatep2;
                }
                else{
                    if(sq1 == 'O'){
                        goto ifp2;
                    }
                    else{
                        goto elsep2;
                    }
                }
                break;
            case 2 : if(sq2 == '2'){
                sq2 = 'O';
                goto updatep2;
                }
                else{
                    if(sq2 == 'O'){
                        goto ifp2;
                    }
                    else{
                        goto elsep2;
                    }
                }
                break;
            case 3 : if(sq3 == '3'){
                sq3 = 'O';
                goto updatep2;
                }
                else{
                    if(sq3 == 'O'){
                        goto ifp2;                    
                    }
                    else{
                        goto elsep2;  
                    }
                }
                break;
            case 4 : if(sq4 == '4'){
                sq4 = 'O';
                goto updatep2;
                }
                else{
                    if(sq4 == 'O'){
                        goto ifp2;                       
                    }
                    else{
                       goto elsep2; 
                    }
                }
                break;
            case 5 : if(sq5 == '5'){
                sq5 = 'O';
                goto updatep2;
                }
                else{
                    if(sq5 == 'O'){
                        goto ifp2;                       
                    }
                    else{
                      goto elsep2;  
                    }
                }
                break;
            case 6 : if(sq6 == '6'){
                sq6 = 'O';
                goto updatep2;
                }
                else{
                    if(sq6 == 'O'){
                        goto ifp2;     
                    }
                    else{
                        goto elsep2;
                    }
                }
                break;
            case 7 : if(sq7 == '7'){
                sq7 = 'O';
                goto updatep2;
                }
                else{
                    if(sq7 == 'O'){
                        goto ifp2;
                    }
                    else{
                        goto elsep2;
                    }
                }
                break;
            case 8 : if(sq8 == '8'){
                sq8 = 'O';
                goto updatep2;
                }
                else{
                    if(sq8 == 'O'){
                        goto ifp2;
                    }
                    else{
                        goto elsep2;
                    }
                }
                break;
            case 9 : if(sq9 == '9'){
                sq9 = 'O';
                goto updatep2;
                }
                else{
                    if(sq9 == 'O'){
                        goto ifp2;
                    }
                    else{
                        goto elsep2;
                    }
                }
                break;
            default : printf("INVALID INPUT");
                goto player2;
        }        

    updatep1 : val = 2;
        system("cls");
        goto loop;

    ifp1 : printf("THE SQUARE IS ALREADY MARKED BY YOU");
        spc(2);
        while(!kbhit()){}
        goto player1;

    elsep1 : printf("PLAYER 2 HAS MARKED THAT PLACE");
        spc(2);
        while(!kbhit()){}
        goto player1;   

    ifp2 : printf("THE SQUARE IS ALREADY MARKED BY YOU");
        spc(2);
        while(!kbhit()){}
        goto player2;

    elsep2 : printf("PLAYER 1 HAS MARKED THAT PLACE");
        spc(2);
        while(!kbhit()){}
        goto player2; 

    updatep2 : val = 1;
        system("cls");
        goto loop;

    win : if((sq1 == sq2 && sq1 == sq3)||(sq1 == sq4 && sq1 == sq7)||(sq1 == sq5 && sq1 == sq9)){
            if(sq1 == 'X'){
                lines(30);
                spc(2);
                printf("\tOUR WINNER IS PLAYER 1!!!");
                spc(2);
                lines(30);
                while(!kbhit()){}
                data1();
                menu();
            }
            else{
                lines(30);
                spc(2);
                printf("\tOUR WINNER IS PLAYER 2!!!");
                spc(2);
                lines(30);
                while(!kbhit()){}
                data2();
                menu();
            }
        }
        else if( (sq2 == sq5 && sq2 == sq8)|| (sq4 == sq5 && sq2 ==sq6) || (sq3 == sq5 && sq2 == sq7) ){
            if(sq5 == 'X'){
                lines(30);
                spc(2);
                printf("\tOUR WINNER IS PLAYER 1!!!");
                spc(2);
                lines(30);
                while(!kbhit()){}
                data1();
                menu();
            }
            else{
                lines(30);
                spc(2);
                printf("\tOUR WINNER IS PLAYER 2!!!");
                spc(2);
                lines(30);
                while(!kbhit()){}
                data2();
                menu();
            }
        }
        else if((sq3 == sq6 && sq3 == sq9) || (sq7 == sq8 && sq3 == sq9)){
            if(sq3 == 'X'){
                lines(30);
                spc(2);
                printf("\tOUR WINNER IS PLAYER 1!!!");
                spc(2);
                lines(30);
                while(!kbhit()){}
                data1();
                menu();
            }
            else{
                lines(30);
                spc(2);
                printf("\tOUR WINNER IS PLAYER 2!!!");
                spc(2);
                lines(30);
                while(!kbhit()){}
                data2();
                menu();
            }
        }
        else if((sq1 == 'X' || sq1 == 'O')&&
            (sq2 == 'X' || sq2 == 'O')&&(sq3 == 'X' || sq3 == 'O')&&
            (sq4 == 'X' || sq4 == 'O')&&(sq5 == 'X' || sq5 == 'O')&&
            (sq6 == 'X' || sq6 == 'O')&&(sq7 == 'X' || sq7 == 'O')&&
            (sq8 == 'X' || sq8 == 'O')&&(sq9 == 'X' || sq9 == 'O')){
                printf("ITS A DRAW");
                while(!kbhit()){}
                data3();
                menu();
            }
        else{
            goto loop1;
        }
}

void start(){
    data();
    board();
    logic();
}

void data(){
    system("cls");
    fp = fopen("record.bin","ab");
    printf("\tENTER NAME OF PLAYER 1 : ");
    scanf("%s",&s.p1);
    system("cls");
    printf("\tENTER NAME OF PLAYER 2 : ");
    scanf("%s",&s.p2);

    spc(2);
    fprintf(fp,"\n\n%s VS %s\n",s.p1,s.p2);
    while(!kbhit()){}
    fclose(fp);
}

void data1(){
    fp = fopen("record.bin","ab");
    fprintf(fp,"\nWINNER WAS %s\n",s.p1);
    fprintf(fp,"____________________________________________________________");
    fclose(fp);
}

void data2(){
    fp = fopen("record.bin","ab");
    fprintf(fp,"\nWINNER WAS %s\n",s.p2);
    fprintf(fp,"____________________________________________________________");
    fclose(fp);
}

void data3(){
    fp = fopen("record.bin","ab");
    fprintf(fp,"\nTHE GAME WAS A DRAW\n");
    fprintf(fp,"____________________________________________________________");
    fclose(fp);
}

void history(){
    char c;
    fp = fopen("record.bin","rb");
    c = fgetc(fp);

    while(c!=EOF){
        printf("%c",c);
        c = fgetc(fp);
    }
    fclose(fp);
    spc(2);
    printf("PRESS ANY KEY TO CONTINUE");
    while(!kbhit()){}
    menu();
}
