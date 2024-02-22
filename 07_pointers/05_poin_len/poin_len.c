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
 * Last Modified Date: 30.03.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

int main() {
    char str[100], *ptr;
    int len = 0;

    printf("Pointer : Calculate the length of the string :\n");
    printf("---------------------------------------------------\n");

    printf("Input a string : ");
    fgets(str, sizeof(str), stdin);  // Read string from user input

    ptr = str;  // Assign the address of str[0] to ptr

    while (*ptr != '\0') {  // Loop until null character is found
        len++;  // Increment length for each character
        ptr++;  // Move the pointer to the next character
    }

    printf("The length of the given string %s is : %d\n", str, len);

    return 0;
}


// Program End
