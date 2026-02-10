#include<iostream>
#include<stack>
using namespace std;

int main(){
    string s = "This string needs to be reversed";

    stack<string> st;
    string word = "";

    for(char ch : s){
        if(ch == ' '){
            st.push(word);
            word = "";
        }
        else{
            word += ch;
        }
    }
    st.push(word);

    string result = "";
    while(!st.empty()){
        result += st.top() + " ";
        st.pop();
    }
    
    cout << result << endl;
}
