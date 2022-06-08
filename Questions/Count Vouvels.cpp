#include <iostream>
#include <string.h>

using namespace std;

int main() {

	int vouvels = 0;
	int consonents = 0;

	char sentence[44] = "the quick brown fox jumps over the lazy dog";

	for (int i = 0; i < 44; i++) {
		if (sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] == 'i' || sentence[i] == 'o' || sentence[i] == 'u') {
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