//Fisher–Yates shuffle algorithm
// takes as input an array of elements (int) max & low boundaries 
// min <= rand <max

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

#define MAX 10
#define MIN 0

void suffle(int *o, int maxrange, int minrange)
{
	for (int i = 0; i < maxrange; i++)
	{
		int temp = o[i];
		int randomidx = static_cast<int>(static_cast<double>(rand()) / (RAND_MAX + 1) * (maxrange- minrange) + minrange);
		o[i] = o[randomidx];
		o[randomidx] = temp;
	}
}


void main()
{

	int original[MAX] = { 13,21,33,40,54,62,79,85,99,107 };
	
	srand(static_cast<unsigned int> (time(NULL)));
	
	for (int i = 0; i < MAX; i++)
		cout << original[i] << endl;

	suffle(original, MAX, MIN);

	cout <<endl<< "suffled array----------" << endl;
	for (int i = 0; i < MAX; i++)
		cout << original[i] << endl;

}
