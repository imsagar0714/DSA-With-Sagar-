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
class Deque{
public:
    Node* head;
    Node* tail;
    int sz;
    Deque(){
        head=tail=NULL;
        sz=0;
    }
    void pushback(int data){
        Node* a=new Node(data);
        if(sz==0)head=tail=a;
        else{
            tail->next=a;
            a->prev=tail;
            tail=a;
        }
        sz++;
    }
    void pushfront(int data){
        Node* a=new Node(data);
        if(sz==0)head=tail=a;
        else{
            a->next=head;
            head->prev=a;
            head=a;
        }
        sz++;
    }
    void popfront(){
        if(sz==0){
            cout<<"empty"<<endl;
        }
        head=head->next;
        sz--;
    }
    void popback(){
        if(sz==0){
            cout<<"empty"<<endl;
        }
        else if(sz==1){
            head=tail=NULL;
            return;
        }
        Node* a=tail->prev;
        a->next=NULL;
        tail=a;
        sz--;
    }
    int front(){
        if(sz==0){
            cout<<"empty"<<endl;
            return -1;
        }
        return head->val;
    }
    int back(){
        if(sz==0){
            cout<<"empty"<<endl;
            return -1;
        }
        return tail->val;
    }
    int size(){
        Node* temp=head;
        int len=0;
        while(temp){
            len++;
            temp=temp->next;
        }
        return len;
    }
    void display(){
        Node* temp=head;
        while(temp){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        return;
    }
};
int main(){
    Deque q;
    q.pushback(10);
    q.pushback(20);
    q.pushback(30);
    q.pushback(40);
    q.pushback(50);
    q.display();
    cout<<endl;
    q.popback();
    q.display();
    q.popfront();
    cout<<endl;
    q.display();
    q.pushfront(100);
    cout<<endl;
    q.display();
}