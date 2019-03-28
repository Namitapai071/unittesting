#include<assert.h>
#include "calcu.h"

void addition_test()
{
    printf("Testing Addition function\n");
    assert(simple_calculator(4,'+',2)==6);
    assert(simple_calculator(8,'+',-2)==(6));
    assert(simple_calculator(-4,'+',-2)==(-6));
    printf("OK, Addition Tested and working\n");
}

void division_test()
{
    printf("Testing division function\n");
    assert(simple_calculator(1,'!',0)==(0));
    assert(simple_calculator(4,'!',-2)==(-2));
    assert(simple_calculator(-4,'!',-4)==(1));
    printf("OK, Division Tested and working\n");
}
int main()
{
    addition_test();
    division_test();
    printf("Test successful\n");
    return 0;
}
