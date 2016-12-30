#include <stdio.h>
#include <math.h>
#include "source.h"



void simple_sum(void)
{
    int a, b;
    float d,e;
    
    scanf("%d %d", &a, &b);
    scanf("%f %f", &d, &e);
//    scanf("%d", &b);
    
    int c = a + b;
    printf("%d + %d = %d\n", a,b,c);
  
    
    float f = d + e;
    printf("%2.1f + %2.1f = %f\n", d,e,f);
    
    
    
}


void simple_math(void)
{
}
