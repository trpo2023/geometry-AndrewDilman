#include <stdio.h>
#define pi 3.1415

int main()
{
	FILE *myfile;
	myfile = fopen("circle.txt", "r");
	char k[128]=gets();
	printf("%s",k);
	return 0;
}

int CheckInput()
{
	
}

int Circle(int x, int y, int r)
{
	int p = 2 * r * 3.1415; // perimetr
	int s = 3.1415 * r * r; // square
}
