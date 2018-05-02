#include <iostream>
#include <string>
#include "Players.h"
using namespace std;

int main() {
	char stay;
	string name1, name2;
	
	cout << "Welcome to BlackJack" << endl;
	cout << "Enter the 1st and 2nd player names" << endl;
	cin >> name1 >> name2;

	Player user(name1, name2);
	
	

	cin >> stay;
	return 0;
}
