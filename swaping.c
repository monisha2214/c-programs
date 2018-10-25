 #include<stdio.h>
 #include<conio.h>
 void main()
{
	int x,y,temp;
	clrscr();
	printf("enter two integer values\n")
	scanf("%d%d",&x,&y);
	printf("before swaping \n first integer=%d \n second integer=%d \n",x,y);
	 temp=x;
	 x=y;
	 y=temp;
	printf("after swaping \n first integer=%d \n second integer=%d \n"x,y);
	return=0 
} 