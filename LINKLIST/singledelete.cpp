#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node*next;

    Node(){
        this->data=0;
        this->next=NULL;
    }
    Node(int data){
        this->data=0;
        this->next=NULL;

    }

};
void print(Node*head){
    Node*temp=head;
    while(temp!= NULL){
        cout<<temp->data;
        temp=Temp->next;

    }
}
void insertathead(Node* &head,Node* &tail,int data,int position){
if(head==NULL){
    Node*newNode=new Node(data);
    head=newnode;
    tail=newnode;

}
else{
    Node* newNode= new Node(data);
    newNode->next=head;
    head=newNode;;
}
void insertattail(Node* &head,Node* &tail,int data){
    if(head==NULL){
        Node* newNode= new Node(data);
        head=newNode;
        tail=newNode;}
    else{
        Node* newNode=new Node(data);
        tail->next=newNode;
        tail=newNode;
    }
}
int findlen(Node* &head){
    int len=0;
    Node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    return len;
}
void delection(Node* &head,Node* &tail,int data,int position){
    if (head==NULL){
        cout<<"can not delect empty"<<endl;
        return;
    }
    if(position==1) {
        Node*temp=head;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    else if(position==len){
        Node* prev =head;
        whlie( prev-> next != tail){
            prev->next=NULL;
            delete tail; 
            tail=prev;

        }
    }
    else{ 
        Node* prev= NULL;
        Node* curr = head;
        while(position!=1){ 
            position--;
            prev=curr;
            curr=curr->next;
        }
        prv->next=curr->next;
        curr->NULL
        delete curr;
    }
}


int main()
{
    Node*head=NULL;
    Node*tail=NULL;
     insertAtHead(head, tail,20);
        insertAtHead(head, tail,50);
        insertAtHead(head, tail,60);
        insertAtHead(head,tail, 90);
        insertAtTail(head, tail, 77);

        print(head);
        cout << endl;

        return 0;

}