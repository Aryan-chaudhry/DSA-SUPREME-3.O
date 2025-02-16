#include <bits/stdc++.h>
using namespace std;

bool isValidIP(string ip) {
    vector<string> parts;
    stringstream ss(ip);
    string token;
    
    while (getline(ss, token, '.')) {
        parts.push_back(token);
    }
    
    if (parts.size() != 4) return false;
    
    for (string part : parts) {
        if (part.empty() || part.size() > 3) return false;
        if (part[0] == '0' && part.size() > 1) return false;
        if (!all_of(part.begin(), part.end(), ::isdigit)) return false;
        
        int num = stoi(part);
        if (num < 0 || num > 255) return false;
    }
    
    return true;
}

int main() {
    string ip;
    cin >> ip;
    cout << (isValidIP(ip) ? "Valid" : "Invalid") << endl;
    return 0;
}