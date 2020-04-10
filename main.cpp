#include<iostream>
#include<string>
#include<sstream>
#include<map>

using namespace std;

int main() {
    int cases;
    map<string, int> result;
    cin >> cases; cin.ignore();

    for(; cases > 0; --cases){
        string line, country;
        getline(cin, line, '\n');
        stringstream ss(line);

        getline(ss, country, ' ');
        result[country]++;
    }

    for(auto const& i : result)
        cout << i.first << ' ' << i.second << endl;

    return 0;
}
