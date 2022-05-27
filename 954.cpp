#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <stack>
#include <fstream>

using namespace std;

int main()
{
	ifstream fin;
	ofstream fout;
	fin.open("input.txt");
	fout.open("output.txt");
    int n;
    fin >> n;
    vector <int> sp(n + 1, 0);
    sp[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        if (i >= 10)
            sp[i] += sp[i - 10];
        if (i >= 11)
            sp[i] += sp[i - 11];
        if (i >= 12)
            sp[i] += sp[i - 12];
        sp[i] = sp[i] % 1000000;
    }
    fout << (sp[n] * 2) % 1000000;
	return 0;
}