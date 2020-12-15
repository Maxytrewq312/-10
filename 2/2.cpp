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
		char sum1 = 'C';
		string sum2 = "C++";
		getline(in, n);
		int i = n.find(sum1);
		while (i < n.length()) {
			if (n[i] == sum1)
				n.replace(i, 1, sum2);
			i++;
		}
		out << n << endl;
	}
	in.close();
	out.close();
	return 0;
}