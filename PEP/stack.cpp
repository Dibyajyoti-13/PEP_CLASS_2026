#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> st;
    st.push(31);
    st.push(32);
    st.push(33);

    cout << "Top element: " << st.top() << endl;
    st.pop();
    cout << "Top element is: " << st.top() << endl;

    cout << st.size() << endl;

    if(st.empty()) cout << "is empty" << endl;
    else cout << "n0t empty" << endl;
}