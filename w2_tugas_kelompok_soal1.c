#include <stdio.h>

int main()
{
    int sec, hours, minutes, seconds;
    printf("Input seconds: ");
    scanf("%d", &sec);

    hours = (sec / 3600);
    minutes = (sec - (3600 * hours)) / 60;
    seconds = (sec - (3600 * hours) - (minutes * 60));

    printf("%d Seconds = %d hours: %d minutes: %d seconds\n", sec, hours, minutes, seconds);
    return 0;
}