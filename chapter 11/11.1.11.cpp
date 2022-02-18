#include <iostream>
using namespace std;

class Fractions {

private:
  int num,denom;
public:
  Fractions(int =1 , int = 1);  // class constructor
  Fractions operator+(Fractions&);
  Fractions operator-(Fractions&);
  Fractions operator/(Fractions&);
  Fractions operator*(Fractions&);
  void showfraction();

};

Fractions::Fractions(int n,int d ){
  num = n;
  denom = d;
}

Fractions Fractions::operator+(Fractions& a){
  Fractions temp;
  temp.num= (num * a.denom + denom * a.num);
  temp.denom=(denom * a.denom);
  return temp;

}
Fractions Fractions::operator-(Fractions& m)
{
  Fractions temp;
  temp.num=  (num * m.denom - denom * m.num);
  temp.denom= (denom * m.denom);
  return temp;
}

Fractions Fractions::operator*(Fractions&b){
  Fractions temp;
  temp.num= (num * b.num);
  temp.denom =  (denom * b.denom);
  return temp;
}

Fractions Fractions::operator/(Fractions&d){
  Fractions temp;
  temp.num=(num * d.denom);
  temp.denom =(denom * d.num);
  return temp;
}


int main()
{
	Fractions a(91, 20), b(23,20), c(40,53), d(10,49),add,sub,mult,div; // declare two objects
	add = a + b;
	sub = c - d;
	mult = a * b;
	div = c / d;
	add.showFractions();
	cout << endl;
	sub.showFractions();
	cout << endl;
	mult.showFractions();
	cout << endl;
	div.showFractions();
	cout << endl;

	system("PAUSE");
	return 0;
}
