#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include<queue>

using namespace std;


int main()
{
	ifstream fin;
	ofstream fout;
	fin.open("input.txt");
	fout.open("output.txt");
    int n, a, b, x, y;
    fin >> n >> a >> b;
    vector <int> sp1(n + 2);
    vector <int> sp2;
    vector <int> sp3;
    sp1[0] = 1;
    sp1[1] = 1;
    for (int i = 2; i < n + 1; i++) {
        fin >> sp1[i];
    }
    x = a;
    y = b;
    sp2.push_back(x);
    sp3.push_back(y);
    while (x != 1) {
        x = sp1[x];
        sp2.push_back(x);
    }
    while (y != 1) {
        y = sp1[y];
        sp3.push_back(y);
    }
    x = a;
    y = b;
    while (x != y) {
        if (sp3.size() > sp2.size())
        {
            sp3.erase(sp3.begin());
        }
        else
            sp2.erase(sp2.begin());
        x = sp2[0];
        y = sp3[0];
    }
    fout << x;
    return 0;
}