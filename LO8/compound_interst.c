#include "compound_interst.h"
#include <cmath>

double compound_interest(double principal, double rate, int times_compounded, int years) {
    // Convert percentage rate to a decimal
    double r = rate / 100.0;
    // Calculate the compound interest using the formula A = P (1 + r/n)^(nt)
    double amount = principal * pow((1 + r / times_compounded), times_compounded * years);
    return amount;
}

