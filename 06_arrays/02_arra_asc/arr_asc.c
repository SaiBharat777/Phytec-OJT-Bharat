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
 * Last Modified Date: 29.03.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

int main()
{
     int size, arr[50], i, j, temp;
     printf("Enter size of array: ");
     scanf("%d", &size);
     printf("Enter elements in array: ");
     for (i = 0; i < size; i++)
     {
          scanf("%d", &arr[i]);
     }

     for (i = 0; i < size; i++)
     {
          for (j = i + 1; j < size; j++)
          {
               if (arr[i] > arr[j])
               {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
               }
          }
     }

     printf("Array in ascending order: \n");
     for (i = 0; i < size; i++)
     {
          printf("%d\t", arr[i]);
     }

     return 0;
}

// Program End
