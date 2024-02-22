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
#include <string.h>

int main()
{
     char str[20];
     int i;

     printf("Enter a string: ");
     scanf("%s", str);

     for (i = 0; str[i]; i++)
     {
          if (str[i] >= 'A' && str[i] <= 'Z')
          {
               str[i] = str[i] + ('a' - 'A');
          }
          else if (str[i] >= 'a' && str[i] <= 'z')
          {
               str[i] = str[i] - ('a' - 'A');
          }
     }

     printf("The changed case is : %s\n", str);
     return 0;
}
// Program End
