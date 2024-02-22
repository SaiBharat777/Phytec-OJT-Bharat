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

int main()
{
     FILE *fptr;
     char filename[100], c;

     printf("Input the filename to be opened: ");
     scanf("%s", filename);

     // Opening the file
     fptr = fopen(filename, "r");

     if (fptr == NULL)
     {
          printf("Error Opening File!\n");
          return 1;
     }

     // Reading and printing the contents of the file
     printf("\nThe content of the file %s is : \n\n", filename);
     c = fgetc(fptr);
     while (c != EOF)
     {
          printf("%c", c);
          c = fgetc(fptr);
     }

     fclose(fptr);

     return 0;
}
// Program End
