#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int a;
    int b;
    char ch = '*';
    cin >> a >> b;
    string s(a,ch);
    for(int i = 0;i<b;i++){
        cout<< s <<endl;
    }
    return 0;
}