//FARM GAME - TEXT BASED RPG
//DEV: D CURSE
//HOPE YOU LIKE THIS TEXT BASED RPG AND I WILL CHECK THIS GAME UPDATING
//THANK YOU

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

//file call (THIS PLAN WAS DROPPED)

//func call 
void menu();
void lvl();
void intro();
void lvl1();
void lvl2();

//few val 
char name[10];
int val;

//few imp func
void spc(int q){
    for(int q1 = 0; q1 < q; q1++)
    {
        printf("\n");
    }
}

void lines(){
    spc(1);
    printf("-----------------------------");
    spc(2);
}

//main func
void main(){
    system("cls");
    menu();
}

//other func
void menu(){
    printf("1. START \n");
    printf("2. EXIT \n");
    printf("ENTER YOUR CHOICE : ");
    scanf("%d",&val);

    switch (val)
    {
    case 1 : goto menu2;
        break;
    
    case 2 : printf("YOU HAVE EXITED THE PROGRAM");
        exit(1);

    default: printf("YOU HAVE ENTER THE WRONG CHOICE");
        spc(1);
        break;
    }

    menu2 : {
        system("cls");
        printf("1. NEW\n");
        printf("2. RESUME\n");
        printf("ENTER YOUR CHOICE : ");
        scanf("%d",&val);

        switch (val)
        {
        case 1 : intro();
            break;

        case 2 : lvl();
        
        default: printf("YOU HAVE ENTER THE WRONG CHOICE");
            spc(1);
            break;
        }
    }
}

void lvl(){
    system("cls");
    printf("SELECT THE LEVEL YOU WANT TO RESUME (1-2)\n");
    printf("LEVEL : ");
    scanf("%d",&val);
    switch (val)
    {
    case 1 : lvl1();
        break;
    
    case 2 : lvl2();
        break;
    
    default : printf("YOU HAVE ENTER THE WRONG CHOICE");
        spc(1);
        break;
    }
}

void intro(){
    system("cls");
    lines();
    printf("WELCOME TO OUR FARM");
    lines();
    printf("HOPE YOU ENJOY YOUR TIME IN THE FARM");
    lines();
    spc(2);

    printf("OUR FARM HAS TOTAL OF THREE COWS\n1.MOMO COW \n2.LOVE COW \n3.CALF");
    spc(1);
    printf("MOMO COW IS THE BIGGEST COW FROM THE THREE\n");
    printf("LOVE COW ALWAYS FOLLOWS MOMO COW AND DOES WHAT EVER HE DOES\n");
    printf("CALF IS THE MASTERMIND OF ALL PLAN\n");
    spc(3);
    printf("PRESS 1 TO CONTINUE : ");
    scanf("%d",&val);
    system("cls");
    
    switch(val){
        case 1 : lvl1();
            break;
            
        default : printf("YOU HAVE ENTER THE WRONG CHOICE");
            spc(1);
            break;
    }
}

void lvl1(){
    system("cls");
    lines();
    spc(1);
    printf("LEVEL 1 ");
    spc(2);
    printf("YOU FARM HAS BEEN ATTACKED");
    spc(2);
    printf("PRESS 1 TO CONTINUE : ");
    scanf("%d",&val);
    
    switch(val){
        case 1 : goto lvlintro1;
            break;
            
        default : printf("YOU HAVE ENTER THE WRONG CHOICE");
        spc(1);
        break;
    }
    
    lvlintro1 :
        system("cls");
        printf("SOME OTHER COWS HAVE ENTERED YOUR FIELD\n");
        printf("WHAT ARE YOU GOING TO DO ?\n");
        printf("1.FIGHT\n2.RUN AWAY\n");
        printf("ENTER YOUR CHOICE : ");
        scanf("%d",&val);
        
        switch(val){
            case 1 : goto fight;
                break;
                
             default : goto run;
                break;
        }
    
    run : system("cls");
        printf("NEVER RUN AWAY FROM YOUR FARM");  
        spc(2);
        printf("YOU FAILED TO PROTECT YOUR FARM");
        exit(1);
    
    fight : system("cls");
        printf("WHAT DO YOU WANT TO DO?\n");
        printf("1.CHARGE AT THEM\n2.DEFEND THE FARM");
        spc(2);
        printf("ENTER YOUR CHOICE : ");
        scanf("%d",&val);
        
        switch(val){
            case 1 : goto charge;
                break;
                
             case 2 : goto defend;
                break;
        }
    
    charge : system("cls");
        printf("NOTE : YOU ARE ONLY 3 AND THEY ARE 10\nSO BASICALLY ITS A 3 VS 10");
        spc(1);
        printf("PRESS 1 TO CONTINUE : ");
        scanf("%d",&val);
        
        switch(val){
            case 1 : goto charge1;
                break;
                
             default : goto charge1;
                break;
        }
        
    charge1 : system("cls");
        printf("YOU CHARGE INTO THE BATTLE\nYOU TOOK DOWN 4 COWS\nNOW LOVE COW IS INJURED SO ITS 2 VS 6\n");
        printf("1.AGAIN CHARGE THEM\n2.DEFEND THE FARM\n");
        printf("ENTER YOUR CHOICE : ");
        scanf("%d",&val);
        
        switch(val){
            case 1 : goto charge3;
                break;
                
             default : goto defend;
                break;
        }
        
    charge3 : system("cls");
        printf("CALF GOT ANGRY AND KILLED MOMO COW\nREASON : HE KNEW BOTH OF THEM WILL DIE SO HE KILLED HIM\nYES OUR CALF IS PSYCHOPATH");
        spc(1);
        printf("CALF LEFT THE FARM\nYOU FAILED TO PROTECT THE FARM\n");
        printf("PRESS 1 TO CONTINUE : ");
        scanf("%d",&val);
        
        switch(val){
            case 1 : system("cls"); 
                printf("PLAY WISELY NEXT TIME");
                lines();
                exit(1);
                break;
                
             default : system("clear"); 
                printf("PLAY WISELY NEXT TIME");
                exit(1);
                lines();
                break;
        }
        
    defend : system("cls");
        printf("CALF : I THINK ITS A GOOD DECISION!!! BUT WHAT DO YOU WANNA DO NEXT?\n");
        printf("MOMO COW : I GOT A IDEA!!!\n");
        printf("1.THROW POOP\n2.ATTACK WITH MILK\n");
         printf("ENTER YOUR CHOICE : ");
        scanf("%d",&val);
        
        switch(val){
            case 1 : goto poop;
                break;
                
             default : goto milk;
                break;
        }
    
    milk : system("cls");
        printf("GOOD IDEA BUT IT DIDNT WORK");
        exit(1);
        
    poop : system("cls");
        printf("LETS DO IT !!!\n");
        printf("HEHEHEHEHEHEHE!!!!!!!!!\n");
        printf("PRESS 1 TO CONTINUE : ");
        scanf("%d",&val);
        
        switch(val){
            case 1 : goto outro1;
                break;
                
             default : goto outro1;
                break;
        }
        
    outro1 : system("cls");
        printf("HURRAY!!!!\nPOOP ATTACKED WORKED BECAUSE LOVE COW'S POOP SMELLS WORST THEN SHIT\nEITHER WAY WE PROTECTED THE FARM\n");
        printf("CONGRALUTION!!!\nALL 3 OF YOU PROTECTED OUR FARM!!!\n");
        printf("THANK YOU !!!\n");
        printf("PRESS 1 TO CONTINUE : ");
        scanf("%d",&val);
        
        switch(val){
            case 1 : goto lvlcom1;
                break;
                
             default : goto lvlcom1;
                break;
        }
        
    lvlcom1 : system("cls");
        printf("LEVEL 1 COMPLETED");
        spc(2);
        printf("1. LEVEL 2\n");
        printf("PRESS 1 TO CONTINUE : ");
        scanf("%d",&val);
        
        switch(val){
            case 1 : lvl2();
                break;
                
             default : spc(1);
                printf("WRONG VALUE");
                spc(1);
                goto lvlcom1;
                break;
        }
}

void lvl2(){
    system("cls");
    printf("HOPE YOU LIKE THE LEVEL 1\n");
    spc(2);
    printf("DEVS ARE WORKING ON LEVEL 2 !!!\n");
    spc(2);
    printf("GIVE YOUR REVIEWS TO IMPROVES AND MAKE IT A BETTER GAME");
    spc(2);
    printf("IF YOU HAVE ANY IDEA OR STORY THEN DO SHARE");
}