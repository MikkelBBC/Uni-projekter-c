#include "compound_interest.h"
#include <math.h>

double calculateCompoundInterest(double principal, double rate, int timesCompounded, int years) {
    return principal * pow((1 + rate / timesCompounded), timesCompounded * years);
}