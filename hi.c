/*
 * The program proves that the base 10 system counts from 0 to 9 by extracting
 * the singular digit numbers from a multi-digit form, adding all the single digit numbers together.
 * The calculated numbers will subtract from the user's inputted whole number.
 *
 * Results expected: All numbers above or equal to 10 will be divisible by 9.
 *
 */

/*
 * Text example:
 *
 * User inputs: 31
 * 31 = 3 + 1
 * 31 - 4 = 27
 *
 * 27 is divisible by 9
 *
 */



#include<stdio.h>
#include<limits.h>


int main()
{
    /* Initialize the Number and Result */
    int num;
    int result;
    int num1 = 2147483627;

    /* User input points into Num */
    printf("Enter a number larger or equal to 10: ");
    scanf("%d",&num);


    while(num)
    {
        if(num1 > INT_MAX - num && num <= 0){ // Checks if Int is overflowing or in negative
            printf("Number is out of range or a negative\n");
            return -1; // Return to a negative
        }
        else if(num < 10){ // Checks if number is between 1 and 10
            printf("Number is too small!\n");
            break;
        }
        else{

            int div = num / 10; // Break down first number
            int rem = num % 10; // Break down second number

            result = num - (div + rem); // User inputted number minus the obtained singular numbers

            if(result % 9 == 0){ // Prove a number is divisible by 9
                printf("The number %d is divisible by 9.\n", result); // Output final result
                break;
            }
            else{
                printf("You just proved the Matrix is real with %d\n", result);
                break;
            }
        }
    }


    return 0;
}
