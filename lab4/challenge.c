#include <stdio.h>
   int main (){

    int option = 0 , depo , wtdr ;
    int balance = 0 ;
    
    while (option!=4){

        printf("====== ATM MENU ======\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        scanf("%d",&option);

    if (option == 1){

        printf("Choose an option: %d\n",option);
        printf("Current Balance: %d\n",balance);
    }
    if (option == 2){

        printf("Choose an option: %d\n",option);
        printf("Enter amount to deposit: ");
        scanf("%d",&depo);
        balance = balance + depo ;
    }
    if (option == 3){

        printf("Choose an option: %d\n",option);     
        printf("Enter amount to withdraw: ");
        scanf("%d", &wtdr);
        
    if (balance < wtdr){

        printf("you dont have enought money to withdraw\n");
        }

     if (balance >= wtdr){
        balance = balance - wtdr;
        printf("Withdraw successful.\n");
    }
        
    }
         
}
printf("Choose an option: %d\n",option);
printf("Thank you for using the ATM.");
}