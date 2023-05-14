#include<stdio.h>
void createaccount();
void checkbal();
void withdrawamt();
void depositmoney();
int n;
int x;
int count=1;
int accountno[1000];
int balance[1000];
void createaccount(){
     struct createacc{
        char name[1000];
        int age;
        int mobileno;
        long long int adharno;
        
     };
     struct createacc newacc;
     printf("enter your name:\n");
     scanf("%s",&newacc.name);
     printf("enter your age\n");
     scanf("%d",&newacc.age);
     printf("enter your mobile nos\n");
     scanf("%d",&newacc.mobileno);
     printf("enter your adhar no\n");
     scanf("%lld",&newacc.adharno);
     accountno[count]=1;
     balance[accountno[count]]=0;
     printf("your account has been created with account no %d\n",accountno[count]);
     count++;
      printf("welcome to ' BSBI 'bank\n");
    printf("enter your input:\n");
    printf("press 4 to deposit money\n");
    printf("press 5 to exit\n");
    scanf("%d",&n);
    if(n==4){
        depositmoney();
    }
    else if(n==5){
        printf("Thanks for visiting our bank.Please visit again\n");
    }
    else
    {
        printf("please enter a valid input\n");
    }
     
}
void checkbal(){
    printf("enter your account nos:\n");
    scanf("%d",&count);
    int i;
    int ct=0;
    for(i=0;i<1000;i++){
        if(count==accountno[i]){
            printf("your balance is %d\n",balance[accountno[count]]);
            ct++;
                }
        }
        if(ct==0){
               printf("account donot exist");
        }

    }
    
void withdrawamt(){
     printf("enter your account nos:\n");
    scanf("%d",&count);
    int i;
    int ct=0;
    for(i=0;i<1000;i++){
        if(count==accountno[i]){
            printf("your balance is %d\n",balance[accountno[count]]);
            ct++;
                }
        }
        if(ct==0){
               printf("account donot exist");
        }
        else{
    printf("enter the amount you want to withdraw:\n");
    scanf("%d",&x);
    if(x<=balance[accountno[count]]){
    balance[accountno[count]]-=x;
    printf("the remaining balance is %d \n ",balance[accountno[count]]);
    printf("press 5 to exit \n");
    scanf("%d",&n);
     if(n==5){
        printf("Thanks for visiting our bank.Please visit again\n");
    }
    else
    {
        printf("please enter a valid input\n");
    }
    }
    else{
        printf("not enough money \n");
        printf("press 2 to check balance:\n");
         printf("press 3 to withdraw amount\n");
    printf("press 4 to deposit money\n");
    printf("press 5 to exit\n");
    scanf("%d",&n);
     if(n==2){
        checkbal();
    }
    else if(n==3){
        withdrawamt();
    }
    else if(n==4){
        depositmoney();
    }
    else if(n==5){
        printf("Thanks for visiting our bank.Please visit again\n");
    }
    else
    {
        printf("please enter a valid input\n");
    }
    }}
}
void depositmoney(){
     printf("enter your account nos:\n");
    scanf("%d",&count);
     int i;
    int ct=0;
    for(i=0;i<1000;i++){
        if(count==accountno[i]){
            printf("your balance is %d\n",balance[accountno[count]]);
            ct++;
                }
        }
        if(ct==0){
               printf("account donot exist");
        }
    printf("enter the amount you want to deposit\n");
    scanf("%d",&x);
    balance[accountno[count]]+=x;
    printf("your net balance is %d\n",balance[accountno[count]]);
     printf("press 3 to withdraw amount\n");
     printf("press 5 to exit\n");
    scanf("%d",&n);
    if(n==3){
        withdrawamt();
    }
    else if(n==5){
        printf("Thanks for visiting our bank.Please visit again\n");
    }
    else
    {
        printf("please enter a valid input\n");
    }
}


int main(){
    
    printf("welcome to ' BSBI 'bank\n");
    printf("enter your input:\n");
    printf("press 1 to create a account\n");
    printf("press 2 to check balance:\n");
    printf("press 3 to withdraw amount\n");
    printf("press 4 to deposit money\n");
    printf("press 5 to exit\n");
    scanf("%d",&n);
    if(n==1){
        createaccount();
    }
    else if(n==2){
        checkbal();
    }
    else if(n==3){
        withdrawamt();
    }
    else if(n==4){
        depositmoney();
    }
    else if(n==5){
        printf("Thanks for visiting our bank.Please visit again\n");
    }
    else
    {
        printf("please enter a valid input\n");
    }
    return 0;
    }
