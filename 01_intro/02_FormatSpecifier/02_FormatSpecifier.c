/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: Example for format specifiers
 * Brief: 
 * Author: Sanketh J H
 * Title: Trainee
 * Last Modified Date: 23.03.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

int main() {
    int i = 123456;
    char c = 'A';
    float f = 3.2;
    double d = 987.123456;
    char str[] = "RuggedBoard";

    printf("integer is : %d\n", i);
    printf("character is : %c\n", c);
    printf("float is : %f\n", f);
    printf("double is : %lf\n", d);
    printf("string is : %s\n", str);

    return 0;
}

