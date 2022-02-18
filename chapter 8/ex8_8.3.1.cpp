#include <iostream>
#include <new>
using namespace std;
int main()
{

		const int VALUES = 5;
		int nums[VALUES] = { 16, 54, 7, 43, -5 };
		int total = 0, *nPt;
		   // store address of nums[0] in nPt
		for (nPt = nums; nPt < nums + VALUES; nPt++){
			total += *nPt;
			cout << "The total of the array elements is " << total << endl;
		}
		
	return 0;
}
