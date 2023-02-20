//CASINO GAME 
//DEV : D CURSE 
//ENJOY THE GAME


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int amt, bal = 100, amt1 = 0;
int val, ran;
int guess;

void lines();
void spc();
void intro();
void winner();
void gamemode();

void main(){
    intro();
    spc(2);
    gamemode();
    spc(4);
}

void lines(){
    for(int i=0;i<35;i++)   
        printf("-");    
}

void spc(int j){
    for(int i=0;i<j;i++)   
        printf("\n");
}

void intro(){
    lines();
    spc(1);
    printf("\tMOMO CASINO\n");
    printf("\t\tBY - D.CURSE");
    spc(1);
    lines();
}

void gamemode(){
    lines();
    spc(1);
    printf("YOU HAVE $100");
    spc(2);
    printf("HOW TO WIN ?\n");
    printf("YOU HAVE TO REACH $1000 IN ORDER TO WIN THE GAME\n");
    spc(2);
    printf("YOU HAVE TO PREDICT THE NUMBER\nIF YOUR PREDICTION IS CORRECT THEN YOU WIN THE PRIZE\n");
    spc(3);
    printf("--> PRESS 1 TO CONTINUE : ");
    scanf("%d",&val);
    switch(val){
        case 1 : goto gamemode1;
            break;
            
        default : goto gamemode1;
            break;
    }
    
    gamemode1 : system("cls");
        spc(2);
        printf("THERE ARE 3 DIFFERENT GAMEMODE\n");
        printf("1. X2\t\tNUMBER : (1-5)\n");
        printf("2. X3\t\tNUMBER : (1-10)\n");
        printf("3. X5\t\tNUMBER : (1-20)\n");
        printf("4. CHECK YOU BALANCE\n");
        printf("5. CHECK IF I WON THE GAME\n");
        printf("6. EXIT\n");
        spc(2);
        printf("--> ENTER YOUR CHOICE : ");
        scanf("%d",&val);
        switch(val){
            case 1 : goto X2;
                break;
                
            case 2 : goto X3;
                break;
                
            case 3 : goto X5;
                break;
                
            case 4 : printf("YOUR BALANCE IS : %d",bal);
                spc(2);
                printf("--> PRESS 1 TO CONTINUE : ");
                scanf("%d",&val);
                switch(val){
                    case 1 : goto gamemode1;
                        break;
                        
                    default : goto gamemode1;
                        break;
                }
                break;
                
            case 5 : if(bal>999){
                    winner();
                }else{
                    printf("NO YOU HAVE TO GET YOU BALANCE TO $1000+ TO WIN THE GAME\n");
                    printf("--> PRESS 1 TO CONTINUE : ");
                    scanf("%d",&val);
                    switch(val){
                        case 1 : goto gamemode1;
                            break;
                            
                        default : goto gamemode1;
                            break;
                    }
                }
                break;
                
            case 6 : exit(1);
                break;
                
            default : printf("WRONG INPUT\n");
                printf("--> PRESS 1 TO CONTINUE : ");
                scanf("%d",&val);
                switch(val){
                    case 1 : goto gamemode1;
                        break;
                        
                    default : goto gamemode1;
                        break;
                }
                break;
        }
        
    X2 : system("cls");
        printf("AMOUNT YOU WANT TO BET : ");
        scanf("%d",&amt);
        spc(2);
        if(bal>0){
            if(amt<=bal){
                printf("PREDICT A NUMBER FROM 1-5\n");
                printf("IF YOU PREDICTION IS PERFECT YOU GET X2 THE AMOUNT YOU BET\n");
                spc(2);
                printf("ENTER YOUR PREDICTION : ");
                scanf("%d",&guess);
                spc(4);
                
                ran = rand()%5;
                if(guess == ran){
                    system("cls");
                    printf("CONGO!!!!!!\n");
                    printf("YOU WON\n");
                    amt1 = amt1+(amt*2);
                    bal = bal+(amt);
                    printf("YOU WON %d",amt1);
                    spc(2);
                    printf("YOUR BALANCE IS : %d",bal);
                    spc(2);
                    printf("--> PRESS 1 TO PLAY AGAIN\n--> PRESS 2 GAMEMODE\n");
                        printf("--> ");
                        scanf("%d",&val);
                        switch(val){
                            case 1 : printf("YOUR BALANCE IS : %d",bal);
                                spc(2);
                                printf("--> PRESS 1 TO CONTINUE : ");
                                scanf("%d",&val);
                                switch(val)
                                    case 1 : goto X2;
                                        break;
                                break;
                                
                            case 2 : spc(2);
                                goto gamemode1;
                                break;
                                

                            default : printf("YOUR BALANCE IS : %d",bal);
                                printf("WRONG CHOICE"); 
                                spc(2);
                                goto X2;
                                break;
                        }
                }
                else{
                    else1 : 
                        spc(2);
                        bal = bal-amt;
                        spc(2);
                        printf("YOU LOST\nDO YOU WANT TO PLAY AGAIN?\n");
                        printf("--> PRESS 1 TO PLAY AGAIN\n--> PRESS 2 GAMEMODE\n--> PRESS 3 PAY $20 TO SEE THE NUMBER\n");
                        printf("--> ");
                        scanf("%d",&val);
                        switch(val){
                            case 1 : printf("YOUR BALANCE IS : %d\n",bal);
                                spc(2);
                                printf("--> PRESS 1 TO CONTINUE : ");
                                scanf("%d",&val);
                                switch(val){
                                    case 1 : goto X2;
                                        break;
                                }
                                break;
                                
                            case 2 : spc(2);
                                goto gamemode1;
                                break;
                                
                            case 3 : bal = bal-20;
                                lines();
                                spc(2);
                                printf("\tTHE NUMBER WAS %d",ran);
                                spc(2);
                                lines();
                                spc(1);
                                printf("--> PRESS 1 TO CONTINUE : ");
                                scanf("%d",&val);
                                if(val == 1)
                                    goto gamemode1;
                                else 
                                    goto gamemode1;
                                break;

                            default : printf("YOUR BALANCE IS : %d\n",bal);
                                spc(1);
                                printf("WRONG CHOICE"); 
                                spc(2);
                                goto gamemode1;
                                break;
                        }
                }
            }        
            else {
                printf("YOU DONT HAVE THAT MUCH AMOUNT\n");
                printf("ENTER A PROPER AMOUNT\n");
                else2 :  
                    printf("\n1. CHECK BALANCE\n2. PLAY\n");
                    printf("--> ");
                    scanf("%d",&val);
                    spc(1);
                    switch(val){
                        case 1 : printf("YOU BALANCE IS : %d",bal);
                            printf("--> PRESS 1 TO CONTINUE : ");
                            scanf("%d",&val);
                            switch(val)
                                case 1 : goto else2;
                                    break;
                            break;
                            
                        case 2 : system("cls");
                            printf("--> PRESS 1 TO CONTINUE : ");
                            scanf("%d",&val);
                            switch(val)
                                case 1 : goto X2;
                                    break;
                            break;

                        default : printf("WRONG CHOICE");
                            spc(2);
                            goto else2;
                            break;
                    }
        
            }    
        }
        else
            printf("YOU DONT HAVE BALANCE\n");
            printf("BETTER LUCK NEXT TIME\n");
            exit(1);
        
    X3 : system("cls");
        printf("AMOUNT YOU WANT TO BET : ");
        scanf("%d",&amt);
        spc(2);
        if(bal>0){
            if(amt<=bal){
                printf("PREDICT A NUMBER FROM 1-10\n");
                printf("IF YOU PREDICTION IS PERFECT YOU GET X3 THE AMOUNT YOU BET\n");
                spc(2);
                printf("ENTER YOUR PREDICTION : ");
                scanf("%d",&guess);
                spc(4);
                
                ran = rand()%10;
                if(guess == ran){
                    system("cls");
                    printf("CONGO!!!!!!\n");
                    printf("YOU WON\n");
                    amt1 = amt1+(amt*3);
                    bal = bal+(amt*2);
                    printf("YOU WON %d",amt1);
                    spc(2);
                    printf("YOUR BALANCE IS : %d",bal);
                    spc(2);
                    printf("--> PRESS 1 TO PLAY AGAIN\n--> PRESS 2 GAMEMODE\n");
                        printf("--> ");
                        scanf("%d",&val);
                        switch(val){
                            case 1 : printf("YOUR BALANCE IS : %d",bal);
                                spc(2);
                                printf("--> PRESS 1 TO CONTINUE : ");
                                scanf("%d",&val);
                                switch(val)
                                    case 1 : goto X3;
                                        break;
                                break;
                                
                            case 2 : spc(2);
                                goto gamemode1;
                                break;
                            
                            default : printf("YOUR BALANCE IS : %d",bal);
                                printf("WRONG CHOICE"); 
                                spc(2);
                                goto X3;
                                break;
                        }
                }
                else{
                    else3 :
                        spc(2);
                        bal = bal-amt;
                        spc(2);
                        printf("YOU LOST\nDO YOU WANT TO PLAY AGAIN?\n");
                        printf("--> PRESS 1 TO PLAY AGAIN\n--> PRESS 2 GAMEMODE\n--> PRESS 3 PAY $20 TO SEE THE NUMBER\n");
                        printf("--> ");
                        scanf("%d",&val);
                        switch(val){
                            case 1 : printf("YOUR BALANCE IS : %d",bal);
                                spc(2);
                                printf("--> PRESS 1 TO CONTINUE : ");
                                scanf("%d",&val);
                                switch(val)
                                    case 1 : goto X3;
                                        break;
                                break;
                                
                            case 2 : spc(2);
                                goto gamemode1;
                                break;
                                
                            case 3 : bal = bal-20;
                                lines();
                                spc(2);
                                printf("\tTHE NUMBER WAS %d",ran);
                                spc(2);
                                lines();
                                spc(1);
                                printf("--> PRESS 1 TO CONTINUE : ");
                                scanf("%d",&val);
                                if(val == 1)
                                    goto gamemode1;
                                else 
                                    goto gamemode1;
                                break;

                            default : printf("YOUR BALANCE IS : %d",bal);
                                printf("WRONG CHOICE"); 
                                spc(2);
                                goto gamemode1;
                                break;
                        }
                }
            }        
            else {
                printf("YOU DONT HAVE THAT MUCH AMOUNT\n");
                printf("ENTER A PROPER AMOUNT\n");
                else4 :  
                    printf("\n1. CHECK BALANCE\n2. PLAY\n");
                    printf("--> ");
                    scanf("%d",&val);
                    spc(1);
                    switch(val){
                        case 1 : printf("YOU BALANCE IS : %d",bal);
                            spc(2);
                            printf("--> PRESS 1 TO CONTINUE : ");
                            scanf("%d",&val);
                            switch(val)
                                case 1 : goto else4;
                                    break;
                            break;
                            
                        case 2 : system("cls");
                            printf("--> PRESS 1 TO CONTINUE : ");
                            scanf("%d",&val);
                            spc(2);
                            switch(val)
                                case 1 : goto X3;
                                    break;
                            break;

                        default : printf("WRONG CHOICE");
                            spc(2);
                            goto else4;
                            break;
                    }
        
            }    
        }
        else
            printf("YOU DONT HAVE BALANCE\n");
            printf("BETTER LUCK NEXT TIME\n");
            exit(1);
        
        
    X5 : system("cls");
        printf("AMOUNT YOU WANT TO BET : ");
        scanf("%d",&amt);
        spc(2);
        if(bal>0){
            if(amt<=bal){
                printf("PREDICT A NUMBER FROM 1-20\n");
                printf("IF YOU PREDICTION IS PERFECT YOU GET X5 THE AMOUNT YOU BET\n");
                spc(2);
                printf("ENTER YOUR PREDICTION : ");
                scanf("%d",&guess);
                spc(4);
                
                ran = rand()%20;
                if(guess == ran){
                    system("cls");
                    printf("CONGO!!!!!!\n");
                    printf("YOU WON\n");
                    amt1 = amt1+(amt*5);
                    bal = bal+(amt*4);
                    printf("YOU WON %d",amt1);
                    spc(2);
                    printf("YOUR BALANCE IS : %d",bal);
                    spc(2);
                    printf("--> PRESS 1 TO PLAY AGAIN\n--> PRESS 2 GAMEMODE\n");
                        printf("--> ");
                        scanf("%d",&val);
                        switch(val){
                            case 1 : printf("YOUR BALANCE IS : %d",bal);
                                spc(2);
                                printf("--> PRESS 1 TO CONTINUE : ");
                                scanf("%d",&val);
                                switch(val)
                                    case 1 : goto X5;
                                        break;
                                break;
                                
                            case 2 : spc(2);
                                goto gamemode1;
                                break;

                            default : printf("YOUR BALANCE IS : %d",bal);
                                spc(2);
                                printf("WRONG CHOICE"); 
                                spc(2);
                                goto X5;
                                break;
                        }
                }
                else{
                    else5 :
                        spc(2);
                        bal = bal-amt;
                        spc(2);
                        printf("YOU LOST\nDO YOU WANT TO PLAY AGAIN?\n");
                        printf("--> PRESS 1 TO PLAY AGAIN\n--> PRESS 2 GAMEMODE\n--> PRESS 3 PAY $20 TO SEE THE NUMBER\n");
                        printf("--> ");
                        scanf("%d",&val);
                        switch(val){
                            case 1 : printf("YOUR BALANCE IS : %d",bal);
                                spc(2);
                                printf("--> PRESS 1 TO CONTINUE : ");
                                scanf("%d",&val);
                                switch(val)
                                    case 1 : goto X5;
                                        break;
                                break;
                                
                            case 2 : spc(2);
                                goto gamemode1;
                                break;
                                
                            case 3 :bal = bal-20;
                                lines();
                                spc(2);
                                printf("\tTHE NUMBER WAS %d",ran);
                                spc(2);
                                lines();
                                spc(1);
                                printf("--> PRESS 1 TO CONTINUE : ");
                                scanf("%d",&val);
                                if(val == 1)
                                    goto gamemode1;
                                else 
                                    goto gamemode1;
                                break;

                            default : printf("YOUR BALANCE IS : %d",bal);
                                spc(2);
                                printf("WRONG CHOICE"); 
                                spc(2);
                                goto gamemode1;
                                break;
                        }
                }
            }        
            else {
                printf("YOU DONT HAVE THAT MUCH AMOUNT\n");
                printf("ENTER A PROPER AMOUNT\n");
                else6 :  
                    printf("\n1. CHECK BALANCE\n2. PLAY\n");
                    printf("--> ");
                    scanf("%d",&val);
                    spc(1);
                    switch(val){
                        case 1 : printf("YOU BALANCE IS : %d",bal);
                            spc(2);
                            printf("--> PRESS 1 TO CONTINUE : ");
                            scanf("%d",&val);
                            switch(val)
                                case 1 : goto else6;
                                    break;
                            break;
                            
                        case 2 : system("cls");
                            printf("--> PRESS 1 TO CONTINUE : ");
                            scanf("%d",&val);
                            spc(2);
                            switch(val)
                                case 1 : goto X5;
                                    break;
                            break;

                        default : printf("WRONG CHOICE");
                            spc(2);
                            goto else6;
                            break;
                    }
        
            }    
        }
        else
            printf("YOU DONT HAVE BALANCE\n");
            printf("BETTER LUCK NEXT TIME\n");
            exit(1);
}

void winner(){
    printf("CONGRALUTION YOU HAVE COMPLETED THE GAME!!!");
    exit(1);
}
