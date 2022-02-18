#include <iostream>
using namespace std;

class checkout{

private:
  int NumItems;
  double arrivalTime;

public:
  checkout(); // constructor
  ~checkout()
  {cout <<"The customer object has been deleted "<<endl;};
  void ShowObject();

};

checkout::checkout(){
  cout<<"A New object has been created "<<endl;
  NumItems=5;
  arrivalTime=2.5;

}

void checkout::ShowObject()
{
cout <<"      For This Object:\n";
cout <<"      NumItems = "<<NumItems<<endl;
cout <<"      ArrivalTime "<<arrivalTime<<endl;
}

int main(){

checkout *anothertrans ; // pointer that the first adddreas of the space in memory will be  stored in
int i , howmany;

cout <<"Enter Number of Transactions  "<<endl;
cin >> howmany ;

for (i = 0 ; i<howmany;i++){

anothertrans= new checkout;
cout << "The Memory addreas of the object "<<anothertrans<<endl;
anothertrans->ShowObject();// using the operator -> to use the show object function that is realted to the addreas of the object
delete anothertrans;
}

}
// A)
 // the addreas is the same because simply that place in memory is being deleted and reused

//B)
// Now each addreas is diffrent because without deletion of the created object the next object will take another address in memory

// C)
/*
because they take up memory at run-time which mean that the memory is unchangeable within the code before hand.
This implies that previously allocated memory is non-reusable.
If the size of the program was to grow large enough there would be no memory slot to save result and the program would crash.
*/
