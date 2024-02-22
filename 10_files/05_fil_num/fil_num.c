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

int main()
{
     char filename[100];
     FILE *fp;
     int count = 0;
     char c;

     printf("Read the file and count the number of lines :\n");
     printf("--------------------------------------------------\n");

     printf("Input the file name to be opened : ");
     scanf("%s", filename);

     fp = fopen(filename, "r");
     if (fp == NULL)
     {
          printf("Failed to open file\n");
          return 1;
     }

     while ((c = fgetc(fp)) != EOF)
     {
          if (c == '\n')
          {
               count++;
          }
     }

     fclose(fp);

     printf("The lines in the file %s are : %d\n", filename, count);

     return 0;
}

// Program End
