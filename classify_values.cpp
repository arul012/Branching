#include <iostream>
using namespace std;
int main () {
	
	int value;
	cout << "Enter a value = ";
	cin >> value;
	
	if (value >=0 && value <=25) {
		cout << "Grade D" << endl;
	} else if (value >=26 && value <=50) {
		cout << "Grade C" << endl;
	} else if (value >=51 && value <=75) {
		cout << "Grade B" << endl;
	} else if (value >=76 && value <=100) {
		cout << "Grade A" << endl;
	} else {
		cout << " Invalid value " << endl;
	} 
	 
	 return 0;
}