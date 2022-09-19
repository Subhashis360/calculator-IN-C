#include <stdio.h>

int main () {
int x;
int y;
float result;
int z;

printf ("Enter First number : ");
scanf("%d",&x);

printf ("Enter 2nd number : ");
scanf("%d",&y);

printf ("Your Input data is %d & %d \n ",x,y);

printf ("1 for Addition \n 2 for substraction \n 3 for Multiply \n 4 for Divition \n");

printf ("Please select any options Bellow \n");
scanf("%d",&z);

while ( z >= 5 ) 
{ 
	printf ("Please select any valid options\n");
	scanf("%d",&z);
}

	if ( z == 1 )
	{
		result = (x + y);
		printf ( "The Addition value is %f \n",x,y,result);
	}
	if ( z == 2 )
	{ 
		result = (x - y);
		printf ( "The substract value is %f \n",x,y,result);
	}

	if ( z == 3 )
	{	
		result = (x * y);
		printf ( "The Multiply value is %f \n",x,y,result);
	}

	if ( z == 4 )
	{
		result = (x / y);
		printf ( "The Divition value is %f \n",x,y,result);
	}
}