#include "iostream"
#include "fstream"
#include "string"
using namespace std;
int main()
{
	setlocale(0, "ru");
	ifstream in("f.txt");
	ofstream out("g.txt");
	while (in.peek() != EOF) {
		string n;
		getline(in, n);
		out << n << "\t: " << n.length() << " символов" << endl;
	}
	in.close();
	out.close();
	return 0;
}