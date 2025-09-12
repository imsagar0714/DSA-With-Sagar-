#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
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
        newnode->prev=temp;
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
        head->prev=newnode;
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
            temp->next->prev=newnode;
            temp->next=newnode;
            newnode->prev=temp;
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
        if (head == NULL) return;

        Node* temp = head;
        if (head->next == NULL) { // only one node
            head = NULL;
        } else {
            head = head->next;
            head->prev = NULL;
        }
        delete temp;
        size--;
    }
    void deleteEnd(){
         if (head->next == NULL) { // only one node
            delete head;
            head = NULL;
            size--;
            return;
        }
        Node* temp=head;
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        temp->next=NULL;
        size--;
        // temp is last node
        // temp->prev->next = NULL; second last node ka next = NULL
        // delete temp;              free memory
        // size--;
    }
    void deleteAtIndex(int idx){
        Node* temp=head;
        if(idx==0) deletehead();
        if (idx == size - 1) {
            deleteEnd();
            return;
        }
        for(int i=1;i<=idx-1;i++){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        temp->next->prev=temp;
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