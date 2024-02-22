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

int main() {
   char str[100];
   int i, j, len;
   int flag = 1;

   printf("Enter your string for palindrome: ");
   scanf("%[^\n]s", str); // Use %[^\n]s instead of %s to read the entire line

   len = strlen(str);

   for(i = 0, j = len - 1; i < len/2 && j >= len/2; i++, j--){
      if(str[i] != str[j]){
         flag = 0;
         break;
      }
   }

   printf("Entered string is:%s\n",str);

   if(flag){
      printf("Given string is in palindrome\n");
   }
   else{
      printf("Not in palindrome\n");
   }

   return 0;
}

// Program End
