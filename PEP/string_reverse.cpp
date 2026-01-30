#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string str = "hello";
    int n = str.size();
    
    cout << str << endl;
    
    for(int i = 0; i < str.size() / 2; i++){
        swap(str[i], str[n - i - 1]);
    }
    
    cout << str << endl;

}