
//logic 2 recursive
#include <stdio.h>
int hcf(int n1, int n2, int c);
int c;
int main() 
{
    int n1, n2;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    c = n1<n2?n1:n2;
    if(c == 0)
    	printf("G.C.D of %d and %d is %d.", n1, n2, n1>n2?n1:n2);	
    else
    	printf("G.C.D of %d and %d is %d.", n1, n2, hcf(n1, n2, c));
    return 0;
}
int hcf(int n1, int n2, int c) 
{
	if(n1 % c == 0 && n2 % c ==0)
		return c;
	else
		return hcf(n1, n2, c-1);
}


//logic 2 iterative
#include <stdio.h>
int hcf(int a, int b);
int a, b, c;
int main() 
{
    int n1, n2;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    c = n1<n2?n1:n2;
    if(c == 0)
    	printf("G.C.D of %d and %d is %d.", n1, n2, n1>n2?n1:n2);	
    else
    	printf("G.C.D of %d and %d is %d.", n1, n2, hcf(n1, n2, c));
    return 0;
}

int hcf(int a, int b)
{
	while(c >= 1)
	{
		if(a % c == 0 && b % c == 0)
			break;
		c--;
	}
	return c;
}