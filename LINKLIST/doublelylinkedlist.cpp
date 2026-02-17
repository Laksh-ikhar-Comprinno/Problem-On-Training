#include <iostream>
using namespace std;

class Node{
    public:
   
    int data;
    Node* prev;
    Node* next;
   
   
    Node(){
        this->prev=NULL;
        this->next=NULL;
    }

    Node(int data){
    this->data=data;
    this->prev=NULL;
    this->next=NULL;
    
    }
};

void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int findlength(Node* &head){
    Node* temp=head;
    int len=0;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}

void insertathead(Node* &head, Node* &tail, int data){
    //empty
    if(head==NULL){
        Node* newNode = new Node(data);
        head=newNode;
        tail=newNode;
    }   
    else{
        Node* newNode=new Node(data);
        newNode-> next=head;
        head->prev=newNode;
        head=newNode;
    }
}
void insertattail(Node* &head, Node* &tail, int data ){
    if(head==NULL){
        Node* newNode= new Node(data);
        head=newNode;
        tail=newNode;
    
    }
    else{
        Node* newNode=new Node(data);
        newNode->prev=tail;
        tail->next=newNode;
        tail=newNode;
    }
}

void insertatmiddle(Node* head, Node* tail, int data,int position){
    if(head==NULL){
        Node* newNode= new Node(data);
        head=newNode;
        tail=newNode;
    }
    else{
        int len=findlength(head);

        if(position==1){
            insertathead(head,tail,data);
        }
        else if(position == len+1){
            insertattail(head,tail,data);
        }
        else{
           Node* newNode = new Node(data); 
           Node* prevNode =  NULL;
           Node* currNode =head;
           while(position!= 1){
            position--;
            prevNode=currNode;
            currNode=currNode->next;

           }
           prevNode->next=newNode;
           newNode->next=currNode;
           currNode->prev=newNode;
           newNode->prev=prevNode;
        }
       

    }
}

void delection(Node* &head, Node* &tail, int position){
    int len=0;
    if(head==NULL){
        cout<<"the link is empty";
    }

    if(position==1){
     Node*temp=head;
     head=head->next;
     head-> prev=NULL;
     temp-> next=NULL;
     delete temp;
    }

    else if(position == len){
    Node*prevNode=tail->prev;
    tail->prev=NULL;
    prevNode->next=NULL;
    delete tail;
    tail=prevNode;
    }

    if(head==tail){
        Node* temp=head;
        delete temp;
        head=NULL;
        tail=NULL;

    }
    else {
        Node* prevNode=NULL;
        Node* currNode=head;
        
        while(position!=1){
            position--;
            prevNode=currNode;
            currNode= currNode->next;

        }
        Node*nextNode=currNode->next;
        prevNode->next=nextNode;
        currNode->prev=NULL;
        currNode->next=NULL;
        nextNode->prev=prevNode;
        delete currNode;
    }
    
}

int main(){
    Node* head=NULL;
    Node* tail=NULL;
    insertathead(head,tail,10);
    insertathead(head,tail,20);
    insertathead(head,tail,30);
    insertathead(head,tail,40);
    insertathead(head,tail,50);

    print(head);
    cout<<endl;
  //  insertattail(head,tail,100);
delection(head,tail,2);
print(head);
    return 0;
}


