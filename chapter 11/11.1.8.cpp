#include <iostream>
using namespace std;

class String{

private:
  string str;

public:
  void input(string s);
  string operator+(String&);
  void display();


};

void String::display(){
  cout <<"String  = "<<str<<endl;
}

void String::input(string s){
  str = s;
}

string String::operator+(String& x){
  return str+x.str;
}

int main(){

String a , b;
a.input("Youssef");
//a.display();
b.input(" Gamal");
cout << a.operator+(b);





  return 0;
}
