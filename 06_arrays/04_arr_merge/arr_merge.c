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
 * Last Modified Date: 30.03.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

int main()
{
    int arr1[100], arr2[100], arr3[200], size1, size2, size3;

    printf("Please enter the size of the first array: ");
    scanf("%d", &size1);

    printf("Please enter the elements of the first array: ");
    for (int i = 0; i < size1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Your first array is: ");
    for (int i = 0; i < size1; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    printf("Please enter the size of the second array: ");
    scanf("%d", &size2);

    printf("Please enter the elements of the second array: ");
    for (int i = 0; i < size2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    printf("Your second array is: ");
    for (int i = 0; i < size2; i++)
    {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    size3 = size1 + size2;

    for (int i = 0; i < size1; i++)
    {
        arr3[i] = arr1[i];
    }

    for (int i = 0; i < size2; i++)
    {
        arr3[size1 + i] = arr2[i];
    }

    printf("After merging the two arrays, the resultant array is: ");
    for (int i = 0; i < size3; i++)
    {
        printf("%d ", arr3[i]);
    }
    printf("\n");

    return 0;
}

// Program End
