/**
* This code has a function. This program is valid for any test case.
*/

#include<stdio.h>  // Header file that includes function like printf and scanf
#include <stdlib.h> // Header file that includes absolute function
 
void drawline(int x0, int y0, int x1, int y1)  // Function Declaration
{
    int dx, dy, p, x, y, two_Dy, two_DyDx, x_End;  // All variables are integers, the main difference between DDA and Bresenhams.
 
	dx = abs(x1-x0);    // Absolute works like modulus, only positive magnitude is considered.
	dy = abs(y1-y0);

	p = 2*dy-dx;   // Calculating decision parameter

    two_Dy = 2*dy;
    two_DyDx = 2*(dy-dx);

    if(x0>x1)  // Checking for the conditon and accordingly selecting our start points.
    {
        x=x1;
        y=y1;
        x_End=x0;
    }
    else 
    {
        x=x0;
        y=y0;
        x_End=x1;
    }
 
	while(x<=x_End)       // Loop will keep getting executed till the condition remains true.
	{
		if(p<0)          // Every iteration, one of the condiitons from if-else will be executed.
		{
            printf("\ncoordinate=%d,%d",x,y);
			p=p+2*dy; 
		}
		else // p>=0
		{
			printf("\ncoordinate=%d,%d",x,y);
			y=y+1;
			p=p+2*dy-2*dx;
		}
		x=x+1;         // This can also be written as x+=1
	}
}
 
void main()   // Execution of the program starts from here
{
	int x0, y0, x1, y1;
    
	printf("Enter the co-ordinates of first point (x0,y0): ");     // Taking inputs from the user
	scanf("%d%d", &x0, &y0);                                      // Storing the input values in integer variables
  
	printf("Enter the co-ordinates of second point (x1,y1): ");
	scanf("%d%d", &x1, &y1);
	drawline(x0, y0, x1, y1);   // Function Call
}