// HelloWorld.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"  
using namespace std;
int calc();


int main()
{
	calc();

    
}

 int calc() {
	int x, y, opp;

	cout << "Enter an operation...." << std::endl;
	cout << "1.)Addition" << std::endl;
	cout << "2.)Subtraction" << std::endl;
	cout << "3.)Multiplication" << std::endl;
	cout << "4.)Division" << std::endl;
	cout << "Enter 0 to exit"<<std::endl;
	cin >> opp;
	
		if (opp == 1) {
			cout << "You selected Addtion" << std::endl;
			cout << "Enter a number\n" << std::endl;
			cin >> x;
			cout << "Enter another number to add it by\n" << std::endl;
			cin >> y;
			cout << "The answer to " << x << " plus " << y << " = " << x + y << std::endl;
			cout << std::endl;
		}
		else if (opp == 2) {
			cout << "you selected subtraction" << std::endl;
			cout << "Enter a number\n" << std::endl;
			cin >> x;
			cout << "Enter another number to subtract it by\n" << std::endl;
			cin >> y;
			cout << "The answer to " << x << " minus " << y << " = " << x - y << std::endl;
			cout << std::endl;
		}
		else if (opp == 3) {
			cout << "you selected mulitplication" << std::endl;
			cout << "Enter a number\n" << std::endl;
			cin >> x;
			cout << "Enter another number to multiply it by\n";
			cin >> y;
			cout << "The answer to " << x << " times " << y << " = " << x * y << std::endl;
			cout << std::endl;
		}
		else if (opp == 4) {
			cout << "You selected division" << std::endl;
			cout << "Enter a number\n" << std::endl;
			cin >> x;
			cout << "Enter another number to dvide it by\n" << std::endl;
			cin >> y;
			cout << "The answer to " << x << " divided by " << y << " = " << x / y << std::endl;
			cout << std::endl;
		}
		else if (opp == 0) {
			return 0;
		}
		calc();
	

}

