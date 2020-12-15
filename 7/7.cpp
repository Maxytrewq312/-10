#include "iostream"
#include "fstream"
#include "string"
using namespace std;
int main()
{
	setlocale(0, "ru");
	ifstream inf("f.txt");
	ofstream outh("h.txt");
	string n;
	while (inf.peek() != EOF) {

		getline(inf, n);
		outh << n << endl;
	}

	inf.close();
	outh.close();
	ifstream ing("g.txt");
	ofstream outf("f.txt");

	while (ing.peek() != EOF)
	{
		getline(ing, n);
		outf << n << endl;
	}

	ing.close();
	outf.close();
	ofstream outg("g.txt");
	ifstream inh("h.txt");

	while (inh.peek() != EOF)
	{
		getline(inh, n);
		outg << n << endl;
	}
	outg.close();
	inh.close();

	return 0;
}