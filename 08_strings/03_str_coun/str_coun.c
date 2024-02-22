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
     char str[100];
     int i, alphabets = 0, vowels = 0, consonants = 0;

     printf("Enter a string: ");
     scanf("%[^\n]s", str); // Use %[^\n]s instead of %s to read the entire line

     for (i = 0; str[i]; i++)
     {
          if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
          {
               if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
               {
                    vowels++;
               }
               else
               {
                    consonants++;
               }
               alphabets++;
          }
     }

     printf("Number of Alphabets in given string is : %d\n", alphabets);
     printf("Number of vowels in given string is : %d\n", vowels);
     printf("Number of consonents in given string is : %d\n", consonants);

     return 0;
}

// Program End
