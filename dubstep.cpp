#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    string word = "", sentence = "";
    for (int i = 0; i < s.size(); i++) {
        if (i + 2 < s.size() && s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B') {
            if (!word.empty()) {
                sentence += word + " ";
                word.clear();
            }
            i += 2;
        } else {
            word += s[i];
        }
    }
    if (!word.empty())
        sentence += word;
    if (!sentence.empty() && sentence.back() == ' ')
        sentence.pop_back();
    cout << sentence << endl;
}
