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
class LinkedList{
public:
    Node* head;
    int size;
    LinkedList(){
        head=NULL;
        size=0;
    }
    void InsertAtEnd(int val){
        Node* newnode=new Node(val);
        if(size==0){
            head=newnode;
            size++;
            return;
        }
        Node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
        size++;
    }
    void InsertAtBegin(int val){
        Node* newnode=new Node(val);
        if(size==0){
            head=newnode;
            size++;
            return;
        }
        newnode->next=head;
        head=newnode;
        size++;
    }
    void InsertAtIdx(int idx,int val){
        Node* newnode=new Node(val);
        if(idx==0) InsertAtBegin(val);
        else{
            Node* temp=head;
            for(int i=1;i<=idx-1;i++){
                temp=temp->next;
            }
            newnode->next=temp->next;
            temp->next=newnode;
            size++;
        }
    }
    int GetAtIdx(int idx){
        if(idx<0 || idx>=size) cout<<"invalid";
        Node* temp=head;
        for(int i=1;i<=idx;i++){
            temp=temp->next;
        }
        return temp->val;
    }
    void deletehead(){
        head=head->next;
        size--;
    }
    void deleteEnd(){
        Node* temp=head;
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        temp->next=NULL;
        size--;
    }
    void deleteAtIndex(int idx){
        Node* temp=head;
        if(idx==0) deletehead();
        for(int i=1;i<=idx-1;i++){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        size--;
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
    }
};
int main(){
    LinkedList list;
    list.InsertAtEnd(10);
    list.InsertAtEnd(20);
    list.InsertAtEnd(30);
    list.InsertAtEnd(40);
    list.InsertAtBegin(1);
    list.InsertAtIdx(3,25);
    cout<<list.GetAtIdx(4);
    list.deletehead();
    list.deleteEnd();
    list.deleteAtIndex(3);
    cout<<endl;
    list.display();
}