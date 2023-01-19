#include <bits/stdc++.h>
using namespace std;

int main() {

    set<string> words;
    set<string> anagrams;
    set <string> ananagrams;
    set <string> ans;

    set <string> ::iterator it;

    while (1) {
        string line;
        getline(cin, line);
        // cout<<line<<endl;

        if (line == "#") break;

        istringstream s(line);

        string word;
        while (s >> word) {
            words.insert(word);
        }
    }

    it = words.begin();
    while (it != words.end()) {
        string temp = *it;
        transform(temp.begin(), temp.end(), temp.begin(), [](char c) {return tolower(c);});
        sort(temp.begin(), temp.end());
        // cout<<temp<<endl;
        if (count(ananagrams.begin(), ananagrams.end(), temp)) {
            anagrams.insert(temp);
            ananagrams.erase(temp);
        }
        else if (count(anagrams.begin(), anagrams.end(), temp) == 0) {
            ananagrams.insert(temp);
        }
        it++;
    }

    // for (auto st : ananagrams) cout << st << endl;
    // for (auto st : words) cout << st << endl;

    it = ananagrams.begin();
    while (it != ananagrams.end()) {
        for (auto it2 = words.begin(); it2 != words.end(); it2++) {
            string temp = *it2;
            transform(temp.begin(), temp.end(), temp.begin(), [](char c) {return tolower(c);});
            sort(temp.begin(), temp.end());
            if (temp == *it) {
                ans.insert(*it2);
                break;
            }
        }
        it++;
    }

    it = ans.begin();
    while (it != ans.end()) {
        cout << *it << endl;
        it++;
    }



}