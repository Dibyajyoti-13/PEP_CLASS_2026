#include <iostream>
#include <stack>
using namespace std;

int main() {
    string str = "This sentence needs to be reversed strictly";
    stack<char> s;

    for (char ch : str) {
        s.push(ch);
    }

    string result = "";
    while (!s.empty()) {
        result += s.top();
        s.pop();
    }
    cout << result << endl;
}
