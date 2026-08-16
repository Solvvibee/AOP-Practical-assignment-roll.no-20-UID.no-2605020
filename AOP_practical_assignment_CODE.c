#include <stdio.h>

int main()
{
    char customer_Name[50];
    int account_Number;
    float balance, withdrawal_Amount;
    int correct_PIN = 1234;
    int entered_PIN;

    // Accept customer details
    printf("Enter Customer Name: ");
    scanf("%s", customer_Name);

    printf("Enter Account Number: ");
    scanf("%d", &account_Number);

    printf("Enter Available Balance: Rs.");
    scanf("%f", &balance);

    printf("Enter ATM PIN: ");
    scanf("%d", &entered_PIN);

    printf("Enter Withdrawal Amount: Rs.");
    scanf("%f", &withdrawal_Amount);

    // Verify PIN
    if (entered_PIN != correct_PIN)
    {
        printf("\nInvalid PIN. Transaction Failed.\n");
    }
    // Verify withdrawal amount
    else if (withdrawal_Amount > balance)
    {
        printf("\nInsufficient Balance. Transaction Failed.\n");
    }
    // Check for valid withdrawal amount
    else if (withdrawal_Amount <= 0)
    {
        printf("\nInvalid Withdrawal Amount.\n");
    }
    // Successful transaction
    else
    {
        balance = balance - withdrawal_Amount;

        printf("\nATM Transaction Successful\n");
        printf("\nCustomer Name     : %s", customer_Name);
        printf("\nAccount Number    : %d", account_Number);
        printf("\nWithdrawal Amount : Rs.%.2f", withdrawal_Amount);
        printf("\nRemaining Balance : Rs.%.2f", balance);
        printf("\n\nThank You for Banking with Us.\n");
    }

    return 0;
}