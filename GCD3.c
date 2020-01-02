
//logic 3 recursive
#include <stdio.h>
int hcf(int n1, int n2, int c);
int c;
int main() 
{
    int n1, n2;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    c = n1>n2?n1:n2;
    if(n1 == 0|| n2 == 0)
    	printf("G.C.D of %d and %d is %d", n1, n2, c);
    else
    	printf("G.C.D of %d and %d is %d.", n1, n2, hcf(n1, n2, c));
    return 0;
}
int hcf(int n1, int n2, int c) 
{
	if(c % n1 == 0 && c % n2 ==0)
		return (n1 * n2)/c;
	else
		return hcf(n1, n2, c+1);
}


//logic 3 iterative
#include <stdio.h>
int hcf(int a, int b);
int a, b, c;
int main() 
{
    int n1, n2;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    c = n1>n2?n1:n2;
    if(n1 == 0 || n2 == 0)
    	printf("G.C.D of %d and %d is %d", n1, n2, c);
    else
    	printf("G.C.D of %d and %d is %d.", n1, n2, hcf(n1, n2));
    return 0;
}

int hcf(int a, int b)
{
	while(c <= a * b)
	{
		if(c % a == 0 && c % b == 0)
			break;
		c++;
	}
	return (a * b) / c;
}