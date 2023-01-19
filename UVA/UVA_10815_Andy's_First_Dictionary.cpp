#include<bits/stdc++.h>
using namespace std;

int main() {
    string line;
    set <string> dic;
    while (getline(cin, line)) {
        int n = line.length();
        for (int i = 0;i < n;i++) {
            if (line[i] >= 'a' && line[i] <= 'z') {
                continue;
            }
            else if (line[i] >= 'A' && line[i] <= 'Z') {
                line[i] = line[i] - 'A' + 'a';
            }
            else line[i] = ' ';
        }
        istringstream st(line);

        string w;
        while (st >> w) {
            dic.insert(w);
        }
    }
    for (string x : dic) {
        cout << x << endl;
    }
}