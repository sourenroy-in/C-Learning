// Q8: Write a Program to make a simple calculator.
# include<stdio.h>

int main() {

int n1 = 0;
int n2 = 0;
char op;

printf("\nEnter The Number: ");
scanf("%d", &n1);
printf("\nEnter The Number: ");
scanf("%d", &n2);

printf("\nEnter The Operatior{+, -, *, /}");
scanf(" %c", &op);

switch(op) {
    case '+':
    printf("Addition : %d\n",n1+n2);
    break;

    case '-':
    printf("Subtraction: %d\n", n1-n2);
    break;

    case '*':
    printf("Multiplication:%d\n ", n1*n2);
    break;

    case '/':
    printf("Division: %d\n", n1/n2);
    break;

    default:
    printf("Error Operation");
};




return 0;
}