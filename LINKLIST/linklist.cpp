//#deletthedeemeont in array
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* Next;

    Node(){
        this->data=0;
        this->next=NULL;
    }       
        Node(int data){
            this->data=0;
            this->next=NULL;

        
    }
    ~Node(){

         
    }

};


void deleteNode(Node*&head,Node* &tail, int pos){
    if(head==NULL){
        cout<<"cannot be deleted"<<endl;
        return;
    }

    if(position ==1){

        Node*temp=head;
        head=next->NULL;
        temp->next=NULL;
        delete temp;

    }
    else if(position==len)
    {
        Node* prev =head;
        while(prev->next !=tail){
            prev=prev->next;
        }

        prev-> next = NULL;
        delete tail;
        tail=prev;


    }
    else{
         Node* prev =NULL;
         Node* curr=head;
         while(position!=1){
            position--;
            prev =curr;
            curr=curr->next;
         }
         prev-> next =curr->next;
         curr-> next=NULL;
         delete curr;
    }
}
void print(Node*head){
    Node*temp=head;
    while(temp!= NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}

int main(){
    Node*head=NULL;
    Node* tail=NULL;
    insertathead(head,tail,10);
    insertathead(head,tail,20);
    insertathead(head,tail,30);
    insertathead(head,tail,60);
    insertathead(head,tail,70);
    print(head);
    cout<<endl;
    return 0;
}




