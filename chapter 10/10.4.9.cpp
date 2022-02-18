#include <iostream>
#include <string>
using namespace std;

class food{


private:
  string food_type;
  int weight;
  float cost;

public:
  food(); // calss constructor
  void displayFood();
  void AddFood();
  void  changefood(string f_type,int w,float c);

};
food::food(){
  food_type ="Basic";
  weight = 20 ;
  cost = 2;
}

void food::displayFood(){
  cout <<"The Food Type is "<<food_type<<endl;
  cout <<"The weight = "<<weight<<" Lps"<<endl;
  cout <<"The cost = "<<cost<<" Dollar "<<endl;
}

void food::AddFood(){
  cout <<"Enter New food type "<<endl;
  fflush(stdin);
  std::getline(cin, food_type); // getline function accepts 2 parameters , the stream in which it should read and the variable in which it will store this data in
  fflush(stdin);
  cout <<"Enter Food weight "<<endl;
  cin >> weight;
  cout <<"Enter food cost "<<endl;
  cin >> cost;
}

void food::changefood(string f_type,int w,float c){
food_type = f_type;
weight =w;
cost = c;


}



int choice,i=0;
string new_food;
int new_weight;
float new_cost;
int main(){

food menu[100];

  cout << "Menu" << endl;
  		  cout << "1. Add a food item\n"
  			"2. Modify a food item\n"
  			"3. Delete a food item\n"
  			"4. Exit this menu\n" << endl;

        cin >> choice;
        switch (choice) {
          case 1:
            menu[i].AddFood();
            break;

          case 2:
          cout <<"Enter item to be modified :";
          cin >> i ;
          cout <<"Enter New food type "<<endl;
          fflush(stdin);
          std::getline(cin, new_food); // getline function accepts 2 parameters , the stream in which it should read and the variable in which it will store this data in
          fflush(stdin);
          cout <<"Enter Food weight "<<endl;
          cin >> new_weight;
          cout <<"Enter food cost "<<endl;
          cin >> new_cost;


          menu[i].changefood(new_food,new_weight,new_cost);
          menu[i].displayFood();
          break;

          case 3:
          cout << "Enter item's location to be deleted" << endl;
			     cin >> i;
			     menu[i].changefood("",0 , 0);
			     menu[i].displayFood();
           break;

          case 4:
          system("CLS");
          exit(1);




        }




  return 0 ;
}
