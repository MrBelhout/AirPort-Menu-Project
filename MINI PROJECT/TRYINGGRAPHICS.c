#include <stdio.h>
#include<stdlib.h>
//to use 'textbackground'
#include <conio.h>

int main()
{
	// setting the color of background
	textbackground(8);

	// message 
	cprintf("Change the background color to green");

	getch();
	return 0;
}