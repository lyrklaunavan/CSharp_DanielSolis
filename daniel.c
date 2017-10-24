```c

/*
Name:
Copyright:
Author: https://stackoverflow1453.wordpress.com/
Date:  4/9/2014 2:36:33 PM
Description: pointer to a function
*/

#include 
int cube(int x);

int cube(int x){

	return x*x*x;

}

//main method
int main(void){

	//p is a pointer to a function whose argument is an integer and returns an integer

	int(*p) (int m);

	//assign cube function's address to p
	p = cube;

	//call the function by using pointer to a function
	printf("%d", p(9));

	getchar();

}
```
