#include <iostream>
using namespace std;

class rectangle{

private :
float length;
float width;


public:
  rectangle (float =0 , float = 0 );
  void setdata(float l , float w);
  float area ();
  float premiter ();
  void showdata();

};

// implenentation section
rectangle::rectangle(float l  , float w ){
  length = l;
  width = w;
}

void rectangle::setdata(float l ,float w){
  length = l;
  width = w;
}

float rectangle::area (){
  return length*width;
}

float rectangle::premiter(){
  return (length+width)*2;
}

void rectangle::showdata(){
  cout << "Length = "<<length<<" "<<"Width = "<<width<<endl;
}


int main (){

rectangle r;
r.setdata(50,50);
cout << r.area()<<endl;
cout << r.premiter()<<endl;
r.showdata();




  return 0 ;
}
