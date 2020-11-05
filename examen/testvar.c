#include <stdio.h>
#include <stdlib.h>
#include "var.h"
int main()
{


int n =5 ;
int t [5] = {2,5,7,2,9};
float  var1; 
var(t,n,&var1);

    printf("%f \n" , var1);
    return 0;
}

