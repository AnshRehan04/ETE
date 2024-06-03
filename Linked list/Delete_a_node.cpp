#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this->data=d;
        this->next=NULL;
    }
};
void insert(Node* &head,int val){
    if(head==NULL){
        head=new Node(val);
        return ;
    }
    Node* temp=head;
    while (temp->next)
    {
        temp=temp->next;
    }
    temp->next=new Node(val);
    
}
void printll(Node* &head){
    Node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void deletenode(Node* &head){
    
}

int main(){
    int n;
    cin>>n;
    Node* head=NULL;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin>>val;
        insert(head,val);
    }
    printll(head);
}