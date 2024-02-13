// Create a structure that can contain data of customers in a bank. The data to be stored is Account number, Name and Balance in account.
// Assume maximum of 200 customers in the bank.
// (1) Define a function to print the Account number and name of each customer with balance below Rs. 1000.
// (2) If a customer requests for withdrawal or deposit, it should receive as input Account number, amount and code (1 for deposit, 0 for withdrawal).
// Define a function that prints a message, “The balance is insufficient for the specified withdrawal”, if on withdrawal the balance falls below Rs. 1000.

#include <stdio.h>
/* function to link the floating point formats */
void fun()
{
    float f, *ff = &f;
}

/* structure for customer */
struct customer
{
    int acc_no;
    char name[20];
    float bal_i_acc;
};
struct customer cust[3];
/* function prototypes */
void with_dep(int ano, float amount);
void deposit(int ano, float amount);
void withdrawal(int ano, float amount);
void low_bal();
void display();
void set_cust_data();

int main()
{
    int i, ano, choice;
    float amount;
    set_cust_data();
    display();
    low_bal();
    printf("\nEnter acco number and amount: ");
    scanf("%d%f", &ano, &amount);
    with_dep(ano, amount);
    display();
    return 0;
}

void with_dep(int ano, float amount)
{
    int choice;
    printf("Enter 1 for Deposit\t \tEnter 0 for Withdrawal: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        deposit(ano, amount);
        break;
    case 0:
        withdrawal(ano, amount);
        break;
    default:
        printf("You entered wrong choice\n");
    }
}

void deposit(int ano, float amount)
{
    int i, j = 0;
    for (i = 0; i < 3; i++)
    {
        if (cust[i].acc_no == ano)
        {
            cust[i].bal_i_acc += amount;
            j = 1;
        }
    }
    if (j == 0)
        printf("\n\tWrong Account Number\n");
}
void withdrawal(int ano, float amount)
{
    int i, j = 0;
    for (i = 0; i < 3; i++)
    {
        if (cust[i].acc_no == ano)
        {
            j = 1;
            if (cust[i].bal_i_acc < 1000)
            {
                printf("\n\t\tThe Balance is insufficient for the specified Withdrawal\n");
            }
            else if (cust[i].bal_i_acc - 1000 >= amount)
                cust[i].bal_i_acc -= amount;
            else
                printf("\nwithdrawal amount should be <= %fRs.\n", cust[i].bal_i_acc - 1000);
        }
    }
    if (j == 0)
        printf("\n\tWrong Account Number\n");
}
void low_bal()
{
    int i, j = 0;
    printf("\n\nName and Account no. with balance < 100\n");
    for (i = 0; i < 3; i++)
    {
        if (cust[i].bal_i_acc < 1000)
        {
            j = 1;
            printf("\tCustomer Number = %d\n", i + 1);
            printf("\t\tAccount Number of Customer = %d\n",
                   cust[i].acc_no);
            printf("\t\tName of Customer = %s\n", cust[i].name);
        }
    }
    if (j == 0)
        printf("\n\tAll customers have sufficient balance\n");
}
void display()
{
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("\n\n\tCustomer Number = %d\n", i + 1);
        printf("\tAccount Number of Customer = %d\n",
               cust[i].acc_no);
        printf("\tName of Customer = %s\n", cust[i].name);
        printf("\tBalance Amount of Customer = %.3f\n",
               cust[i].bal_i_acc);
    }
}

void set_cust_data()
{
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("\n\nEnter Account number of the Customer\n\t");
        scanf("%d", &cust[i].acc_no);
        fflush(stdin);
        printf("\nEnter the name of the Customer\n\t");
        scanf("%s", cust[i].name);
        fflush(stdin);
        printf("\nEnter balance amount in account\n\t");
        scanf("%f", &cust[i].bal_i_acc);
    }
}
