#include <stdio.h> 
int main() 
{ 
	int x = 20, y = 10; 

	// Code to swap 'x' and 'y' 
	x = x + y; // x now becomes 30 
	y = x - y; // y becomes 20  
	x = x - y; // x becomes 10 

	printf("After Swapping: x = %d, y = %d", x, y); 

	return 0; 
} 
