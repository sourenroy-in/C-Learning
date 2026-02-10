#include<stdio.h>
#include<math.h>

//Function Decleration
int Addition(int a,int b);
int subtract(int a, int b);
int Multiply(int a, int b);
int Divide(int a, int b);
int Modulo(int a, int b);

int main(){
    // printf("Hello");
    int num1,num2,choice;
    float result;

    do
    {
        printf("This is a simple Calculator\n");
        printf("---------------------------\n");
        printf("1 for Addition(+)\n"); 
        printf("2 for Subtraction\n");
        printf("3 for Multiplication\n");
        printf("4 for Division\n");
        printf("5 for Modulas\n");
        printf("6 for Exit\n");
        printf("Enter your choice(1-6): ");
        scanf("%d",&choice);

    

    switch (choice) 
    {
        case 1:printf("Enter 2 integers");
        scanf("%d%d",&num1,&num2);
        result=Addition(num1,num2);
        printf("Result =%d\n ",(int)result);
        break;

        case 2:printf("Enter 2 integers");
        scanf("%d%d",&num1,&num2);
        result=subtract(num1,num2);
        printf("Result =%d\n ",(int)result);
        break;

        case 3:printf("Enter 2 integers");
        scanf("%d%d",&num1,&num2);
        result=Multiply(num1,num2);
        printf("Result =%d\n ",(int)result);
        break;

        case 4:printf("Enter 2 integers");
        scanf("%d%d",&num1,&num2);
        if(num2==0)
            printf("Error:Division by  is not allowed\n");
        else{
        result=Divide(num1,num2);
        printf("Result =%d\n ",(int)result);
        }
        break;

        case 5:printf("Enter 2 integers");
        scanf("%d%d",&num1,&num2);
        if(num2==0)
            printf("Error:Division by  is not allowed\n");
        else{
        result=Modulo(num1,num2);
        printf("Result =%d\n ",(int)result);
        }
        break;

        case 6:printf("you choose to Terminate the program");
        break;

        default:
        printf("Invalid\n");
    
    }

   }   while(choice==6);
    return 0;

}

//Function Decleration
int Addition(int a, int b){
    return a+b;
}

int subtract(int a, int b){
    return a-b;
}

int Multiply(int a, int b){
    return a*b;
}

int Divide(int a, int b){
    return a/b;
}

int Modulo(int a, int b){
    return a%b;

}
