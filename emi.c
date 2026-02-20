#include <stdio.h>
#include <math.h>

int main()
{
    float loanAmount, annualInterestRate;
    int tenureMonths;
    float monthlyInterestRate, emi;
    float totalPayment, totalInterest;

    printf("===== EMI CALCULATOR =====\n");

    printf("Enter Loan Amount (Rs): ");
    scanf("%f", &loanAmount);

    printf("Enter Annual Interest Rate (in %%): ");
    scanf("%f", &annualInterestRate);

    printf("Enter Loan Tenure (in months): ");
    scanf("%d", &tenureMonths);

    // Convert annual interest to monthly
    monthlyInterestRate = annualInterestRate / (12 * 100);

    // EMI Formula
    emi = (loanAmount * monthlyInterestRate * pow(1 + monthlyInterestRate, tenureMonths)) /
          (pow(1 + monthlyInterestRate, tenureMonths) - 1);

    totalPayment = emi * tenureMonths;
    totalInterest = totalPayment - loanAmount;

    printf("\n----------------------------------");
    printf("\nMonthly EMI = Rs %.2f", emi);
    printf("\nTotal Payment = Rs %.2f", totalPayment);
    printf("\nTotal Interest = Rs %.2f", totalInterest);
    printf("\n----------------------------------");

    printf("\nThank You!\n");

    return 0;
}
