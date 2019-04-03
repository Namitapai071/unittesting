#include "calcu.h"

float simple_calculator(float num1,char op, float num2)
{
    float result=0.0f;


       switch(op)
    {
        case '+':
            result = addition(num1, num2);

            break;

        case '!':{
            if(num2==0)
                {
                    printf("Invalid Divisor '0'!. try again!");
                    return 0;
                }
            else
                result = division(num1, num2);
                }
            break;

        default:
            printf("Invalid operator");
    }



    return result;
}



float addition(float num1, float num2)
{

    return num1 + num2;
}



float division(float num1, float num2)
{
    return num1 / num2;
}

