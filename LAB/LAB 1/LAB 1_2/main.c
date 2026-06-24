#include <stdio.h>
#include <stdlib.h>


int main(){

	int time;
	int hours,minutes,seconds;
	int remainingSeconds;

	int secondsInHour = 60 * 60;
	int secondsInMinute = 60;

	scanf("%d",&time);

	hours = (time/secondsInHour);
	remainingSeconds = time - (hours * secondsInHour);
	minutes = remainingSeconds/secondsInMinute;
	remainingSeconds = remainingSeconds - (minutes*secondsInMinute);
	seconds = remainingSeconds;

	printf("%d:%d:%d\n",hours,minutes,seconds);
}
