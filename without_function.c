/**
* This code has no separate function. To keep it short, the program is written specifically for the test case (5,6)(11,9).
*/	

#include<stdio.h>  // Header file that includes function like printf and scanf
#include <stdlib.h> // Header file that includes absolute function

void main()
{
	int x0, y0, x1, y1, 
	dx, dy, p, x, y;  // All variables are integers, the main difference between DDA and Bresenhams.
    
	printf("Enter the co-ordinates of first point (x0,y0): ");  // Taking inputs from the user
	scanf("%d%d", &x0, &y0);                                   // Storing the input values in integer variables
     
	printf("Enter the co-ordinates of second point (x1,y1): ");
	scanf("%d%d", &x1, &y1);

    dx=abs(x1-x0);     // Absolute works like modulus, only positive magnitude is considered.
	dy=abs(y1-y0);
 
	x=x0;       // For this specific test case(5,6)(11,9), slope<1 and we know start points will be x0,y0 (x1>x0).
	y=y0;
	p=2*dy-dx;  // Calculating decision parameter
 
	while(x<=x1)    // Loop will keep getting executed till the condition remains true.
	{
		if(p<0)     // Every iteration, one of the condiitons from if-else will be executed.
		{
            printf("\ncoordinate=%d,%d",x,y);
			p=p+2*dy;   
		}
		else
		{
			printf("\ncoordinate=%d,%d",x,y);
			y=y+1;
			p=p+2*dy-2*dx;
		}
		x=x+1;  // This can also be written as x+=1
	}
}