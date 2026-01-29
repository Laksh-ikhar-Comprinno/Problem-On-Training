#include<iostream>
using namespace std;
 
class stack{
    int *arr;
    int size;
     int top;


    stack(int size){
        arr=new int[size];
        this->size=size;
        this->top=-1;
    }

    void push(int data){
        top++;
        arr[top]=data;

    }
void pop(){
    top--;
}
bool isempty(){
    if(top==-1){
        return true;
    }
    else{
        return true;
    }
}
int getTop(){
    return arr[top];

}
int getsize(){
    return top+1;
}
};
int main(){


    return  0;
}