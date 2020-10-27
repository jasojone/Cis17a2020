// Attached: 
// ===============================================================
// File: HW_1a.cpp
// ===============================================================
// Programmer: Jason Jones
// Class: CIS 17A 
// Instructor: Dennis Rainey
//
// Description:
//      This program will calculate the payment amount for a sales  
//      rep. The pay amount includes base pay of $2,500 plus
//      a commission. Commissions are based on sales amount totals.
//      Sales must be more than $25,000 to warrant a commission.
//      Sales between $25,000 and $50,000 warrent 1.5% commission
//      Sales over $50,000 warrent 2% commission. 
//      The user will enter the sales amount and the commission 
//      will be calculated and displayed on the screen.
// ===============================================================
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

float getSalesAmt(float);
float calcCommission(float, float);
float calcPay(float, float, float, float);
char displayPay(float, float, float, float, char);
//===== main =====================================================
// The main functon will just start the user choice loop and call
// all the functions
//================================================================
int main()
{
    float basePay = 2500;
    float totalPay = 0;
    float totalSales = 0;
    float commission = 0;
    char runProgram = 'y';

        do
        {

            totalSales = getSalesAmt(totalSales);
            commission = calcCommission(commission, totalSales);
            totalPay = calcPay(totalPay, commission, basePay, totalSales);
            displayPay(totalSales, totalPay, commission, basePay, runProgram);
        } while (runProgram == 'y' || runProgram == 'Y');

     return 0;
}
//===== getSalesAmt ==============================================
// getSales will gain user input of their sales totals then retrun 
// it to main as totalSales 
//Input: float value which is the sales amount 
//Output: float value which is the sales amount 
//================================================================
float getSalesAmt(float totalSales)
{
    cout << "Please enter the total sales amount" <<  endl;
    cin >> totalSales;
    return totalSales;
}
//===== calcCommission ===========================================
// calcCommission will determine commission rates earned from sales
// then determine the amount of commissions made.
// Commissions are based on sales amount totals.
// Sales must be more than $25,000 to warrant a commission.
// Sales between $25,000 and $50,000 warrent 1.5% commission
// Sales over $50,000 warrent 2% commission.
// Input: two float values the commission and the totalsale
// Output: the calulated commission
//================================================================
float calcCommission(float commission, float totalSales)
{
    if (totalSales >= 25000 && totalSales <= 49999.99)
    {
        commission = totalSales * .15;

        return commission;
    }
    else if (totalSales >= 50000)
    {
        commission = totalSales * .2;

        return commission;
    }
    else
    {
        commission  = 0;

        return commission;
    }
}
//===== calcPay ==================================================
// calcPay will calculate the total pay by adding the commission to 
// the base pay.
// Input: 4 floats totalPay, commission, basePay, totalSales
// Output: float total pay which is basePay + commissions
//================================================================
float calcPay(float totalPay, float commission, float basePay, float totalSales)
{
    totalPay = basePay + commission;

    return totalPay;
}
//===== displayPay ===============================================
// displayPay will display the output and ask user if they want to
// run the program again.
// Input: 4 floats totalPay, commission, basePay, totalSales 1 char 
// runProgram
// Output: a char to determin if the program will run again.
//================================================================
char displayPay(float totalSales, float totalPay, float commission, float basePay, char runProgram)
{
   	cout << "\nMonthly Sales:   $" << fixed << setprecision(2) << showpoint << totalSales << endl;
	cout << "\nCommission:      $" << fixed << setprecision(2) << showpoint << commission << endl;
	cout << "\nBase Pay:        $" << fixed << setprecision(2) << showpoint << basePay << endl;
	cout << "\nTotal Pay:       $" << fixed << setprecision(2) << showpoint << totalPay << endl << endl;
    cout << "Would you like to calculate another payment? (y/n)" << endl;
    cin >> runProgram;
    
    if (runProgram == 'y' || runProgram == 'Y')
    {
        return 'y';
    }
    else if (runProgram == 'n' || runProgram == 'N')
    {
        exit(0);
    }
    else
    {
        cout << "Please enter a valid choice" << endl;
    }
}


