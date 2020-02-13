/*
* Made by Jin Chen for a challenge in the Udemy Course by Frank J. Mitropoulos.
* Playing with strings.
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string alphabet{ "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" };
	string key{ "trewqyuiopasdfghkljvcbxnzmTREWQYUIOPASDFGHKLJVCBXNZM" };

	string message{};
	string mesCrypt{};

	cout << "Input the message you want to encrypt: ";
	getline(cin,message);

	size_t length = message.size();
	cout << "\nEncrypting message... Give it a time please\n";
	for (size_t i = 0; i < length; i++)
	{
		size_t id = alphabet.find(message.at(i));
		if (id != string::npos)
			message.at(i) = key.at(id);
		else
			message.at(i) = message.at(i);
	}

	cout << "Your encrypted message is:\n" << message << endl << endl;

	cout << "Decrypting message...\n";
	for (size_t i = 0; i < length; i++)
	{
		size_t id = key.find(message.at(i));
		if(id != string::npos)
			message.at(i) = alphabet.at(id);
		else		
			message.at(i) = message.at(i);
	}

	cout << "Your original message was:\n" << message << endl << endl;

	return 0;
}