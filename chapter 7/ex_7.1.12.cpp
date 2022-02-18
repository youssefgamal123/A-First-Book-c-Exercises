#include <algorithm>
#include <iostream>
#include <map>
using namespace std;


int main()
{
		// seed data
	    const int SIZE = 50;
		int peopleTypes[SIZE];

		for (int i = 0; i < SIZE; i++){
			cout << "Enter a person types that was at the school function" << endl;
				cin >> peopleTypes[i];
			 if (peopleTypes[i] <= 0){
				 break;
			}

		}
		// create and fill the map
		std::map< int, int > occurances;
		for (int i = 0; i < SIZE; ++i)
			if (peopleTypes[i] >= 1  && peopleTypes[i] <= 4){
				++occurances[peopleTypes[i]];
			}

		std::cout << "Greatest: " << occurances.rbegin()->first << '\n';

		// print the contents of the map
		using iterator = std::map< int, int >::iterator;
		for (iterator iter = occurances.begin(); iter != occurances.end(); ++iter)

			std::cout << iter->first << ": " << iter->second << '\n';

	return 0;
}
