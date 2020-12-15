#include "iostream"
#include "fstream"
#include "string"
using namespace std;
int main()
{
	setlocale(0, "ru");
	ifstream in("f.txt");
	string str;
	while (in.peek() != EOF) {
		string n;
		getline(in, n);
		if (n.length() > str.length())
			str = n;
	}
	cout << "Самая длинная строка:" << endl << str << endl << "Её длина равна: " << str.length() << " символов." << endl;
	in.close();
	system("pause");
	return 0;
}

