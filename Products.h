
//  Andie Schwartz


#include <string>
#include <iomanip>
#include <iostream>
#ifndef Products_h
#define Products_h


using namespace std;


class Payments
{
    
public:
    int creditScore;
    double selectedInterest, payment, principle, interestPayment, leftOver, totalCost;
    double interest1, interest2, interest3, interest4, interest5;
  
    // Capital One Interest Calculator
    double CalcInterest1(int creditScore)
    {
        if (creditScore <= 850 && creditScore >= 800)
            return 0.032;
        else if (creditScore < 800 && creditScore >= 740)
            return 0.05;
        else if (creditScore < 740 && creditScore >= 670)
            return 0.063;
        else if (creditScore < 670 && creditScore >= 580)
            return 0.074;
        else if (creditScore < 580 && creditScore >= 300)
            return 0.09;
        else
            return 0;
    }

    // Wells Fargo Interest Calculator
    double CalcInterest2(int creditScore)
    {
        if (creditScore <= 850 && creditScore >= 800)
            return 0.034;
        else if (creditScore < 800 && creditScore >= 740)
            return 0.048;
        else if (creditScore < 740 && creditScore >= 670)
            return 0.06;
        else if (creditScore < 670 && creditScore >= 580)
            return 0.071;
        else if (creditScore < 580 && creditScore >= 300)
            return 0.084;
        else
            return 0;
    }
    
    // Navy Federal Interest Calculator
    double CalcInterest3(int creditScore)
    {
        if (creditScore <= 850 && creditScore >= 800)
            return 0.03;
        else if (creditScore < 800 && creditScore >= 740)
            return 0.041;
        else if (creditScore < 740 && creditScore >= 670)
            return 0.062;
        else if (creditScore < 670 && creditScore >= 580)
            return 0.079;
        else if (creditScore < 580 && creditScore >= 300)
            return 0.10;
        else
            return 0;
    }
    
    // Chase Interest Calculator
    double CalcInterest4(int creditScore)
    {
        if (creditScore <= 850 && creditScore >= 800)
            return 0.028;
        else if (creditScore < 800 && creditScore >= 740)
            return 0.039;
        else if (creditScore < 740 && creditScore >= 670)
            return 0.062;
        else if (creditScore < 670 && creditScore >= 580)
            return 0.089;
        else if (creditScore < 580 && creditScore >= 300)
            return 0.11;
        else
            return 0;
    }
    
    // Bank of America Interest Calculator
    double CalcInterest5(int creditScore)
    {
        if (creditScore <= 850 && creditScore >= 800)
            return 0.035;
        else if (creditScore < 800 && creditScore >= 740)
            return 0.042;
        else if (creditScore < 740 && creditScore >= 670)
            return 0.053;
        else if (creditScore < 670 && creditScore >= 580)
            return 0.082;
        else if (creditScore < 580 && creditScore >= 300)
            return 0.094;
        else
            return 0;    }
    
    // Calculate the total loan amount
    double CalcTotal(double interest, double price)
    {
        totalCost = ((interest * price) + price);
        return totalCost;
    }
    
    double CalcMonthlyPayment(int months, double totalCost)
    {
        return (totalCost / months);
    }
    
    // Calculate the monthly payments and display
    void CalcAndDisplay(int months, double price, double interest, double monthlyPayment)
    {
        double interestAmount;
        double principleAmount;
        
        
        
        for (int i =  0; i < months; i ++)
        {
            interestAmount = (totalCost * (interest/12));
            principleAmount = monthlyPayment - interestAmount;
            totalCost = totalCost - principleAmount - interestAmount;
            
            
            cout << fixed << setprecision(2) << "Month " << (i + 1) << ": $" << monthlyPayment << "  |  Interest Amount: $" << interestAmount << "  |  Principle Amount: $" << principleAmount <<
            "  |  Total Cost Left Over: $" << totalCost << endl;
        }
    }
};

#endif /* Products_h */
