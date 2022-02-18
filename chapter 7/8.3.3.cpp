#include <iostream>
using namespace std;

int main(){

char string[] = "Hooray for All of Us";
char* messPT = string;
int i ;

for (i = 0 ;i<22;i++){
  cout <<*messPT++<<endl;
}






  return 0 ;
}
/*
B:

#include <iostream>
using namespace std;

int main(){

char string[] = "Hooray for All of Us";
char* messPT = string;
int i ;

while (*messPT++!='\0')
{
  cout <<*messPT<<endl;

}
*/

/*

C:

#include <iostream>
using namespace std;

int main(){

char string[] = "Hooray for All of Us";
char* messPT = string;
int i ;

for (i = 11 ;i<22;i++){
  cout <<*(messPT+i)<<endl;
}






  return 0 ;
}
*/




  return 0 ;
}
