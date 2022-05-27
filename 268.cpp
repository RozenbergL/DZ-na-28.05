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
	int n, k;
	string s;
	fin >> n >> k;
	fin >> s;
	vector <int> prov1;
	vector <int> prov2;
	for (int i = 0; i < n; i++) {
		prov1.push_back(i);
		prov2.push_back(i);
	}
	int answer = 0;
	for (int i = 0; i < prov1.size(); i++) {
		for (int j = 0; j < prov2.size(); j++) {
			if (i + j < n) {
				string s2 = s.substr(i, n - j - i);
				int count = 0;
				for (int g = 0; g < s2.length() / 2; g++) {
					if (s2[g] != s2[s2.length() - g - 1]) {
						count++;
					}
				}
				if (count <= k) {
					answer++;
				}
			}
		}
	}
	fout << answer;
    return 0;
}