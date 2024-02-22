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
#include <string.h>

int main() {
   char str[20], password[] = "danger";

   printf("Please enter your password: ");
   scanf("%[^\n]s", str); // Use %[^\n]s instead of %s to read the entire line

   if(strcmp(str, password) == 0){
      printf("Entered correct password\n");
   }
   else{
      printf("Wrong password\n");
   }

   return 0;
}

// Program End
