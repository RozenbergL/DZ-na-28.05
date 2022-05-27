#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


int main()
{
	ifstream fin;
	ofstream fout;
	fin.open("input.txt");
	fout.open("output.txt");
	int n;
	fin >> n;
	int k = n / 3;
	if ((n - k * 3) % 2 != 0) {
		k -= 1;
	}
	if ((n - k * 3) / 2 != 0){
		fout << 2 << " " << (n - k * 3) / 2 << " " << 3 << " " << k;
	}
	else {
		fout << 3 << " " << k;
	}
    return 0;
}