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
     int num1, num2;

     printf("Enter Two Numbers:\n");
     scanf("%d %d", &num1, &num2);

     int max = (num1 > num2) ? num1 : num2;
     int min = (num1 < num2) ? num1 : num2;

     printf("%d is greater than %d\n", max, min);

     return 0;
}

// Program End
