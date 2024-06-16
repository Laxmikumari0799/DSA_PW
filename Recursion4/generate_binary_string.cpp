//generate binary string of length k with no consecutive 1s

#include <iostream>
using namespace std;

void generateBinaryStrings(string str, int n) {
    if (n == 0) {
        cout << str << endl;
        return;
    }
    generateBinaryStrings(str + '0', n - 1);
    if(str=="" ||str[str.length()-1]=='0')generateBinaryStrings(str + '1', n - 1);
}

int main() {
    int n = 3;
    generateBinaryStrings("", n);
    return 0;
}
