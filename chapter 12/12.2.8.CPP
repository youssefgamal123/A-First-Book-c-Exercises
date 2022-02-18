#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;
// Coin class
// precondition:
//     srand() must be called once before the flip()method is called
// class declaration section
class Coin
{
private:
	static int totalHeads;
	static int totalTails;
public:
	Coin() { cout << "\n**** A new Coin object has been created ****"; };
	~Coin() { cout << "\n!!!!This Coin object has been deleted !!!!\n"; };
	void flip();
	static void percentages();
};
// static member definition
int Coin::totalHeads = 0;
int Coin::totalTails = 0;
// class implementation section
void Coin::flip()
{
	if (double(rand()) / RAND_MAX < 0.5)
	{
		++totalTails;
		cout << "\nThe coin flip came up tails";
	}
	else
	{
		++totalHeads;
		cout << "\nThe coin flip came up heads";
	}
	return;
}
void Coin::percentages() // this calculates the percentages of
{                        // heads and tails and displays the result
	int tosses = totalHeads + totalTails;
	cout << "\nNumber of coin tosses : " << tosses;
		cout << "\n   " << totalHeads << " Heads      "
		<< totalTails << " Tails\n";
	cout << "\nHeads came up " << 100.0 * double(totalHeads) / tosses
		<< " percent of the time.";
	cout << "\nTails came up " << 100.0 * double(totalTails) / tosses
		<< " percent of the time.";
	return;
}

int main()
{
		Coin *anewCoin;  // declare a pointer to a Coin object
		int i, howMany;
		cout << "Enter the number of flips : ";
		cin >> howMany;
		srand(time(NULL));
		anewCoin = new Coin; // create a new Coin object
		for (i = 1; i <= howMany; i++)
		{

				anewCoin->flip();    // flip the coin

		}
		delete anewCoin;     // delete the object
		Coin::percentages();   // call the static member method
		system("PAUSE");
		return 0;
}

b. Discuss the advantages and disadvantages of using multiple Coin objects compared with
creating a single Coin object.

By using multiple Coin objects your results are more controlled and the results are somewhat predetermined.
By using one Coin object your result are more random and realistic because the result isn't know until the run time.

c. Is using a dynamically created object for the program written for Exercise 7a necessary?

No, the program will produce decent result without dynamically creating the object.
