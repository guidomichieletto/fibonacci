#include <iostream>
using namespace std;

int fibonacci(int pos){
	if(pos <= 1) return pos;
	return fibonacci(pos - 1) + fibonacci(pos - 2);
}

int main(){
	int pos = 0;
	cout << "Insert the pos: ";
	cin >> pos;
	cout << fibonacci(pos);
}
