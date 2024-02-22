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
     char sentence[1000];

     // Creating a file
     fptr = fopen("test.txt", "w");

     if (fptr == NULL)
     {
          printf("Error Creating File!");
          return 1;
     }

     // Getting input from user
     printf("Input a sentence for the file: ");
     fgets(sentence, sizeof(sentence), stdin);

     // Writing to the file
     fprintf(fptr, "%s", sentence);
     fclose(fptr);

     printf("The file test.txt created successfully...!!\n");

     return 0;
}

// Program End
