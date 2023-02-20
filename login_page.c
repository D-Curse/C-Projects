//FILE STORING AND READING SYSTEM
//DEV: D CURSE

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <unistd.h>

struct{
    char username [20];
    char password[20];
}s;

void login();
void signup();
int spc();
int lines();

int val;
FILE *fp;

void main(){
    lines(40);
    spc(2);
    printf("\t----WELCOME----");
    spc(3);
    printf("\t1.LOGIN");
    spc(1);
    printf("\t2.SIGN UP");
    spc(1);
    printf("\t3.EXIT");
    spc(2);
    lines(40);
    spc(2);
    
    printf("--> ");
    scanf("%d",&val);
    
    switch(val){
        case 1 : system("cls");
            login();
            break;
            
        case 2 : system("cls");
            signup();
            break;
            
        case 3 : exit(1);
            break;
            
        default : system("cls");
            printf("INVALID INPUT");
    }
}

int spc(int q){
    for(int i =0; i <q; i++){
        printf("\n");
    }
    return 0;
}

int lines(int q){
    for(int i =0; i <q; i++){
        printf("_");
    }
    return 0;   
}

void login(){
    char name[20];
    char pass[20];
    char cpyu;
    char cpyp;
    char c;
    int i;

    fp = fopen("record.bin","rb");

    lines(40);
    spc(3);
    printf("\t\tLOGIN PAGE");
    spc(3);
    lines(40);

    spc(2);
    printf("\tENTER USERNAME : ");
    scanf("%s",&name);
    spc(1);
    
    printf("\tENTER THE PASSWORD : ");
    scanf("%s",&pass);
/*    for(i = 0; c = getch()!=13; i++){
        pass[i] = c; 
        printf("*");
    }
    pass[i] = '/0'; //used to keep last element null*/
    spc(3);

    while(!feof(fp)){
        fread(&s,sizeof(s),1,fp);

        cpyu = strcmp(name,s.username);
        cpyp = strcmp(pass,s.password);

        //printf("\nNAME : %s\nPASS : %s\nS.USERNAME : %s\nS.PASSWORD : %s\n",name,pass,s.username,s.password);

        if(cpyu == 0 && cpyp != 0){
            spc(2);
            printf("\nINVALID PASSWORD");
        }
        else if(cpyu != 0 && cpyp == 0){
            spc(2);
            printf("\nUSERNAME NOT FOUND");
        }
        else if(cpyu == 0 && cpyp == 0){
            system("cls");
            lines(40);
            lines(40);
            spc(2);
            printf("\tWELCOME %s",s.username);
            spc(2);
            lines(40);
            lines(40);
        }
    }

    spc(2);
    printf("\t\tPRESS ANY KEY \n");
    while (!kbhit()){
    }

    exit(1);
}

void signup(){
    int c;
    char ch;
    
    fp = fopen("record.bin","ab");
    
    spc(2);
    lines(40);
    spc(2);
    printf("\t---SIGN UP---\n");
    printf("\t\t-D CURSE");
    spc(2);
    lines(40);
    spc(2);
    
    printf("\tENTER USERNAME : ");
    scanf("%s",&s.username);
    spc(1);
    
    printf("\tENTER THE PASSWORD : ");
    scanf("%s",&s.password);
    spc(3);
    
    //fprintf(fp, " %s\t  %s\n",s.username,s.password);
    //printf("USERNAME : %s\nPASSWORD : %s\n",s.username,s.password);
    
    lines(50);
    spc(2);
    //printf("\tPRESS 1 TO CONTINUE......\n");
    fprintf(fp,"USERNAME\t\tPASSWORD\n");
    fwrite(&s,sizeof(s),1,fp);
    fprintf(fp,"\n"); 
    //syntax fwrite(data location,size,no of times to be stored,where to store)
    printf("\n\t\tINFORMATION SAVED");
    spc(2);
    lines(50);
    spc(2);

    printf("\t\tPRESS ANY KEY \n");
    while (!kbhit()){
    }
    system("cls");
    main();
    fclose(fp);
}