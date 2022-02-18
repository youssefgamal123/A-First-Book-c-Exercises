#include <iostream>
using namespace std;
// class declaration section
class Light
{
private:
	int  lightNum;
	int  currentLight;

public:
	Light(int = 1, int = 1);  // constructor
	void change(int);
};
// class implementation section
Light::Light(int lnum, int clight)
{
	lightNum = lnum;
	currentLight = clight;

}
void Light::change(int light)
{
	if (light < 1 || light > 3 || light == currentLight)
		;  // do nothing
	else if (light > currentLight) // move Light up
	 {
		std::cout << "\nLight " << lightNum
			<< " starting at light "<< currentLight << endl;
		while (light > currentLight)
		{
			currentLight++; // add one to current floor
			cout << " Going Up - now at light " << currentLight << endl;
		}
		cout << "Light " << lightNum
			<< " stopping at light " << currentLight << endl;
	}
	else // move Light down
	{
		cout << "\nLight " << lightNum
			<< " starting at light " << currentLight << endl;
		while (light < currentLight)
		{
			currentLight--;   // subtract one from current floor
			cout << " Going Down - now at light " << currentLight << endl;
		}
		cout << "Light " << lightNum
			<< " Stopping at light "<< currentLight << endl;
	}
	if (currentLight == 1){
		cout << "Red" << endl;
	}
	else if (currentLight == 2){
		cout << "Yellow" << endl;
	}
	else{ cout << "Green" << endl; }
	return;
}
int main()
{
	Light a, b(2, 1);   // declare 1 object of type Light
	a.change(2);
	a.change(1);
	a.change(3);

	system("PAUSE");
	return 0;
}
