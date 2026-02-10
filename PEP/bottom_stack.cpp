#include<iostream>
#include<stack>
using namespace std;

void bottom_push(stack<int> &st, int val){
    if(st.empty()){
        st.push(val);
        return;
    }

    int temp = st.top();
    st.pop();
    bottom_push(st, val);
    st.push(temp);
}

void print(stack<int> &st){
    if(st.empty()){
        return;
    }
    int temp = st.top();
    cout << temp << " ";
    st.pop();
    print(st);
    st.push(temp);
}

int main(){
    stack<int> st;
    st.push(5);
    st.push(6);
    st.push(4);
    st.push(3);
    st.push(12);

    int val = 10;

    bottom_push(st, val);
    print(st);
}