// In the file ‘CUSTOMER.DAT’ there are 10 records with the following
// structure:
// struct customer
// {
// int accno ;
// char name[ 30 ] ;
// float balance ;
// } ;
// In another file ‘TRANSACTIONS.DAT’ there are several records with
// the following structure:
// struct trans
// {
// int accno ;
// char trans_type ;
// float amount ;
// } ;
// The element trans_type contains D/W indicating deposit or
// withdrawal of amount. Write a program to update
// ‘CUSTOMER.DAT’ file, i.e. if the trans_type is ‘D’ then update the
// balance of ‘CUSTOMER.DAT’ by adding amount to balance for the
// corresponding accno. Similarly, if trans_type is ‘W’ then subtract
// the amount from balance. However, while subtracting the amount
// ensure that the amount should not get overdrawn, i.e. at least 100
// Rs. should remain in the account.

#include <stdio.h>
#include <stdlib.h>
struct customer
{
    int accno;
    char name[30];
    float balance;
};
struct trans
{
    int accno;
    char trans_type;
    float amount;
};
int main()
{
    struct customer s;
    struct trans ss;
    FILE *fs, *ft;
    int slen = sizeof(struct customer);
    fs = fopen("TRANSACTION.DAT", "rb");
    if (fs == NULL)
    {
        puts("Cannot open file: TRANSACTION.DAT\n");
        exit(1);
    }
    ft = fopen("CUSTOMER.DAT", "rb+");
    if (ft == NULL)
    {
        puts("Cannot open file: CUSTOMER.DAT\n");
        fclose(fs);
        exit(2);
    }
    while (fread(&ss, sizeof(ss), 1, fs) == 1)
    {
        fseek(ft, 0, SEEK_SET);
        while (fread(&s, slen, 1, ft) == 1)
        {
            if (s.accno == ss.accno)
            {
                if (ss.trans_type == 'D')
                    s.balance += ss.amount;
                else
                {
                    if ((ss.trans_type == 'W') && (s.balance - ss.amount > 100))
                        s.balance -= ss.amount;
                    else
                        s.balance = 100;
                }
                fseek(ft, -slen, SEEK_CUR);
                fwrite(&s, slen, 1, ft);
                break;
            }
        }
    }
    fclose(fs);
    fclose(ft);
    return 0;
}
