
#include <iostream>
using namespace std;


int main()
{
		const int SIZE = 10;
		double grade[SIZE], sum = 0;
		int total = 0,average;

			for (int i = 0; i < SIZE; i++)
			{
					cout << "Enter your grade" << endl;
					cin >> grade[i];


						total = total + grade[i];
						average = total / sizeof(grade[i]);

						if (grade[i] <= 0)
						{
							break;
						}

			}

			cout << "Your total is" << endl;
		    cout << total << endl;
			cout << "Your average is " << endl;
			cout << average << endl;
			cout << "The grades with an asterisk are below average" << endl;

			for (int i = 0; i <= (sizeof(grade[i])+1); ++i){
				if (grade[i] < average){
					cout << "*" << grade[i] << endl;
				}
				else if (grade[i] >= average)
				{ cout << grade[i] << endl; }
			}

			for (int i = 0; i <= (sizeof(grade[i])+1); i++){
				if (grade[i] >= 90){
				cout << grade[i] << ':' << 'A' << endl;
			    }
				if (grade[i] >= 80 && grade[i] <= 90){
					cout << grade[i] << ':' << 'B' << endl;
				}
				if (grade[i] >= 70 && grade[i] <= 80){
					cout << grade[i] << ':' << 'C' << endl;
				}
				if (grade[i] >= 60 && grade[i] <=70){
					cout << grade[i] << ':' << 'D' << endl;
				}
				if (grade[i] < 60){
					cout << grade[i] << ':' << 'F' << endl;
				}
			}

	  system("PAUSE");

	return 0;
}
