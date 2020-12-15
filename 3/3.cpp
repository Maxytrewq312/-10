#include "iostream"
#include "fstream"
#include "string"
using namespace std;
int main()
{
	setlocale(0, "ru");
	ifstream in("f.txt");
	int count = 0;
	cout << "Введите букву" << endl;
	char buk;
	cin >> buk;
	while (in.peek() != EOF)
	{
		string n;
		getline(in, n);
		if (n[0] == buk)
		{
			count += 1;
		}
	}
	cout << count << " строк начинаются с буквы '" << buk << "'" << endl;
	in.close();
	system("pause");
	return 0;
}
