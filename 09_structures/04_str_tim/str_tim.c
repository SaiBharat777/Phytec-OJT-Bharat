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

struct TIME
{
     int seconds;
     int minutes;
     int hours;
};

void differenceBetweenTimePeriod(struct TIME t1, struct TIME t2, struct TIME *diff);

int main()
{
     struct TIME startTime, stopTime, diff;

     printf("Enter the start time.\n");
     printf("Enter hours, minutes and seconds: ");
     scanf("%d %d %d", &startTime.hours, &startTime.minutes, &startTime.seconds);

     printf("\nEnter the stop time.\n");
     printf("Enter hours, minutes and seconds: ");
     scanf("%d %d %d", &stopTime.hours, &stopTime.minutes, &stopTime.seconds);

     differenceBetweenTimePeriod(startTime, stopTime, &diff);

     printf("\nTime Difference: %d:%d:%d - %d:%d:%d = %d:%d:%d\n", startTime.hours, startTime.minutes, startTime.seconds, stopTime.hours, stopTime.minutes, stopTime.seconds, diff.hours, diff.minutes, diff.seconds);

     return 0;
}

void differenceBetweenTimePeriod(struct TIME start, struct TIME stop, struct TIME *diff)
{
     while (stop.seconds > start.seconds)
     {
          --start.minutes;
          start.seconds += 60;
     }
     diff->seconds = start.seconds - stop.seconds;

     while (stop.minutes > start.minutes)
     {
          --start.hours;
          start.minutes += 60;
     }
     diff->minutes = start.minutes - stop.minutes;
     diff->hours = start.hours - stop.hours;
}

// Program End
