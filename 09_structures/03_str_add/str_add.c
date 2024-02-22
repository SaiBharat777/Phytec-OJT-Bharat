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
 * Last Modified Date: 31.03.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

struct complex
{
     float real;
     float imag;
};

void add(struct complex c1, struct complex c2, struct complex *result);

int main()
{
     struct complex num1, num2, result;

     printf("For 1st complex number:\n");
     printf("Enter the real and imaginary parts: ");
     scanf("%f %f", &num1.real, &num1.imag);

     printf("\nFor 2nd complex number:\n");
     printf("Enter the real and imaginary parts: ");
     scanf("%f %f", &num2.real, &num2.imag);

     add(num1, num2, &result);

     printf("\nSum = %.1f + %.1fi", result.real, result.imag);

     return 0;
}

void add(struct complex c1, struct complex c2, struct complex *result)
{
     result->real = c1.real + c2.real;
     result->imag = c1.imag + c2.imag;
}

// Program End
