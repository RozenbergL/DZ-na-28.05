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
	int n, i, j, k, f, s; 
	queue <int> q;
	fin >> n;
	vector <vector <int> > sp(n, vector<int>(n));
	vector <int> prov(n);
	for (i = 0; i < n; ++i){
		prov[i] = 1000000000;
		for (j = 0; j < n; ++j) {
			fin >> sp[i][j];
		}
	}
	fin >> s >> f; 
	s--; 
	f--;
	prov[s] = 0; q.push(s);
	while (!q.empty()) {
		i = q.front(); q.pop();
		for (j = 0; j < n; ++j) {
			if (sp[i][j] && prov[j] > prov[i] + 1) {
				prov[j] = prov[i] + 1; q.push(j);
			}
		}
	}
	if (prov[f] < 1000000000) {
		fout << prov[f];
	}
	else {
		fout << -1;
	}
    return 0;
}