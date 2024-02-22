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

struct student
{
     char name[50];
     float marks;
} s[5];

int main()
{
     int i;

     printf("Enter information of students:\n");

     // storing information
     for (i = 0; i < 5; ++i)
     {
          printf("\nFor roll number%d,\nEnter first name: ", i + 1);
          scanf("%s", s[i].name);

          printf("Enter marks: ");
          scanf("%f", &s[i].marks);
     }

     printf("\nDisplaying Information:\n\n");

     // displaying information
     for (i = 0; i < 5; ++i)
          printf("Roll number:%d\nFirst name: %s\nMarks: %.1f\n\n", i + 1, s[i].name, s[i].marks);

     return 0;
}

// Program End
