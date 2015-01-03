// Problem : https://www.hackerrank.com/challenges/pangrams

#include <iostream>
#include <string>
#include <ctype.h>
#include <map>
#include <vector>
#include <stack>

using namespace std;

int main(){
    map<char,bool> check;
    for (int i = 0; i < 26; i++) {
        check[i] = false;
    }
    string x;
    string :: iterator it;
    getline(cin,x);
    
    it = x.begin();
    while (it != x.end()) {
        check[tolower(*it) % 97] = true;
        // cout << tolower(*it) % 97 << "\n";
        it++;
    }
    
    bool che = true;
    for (int i = 0; i < 26; i++) {
        if (!check[i]) {
            che = false;
        }
    }
    
    if (che) {
        cout << "pangram\n";
    }else cout << "not pangram\n";
    return 0;
}
