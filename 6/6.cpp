#include "iostream"
#include "fstream"
#include "string"
using namespace std;
int main()
{
	setlocale(0, "ru");
	ifstream in("f.txt");
	ofstream outg("g.txt");
	ofstream outh("h.txt");
	while (in.peek() != EOF) {
		int n;
		in >> n;
		if (n % 2 == 0)
			outg << n << endl;
		else
			outh << n << endl;
	}
	in.close();
	outh.close();
	outg.close();
	return 0;
}