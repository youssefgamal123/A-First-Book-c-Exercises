#include <string>
#include <iostream>
using namespace std;

void trimrear(string str)
{

	for (int i = 0; i < sizeof(str); i++){
		if (str.back() == ' '){
			str.pop_back();
		}
	}

	std::cout << str << '\n';

	return ;
}
// Driver program to test above function
int main()
{
	std::string str[] = { "hello world.   " };
	trimrear(*str);

	system("PAUSE");
	return 0;
}
