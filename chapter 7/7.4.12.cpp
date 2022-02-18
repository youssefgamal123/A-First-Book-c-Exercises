#include <algorithm>
#include <iostream>
using namespace std;

int main(){

	const int ROW = 31;
	const int COLUMN = 2;
	const int RANK = 2;

	int arr[ROW][COLUMN][RANK];
	int averageJuly, averageAugust, total1, total2,highJuly,lowJuly,highAug,lowAug;
	int dayhighAug, daylowAug,dayhighJuly,daylowJuly;
		char month;
		int i;
	for (int i = 0; i < 31; i++){
		for (int j = 0; j < 2;j++){
			for (int k = 0; k < 2; k++){
				cout << "Enter high temeratures of the month" << j+7<<" for " << i+1 << "day" << endl;
				std::cin >> arr[i][j][0];
				cout << "Enter low temeratures of the month" << j+7<< " for " << i+1 << "day" << endl;
				std::cin >> arr[i][j][1];

					total1 = +arr[i][j][0];
					total2 = +arr[i][j][1];
					averageJuly = total1 / 31;
					averageAugust = total2 / 31;

						if (arr[i][0][0] > arr[0][0][0])
						{
							arr[0][0][0] = arr[i][0][1];
							highJuly = arr[0][0][0];
						}

						if (arr[i][0][0] < arr[0][0][0])
						{
							arr[0][0][0] = arr[i][0][1];
							lowJuly = arr[0][0][0];
						}
						if (arr[i][1][1] > arr[0][0][0])
						{
							arr[0][0][0] = arr[i][1][1];
							highAug = arr[0][0][0];
						}

						if (arr[i][1][1] < arr[0][0][0])
						{
							arr[0][0][0] = arr[i][1][1];
							lowAug = arr[0][0][0];
						}

						dayhighAug = arr[i][0][0];
						daylowAug = arr[i][0][1];
						dayhighJuly = arr[i][1][0];
						daylowJuly = arr[i][1][1];
			}
		}
	}
	cout << "Any day's high and low temperatures" << endl;
	std::cin >> month;
	if (month == 'A'){
		cout << "Enter day" << endl;
		std::cin >> i;
		cout << dayhighAug << endl;
		cout << daylowAug << endl;
	}
	else if (month == 'J'){
		cout << "Enter day" << endl;
		std::cin >> i;
		cout << dayhighJuly << endl;
		cout << daylowJuly << endl;
	}

	cout << "Average high and low temperatures for a given month" << endl;
	std::cin >> month;
	if (month == 'A'){
		cout << averageAugust << endl;
	}
	else if (month == 'J'){
		cout << averageJuly << endl;
	}
	cout << "Month and day with the highest temperature" << endl;
	std::cin >> month;
	if (month == 'A'){
		cout << highAug << endl;
	}
	else if (month == 'J'){
		cout << highJuly << endl;
	}
	cout << "Month and day with the lowest teperature" << endl;
std:: cin >> month;
	if (month == 'A'){
		cout << lowAug << endl;
	}
	else if (month == 'J'){
		cout << lowJuly << endl;
	}
	system("PAUSE");
	return 0;
}
