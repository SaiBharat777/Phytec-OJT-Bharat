/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application:
 * Brief:
 * Author: Sanketh J H
 * Title: Trainee
 * Last Modified Date: 23.03.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>
int main()
{
     int a = 10, b = 15, sum, diff, product, division, modulus;
     sum = a + b;
     diff = a - b;
     product = a * b;
     division = a / b;
     modulus = a % b;
     a++;
     b--;
     printf("Addition       : a+b = %d \n", sum);
     printf("Subtraction    : a-b = %d \n", diff);
     printf("Multiplication : a*b = %d \n", product);
     printf("Division       : a/b = %d \n", division);
     printf("Modulo Division: %d \n", modulus);
     printf("Increment the value of a by 1  : %d \n", a++);
     printf("Decremented the value of b by 1: %d \n", b--);
     return 0;
}

// Program End
