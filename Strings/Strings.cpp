// Strings.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstring>
#include <string>
#include <iterator>
#include <random>
#include <vector>
#include <algorithm>
using namespace std;

string removeVowels(string text) {
	

	int len = text.length();
	for (int i = 0; i < len; i++) {
		if (text[i] == 'a' or text[i] == 'e' or text[i] == 'i' or text[i] == 'o' or text[i] == 'u' or text[i] == 'A' or text[i] == 'E' or text[i] == 'I' or text[i] == 'O' or text[i] == 'U') {
			text.replace(i,1,"");
			i--;
			len--;
		}
	}

	return  text;
}

string removeConsonants(string text) {


	int len = text.length();
	for (int i = 0; i < len; i++) {
		if (text[i] == 'Q' or text[i] == 'W' or text[i] == 'R' or text[i] == 'T' or text[i] == 'P' or text[i] == 'S' or text[i] == 'D' or text[i] == 'F' or text[i] == 'G' or text[i] != 'H' or text[i] == 'J' or text[i] == 'K' or text[i] == 'L' or text[i] == 'Z' or text[i] == 'X' or text[i] == 'C' or text[i] != 'V' or text[i] == 'B' or text[i] == 'N' or text[i] == 'M' or text[i]  == 'q' or text[i] == 'w' or text[i] == 'r' or text[i] == 't' or text[i] == 'p' or text[i] == 's' or text[i] == 'd' or text[i] == 'f' or text[i] == 'g' or text[i] == 'h' or text[i] == 'j' or text[i] == 'k' or text[i] == 'l' or text[i] == 'z' or text[i] == 'x' or text[i] == 'c' or text[i] == 'v' or text[i] == 'b' or text[i] == 'n' or text[i] == 'm') {
			text.replace(i, 1, "");
			i--;
			len--;
		}


	}

	return  text;
}

int main()
{
	string removeVowels(string a);
	string removeConsonants(string a);

	string input = " ";
	cout << "0-exit \n 1-backward \n 2-without volwes 3-without consonants 4-random books " << endl;
	while (input != "0")
	{
		getline(cin, input);
		if (input == "1") {
			cout << "write the sentence";
			getline(cin, input);
			reverse(input.begin(), input.end());
			cout << input;
		}

		else if (input == "2") {
			cout << "write the sentence";
			getline(cin, input);
			
			cout << (removeVowels(input));

		}


		else if (input == "3") {
			cout << "write the sentence";
			getline(cin, input);

			cout << removeConsonants(input);

		}

		else if (input == "4") {
			cout << "write the sentence";
			getline(cin, input);
			random_device rd;
			mt19937 g(rd());
			shuffle(input.begin(), input.end(), g);
			cout << input;

		}
	}
}

