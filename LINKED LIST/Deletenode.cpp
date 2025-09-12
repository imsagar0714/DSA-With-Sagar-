#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
Node* deleteNode(Node* head,Node* tar){
    if(tar==head){
        head=head->next;
        return head;
    }
    Node* temp=head;
    while(temp->next!=tar){
        temp=temp->next;
    }
    temp->next=temp->next->next;
    return head;
}
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    display(a);
    cout<<endl;
    Node* head =a;
    head=deleteNode(head,a);
    display(head);
}