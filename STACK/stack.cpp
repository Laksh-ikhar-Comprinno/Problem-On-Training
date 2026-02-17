#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> st;



    st.push(10);
    st.push(100);
    st.push(1000);

cout<<"size od the stack;"<<st.size()<<endl;


st.pop();

if (st.empty()){
    cout<<"stack is non empty"<<endl;

}
else{
    cout<<"stack is not empty"<<endl;
}

cout<<st.top()<<endl;
    return 0;
}