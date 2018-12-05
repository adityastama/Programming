#include <stdio.h>

void pecahan();
int main()
{
	pecahan();
}

void pecahan()
{
	int a,b,c,t;

	printf("masukan pembilang : ");
	scanf ("%d",&a);

	printf("masukan penyebut : ");
	scanf ("%d",&b);

	t = a/b;
	c = a%b;

	if (a%b == 0)
		printf("bilangan (%d/%d) \ndi sederhanakan menjadi %d ",a,b,t);

	else if (a%b != 0)
		printf("bilangan (%d/%d) \ndi sederhanakan menjadi (%d %d/%d)",a,b,t,c,b);
}
