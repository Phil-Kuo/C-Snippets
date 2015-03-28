#include <stdio.h>

int
main (void)
{
    float loan, interest_rate, monthly_payment, remaining_loan_after_one_month, remaining_loan_after_two_month, remaining_loan_after_three_month;
    
    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest  rate: ");
    scanf("%f", &interest_rate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);
    
    remaining_loan_after_one_month = loan - monthly_payment + loan * interest_rate / 1200;
    remaining_loan_after_two_month = remaining_loan_after_one_month - monthly_payment + remaining_loan_after_one_month * interest_rate / 1200;
    remaining_loan_after_three_month = remaining_loan_after_two_month - monthly_payment + remaining_loan_after_two_month * interest_rate / 1200;
    
    printf("Balance remaining after first payment: %.2f\n", remaining_loan_after_one_month);
    printf("Balance remaining after second payment: %.2f\n", remaining_loan_after_two_month);
    printf("Balance remaining after third payment: %.2f\n", remaining_loan_after_three_month);
    
    return 0;
}

