// CBank 1.0
// Author : Niirmaal twaatii
#include<stdio.h>
int ammount,inp,am;
int main(){
    printf("Welcome to CBank:-\n [1] Check Ammount \n [2] Deposit \n [3] withdraw\n [0] Exit \n\n");
        int i;
     for(i=1;i>0;i++){
        printf("INSTRUCTION : ");
        scanf("%d",&inp);
    if(inp==1){
        printf("You have Rs.%d\n\n",ammount);
    }
    if(inp==2){
        printf("Enter a Ammount:-\n");
        scanf("%d",&am);
        ammount += am;
     printf("You have sucessfully deposit Rs. %d\n\n",am);
    }
    if(inp==3){
        printf("How much you need?\n");
        scanf("%d",&am);
            if(am<=ammount){
                 ammount -= am;
        printf("Suceess!! Take your money\n\n");
            }else{printf("Sorry You dont have enough ammount !!\n\n");}
    }
        if(inp==0){
                printf("Thanks for comming!!");
                i = -1;
            }
    }
}