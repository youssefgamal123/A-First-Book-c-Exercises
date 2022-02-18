#include <iostream>
using namespace std;
// class declaration section
class RoomType
{
private:
	double length; // declare length as a double variable
	double width;  // declare width as a double variable
public:
	RoomType(double = 0.0, double = 0.0); // the constructor's declaration
	void showRoomValues();
	void setNewRoomValues(double, double);
	double calculateRoomArea();
};
// class implementation section
RoomType::RoomType(double l, double w)  // this is a constructor
{
	length = l;
	width = w;
	cout << "Created a new room object using the default constructor.\n\n";
}
void RoomType::showRoomValues()  // this is an accessor
{
	cout << "  length = " << length
		<< "\n   width = " << width << endl;
}
void RoomType::setNewRoomValues(double l, double w)  // this is a mutator
{
	length = l;
	width = w;
}
double RoomType::calculateRoomArea()  // this performs a calculation
{
	double result = length * width;
	cout << result << endl;
	return result;
}
int main()
{
	RoomType roomOne(12.5, 18.2);  // declare a object of class RoomType
	cout << "The values for this room are : \n";
	roomOne.showRoomValues();       // use a class method on this object
	cout << "\nThe floor area of this room is : ";
	roomOne.calculateRoomArea();    // use another class method on this object


	cout <<"----------------------" <<endl;

  RoomType hall(12.40,3.5);

  cout << "The values for this hall are : \n";
	hall.showRoomValues();       // use a class method on this object
	cout << "\nThe floor area of this hall is : ";
	hall.calculateRoomArea();    // use another class method on this object


cout << "------------------------"<<endl;

RoomType kitchen(14,14);
cout << "The values for this kitchen are : \n";
kitchen.showRoomValues();       // use a class method on this object
cout << "\nThe floor area of this kitchen is : ";
kitchen.calculateRoomArea();    // use another class method on this object


cout <<"-----------------------"<endl;

RoomType livingroom(12.4,20);
cout << "The values for this living room  are : \n";
livingroom.showRoomValues();       // use a class method on this object
cout << "\nThe floor area of this living room is : ";
livingroom.calculateRoomArea();    // use another class method on this object


RoomType Diningroom();




	return 0;
}
