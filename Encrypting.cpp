
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
	cout << "Enter your message: " << endl;

	string message{};
	getline(cin, message);
	

	string alphabet{ "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" };
	string code{ "qwertyuioplkjhgfdsazxcvbnmQWERTYUIOPLKJHGFDSAZCVBNM" };

	cout << "what do you want to do? Encrypt - A; Decipher - B? "<<endl;
	char option{};
	cin >> option;
	if (option == 'A') {

		for (size_t i = 0; i < message.length();i++) {
			if (isalpha(message[i])) {
				size_t index;
				index = alphabet.find(message[i]);
				char replace;
				replace = code[index];
				message[i] = replace;
			}

		}

		cout << "Encripted message is: " + message << endl;
	}
	else {

		for (size_t i = 0; i < message.length();i++) {
			if (isalpha(message[i])) {
				size_t index;
				index = code.find(message[i]);
				char replace;
				replace = alphabet[index];
				message[i] = replace;
			}

		}

		cout << "Your message was: " + message << endl;
	}
}

