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
	int answer = 0;
	int prov = 0;
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			answer = n / i;
			prov = i;
			break;
		}
	}
	fout << answer << " " << answer * (prov - 1);
	return 0;
}