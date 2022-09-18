#include <stdio.h>
#include <cs50.h>

// Simple Banking System by Mohamed Mostafa

// Functions Declaration
void deposit(void);
void withdraw(void);
void useractions(void);

// Main Function
int main(void)
{

// Variables Declaration
long acc_number = 1478523690;long acc_credentials = 369852147;long account_number;long account_password;

    account_number = get_long("\n\n[*] Enter Your Bank Account Number: ");

    account_password = get_long("\n\n[*] Enter Your Bank Account Password: ");

    if(account_number == acc_number && account_password == acc_credentials)
    {
        printf("\n\n\n\n\n\n\n\n\n[*] Account Found!, Getting Account Information..\n\n");
        printf("\n[!] Name: Mohamed Mostafa || Phone: +142121452110 || Email: mohamed.mostafa@email.com\n\n");
        useractions();
    }
    else
    {
        printf("\n\n[x] Incorrect Account Number Or Password.\n\n");
    }
}

void useractions(void)
{
    int balance = 100000;int actions;int back;
    do
    {
        actions = get_int("\n[!] Acount Management Console\n\n (1) Deposit\n\n (2) Withdraw\n\n (3) Account Balance \n\n (4) Logout\n\n[!] Choose Action: ");

    }while(actions < 1 || actions > 4);

    if(actions == 1)
    {
        deposit();
    }
    else if(actions == 2)
    {
        withdraw();
    }
    else if(actions == 3)
    {
        printf("\n\n[$] Your Balance is: %i%s\n\n",balance,"$");
        do
        {
            back = get_int("(1) Back To Main Menu?: ");
            if(back == 1)
            {
                useractions();
            }
        }while(back != 1);
    }
    else if(actions == 4)
    {
        printf("\n\n[-] Logging Out..\n\n");
    }
}

void deposit(void)
{
    char question;
    int deposit_amount = get_int("\n\n[?] Enter The Amount Of Money To Deposit: ");
    printf("\n\n[*_*] Money Deposit Successfully Added\n\n[$] Current Balance is: %i%s\n",deposit_amount + 100000,"$");
    do
    {
        question = get_char("\n\n[?] Do You Wish To Do Another Action? (Y / N): ");
        if (question == 'Y' || question == 'y')
        {
            useractions();
        }
        else if(question == 'N' || question == 'n')
        {
            printf("\n\n[-] Good Bye Mohamed, Logging out..\n\n");
        }
    }while(question != 'y' && question != 'n' && question != 'Y' && question != 'N');


}

void withdraw(void)
{
    char question;
    int withdraw_amount = get_int("\n\n[?] Enter The Amount Of Money To Withdraw: ");
    printf("\n\n[*_*] Money Withdrawed Sucessfully! \n\n[$] Current Balance is: %i%s\n",100000 - withdraw_amount,"$");
    do
    {
        question = get_char("\n\n[?] Do You Wish To Do Another Action? (Y / N): ");
        if (question == 'Y' || question == 'y')
        {
            useractions();
        }
        else if(question == 'N' || question == 'n')
        {
            printf("\n\n[-] Good Bye Mohamed, Logging out..\n\n");
        }
    }while(question != 'y' && question != 'n' && question != 'Y' && question != 'N');
}
