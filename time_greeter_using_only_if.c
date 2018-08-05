#include<stdio.h>
#include<conio.h>
void main()
{
	int time;
	char night[] = "Good night guys!";
	char morning[] = "Good morning guys!";
	char afternoon[] = "Good afternoon guys!";
	char evening[] = "Good evening guys!";
	printf("Enter the time in 24H format: \n");
	scanf("%d",&time);
	printf("The time you have entered is %d \n",time);
	 if(time>=0 && time<5) {
		printf("%s\n",night);
	} else if(time>=5 && time<12) {
		printf("%s\n",morning);
	} else if(time>=12 && time<16) {
		printf("%s\n",afternoon);
	} else if(time>=16 && time<19) {
		printf ("%s\n",evening);
	} else if(time>=19 && time<24) {
		printf("%s\n",night);
	}
}
