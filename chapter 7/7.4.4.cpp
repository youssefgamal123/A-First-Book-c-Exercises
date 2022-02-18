#include <iostream>
using namespace std;
int main(){

  int i, j, first[2][3] = { 16,18,23,54,91,11 };
	int second[2][3] = { 24, 52, 77, 16, 19, 59 };
	int total = 0;


for (i=0;i<2;i++){
  for (j=0;j<3;j++){
    total+=first[i][j]+second[i][j];
  }
}

cout <<"Total = "<<total<<endl;

return 0 ;


}
