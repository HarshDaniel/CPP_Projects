//C++ program to count vouvels and consonents in a string


#include <iostream>
#include <string.h>

using namespace std;

int main() {

	string sentence;

	int vouvels = 0;
	int consonents = 0;


	
	cout << "Enter a string: ";
	cin >> sentence;
	

	for (int i = 0; i < sentence.size(); i++) {
		if (sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] == 'i' || sentence[i] == 'o' || sentence[i] == 'u' || sentence[i] == 'A' || sentence[i] == 'E' || sentence[i] == 'I' || sentence[i] == 'O' || sentence[i] == 'U') {
			vouvels++;
		}
		else {
			consonents++;
		}
	}
	cout << "Vouvels are: " << vouvels << endl;
	cout << "consonents are: " << consonents << endl;
	

	return 0;
}