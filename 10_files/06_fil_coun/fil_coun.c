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
 * Last Modified Date: 01.04.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_LENGTH 100

int main()
{
     char filename[MAX_LENGTH];
     FILE *fp;
     int char_count = 0, word_count = 0;
     char c, prev = ' ';

     printf("Count the number of words and characters in a file :\n");
     printf("---------------------------------------------------------\n");

     printf("Input the filename to be opened : ");
     scanf("%s", filename);

     fp = fopen(filename, "r");
     if (fp == NULL)
     {
          printf("Failed to open file\n");
          return 1;
     }

     while ((c = fgetc(fp)) != EOF)
     {
          char_count++;

          if (isspace(c) && !isspace(prev))
          {
               word_count++;
          }
          prev = c;
     }

     fclose(fp);

     printf("The content of the file %s are :\n", filename);
     fp = fopen(filename, "r");
     if (fp == NULL)
     {
          printf("Failed to open file\n");
          return 1;
     }
     while ((c = fgetc(fp)) != EOF)
     {
          printf("%c", c);
     }
     fclose(fp);

     printf("\nThe number of words in the file %s are : %d\n", filename, word_count);
     printf("The number of characters in the file %s are : %d\n", filename, char_count);

     return 0;
}

// Program End
