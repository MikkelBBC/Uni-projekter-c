#ifndef COMPUND_INTEREST_H
#define COMPUND_INTEREST_H

double calculateCompoundInterest(double principal, double rate, int timesCompounded, int years) {
    return principal * pow((1 + rate / timesCompounded), timesCompounded * years);
}

#endif // COMPUND_INTEREST_H


