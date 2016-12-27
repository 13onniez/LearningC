#include <math.h>


int square(int base){
    int res = base * base;
    return res;
}
double vectorlength(double num1, double num2, double num3) {
    
//    double sumOfSquare = square(num1) + square(num2) + square(num3);
//    double vectorL = sqrt(sumOfSquare);
//    return vectorL;
    
    double powerOne = pow(num1, 2);
    double powerTwo = pow(num2, 2);
    double powerThree = pow(num3, 2);
    double sumOfSquares = powerOne + powerTwo + powerThree;
    double vectorL = sqrt(sumOfSquares);
    return vectorL;
    
    /* answer: 
     * return(sqrt(x*x + y*y + z*z)); 
     */
    
}