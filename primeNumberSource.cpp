#include "commands.h"
int main()
{
	short numbersArr[MAX]; //Array declaration

	//stores all the prime numbers
	for (int focus = 0; focus < MAX; focus++)
	{
		numbersArr[focus] = focus;
	}

	sieve(numbersArr); //Function call
	system("pause");
	return 0;
}

void sieve(short *arr)
{
	int num = 0;
	int num2 = 0;

	//iterates from 2 -> 2000;
	for (int num = 2; num < MAX; num++)
	{	
		//loops the contents of the array 
		for (int num2 = 2; num2 < num; num2++)
		{
			//cheks to see if the contents of the array are prime
			if (*(arr + num) % num2 == 0)
				break;
		}
		//outputs all the prime numbers
		if (*(arr + num) == num2)
			cout << *(arr + num) << endl;
	}
}