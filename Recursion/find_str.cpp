#include<iostream>
using namespace std;

bool checkkey(string str, int i, int n, char key) {
    if(i >= n) {
        return false;
    }
    if(str[i] == key) {
        return true;
    }
    return checkkey(str, i+1, n, key);
}

int main() {
    string str = "Aniket";
    char key = 'i';
    int n = str.length();  // Correctly initialize 'n' as the length of the string
    int i = 0;

    bool ans = checkkey(str, i, n, key);
    cout << "Answer: " << ans << endl;

    return 0;
}
