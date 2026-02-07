#include<bits/stdc++.h>
using namespace std;
class maxheap{
    vector<int>heap;
    void heapify_up(int child){
        while(child>0){
            int parent=(child-1)/2;
            if(heap[parent]<heap[child]){
                swap(heap[parent],heap[child]);
                child=parent;
            }
            else break;
        }
    }
    void heapify_down(int parent){
        int n=heap.size();
        while(parent<n){
            int l=2*parent+1;
            int r=2*parent+2;
            int largest=parent;
            if(l<n && heap[largest]<heap[l]){
                largest=l;
            }
            if(r<n && heap[largest]<heap[r]){
                largest=r;
            }
            if(largest!=parent){
                swap(heap[parent],heap[largest]);
                parent=largest;
            }
            else break;
        }
    }
public:
    void push(int ele){
        heap.push_back(ele);
        heapify_up(heap.size()-1);
    }
    int peek(){
        return heap[0];
    }
    void deleteAt(int i){
        int n=heap.size();
        if(i<0 || i>=n) return;
        heap[i]=heap.back();
        heap.pop_back();
        if(i<n){
            int parent=(i-1)/2;
            if(i>0 && heap[i]>heap[parent]){
                heapify_up(i);
            }
            else heapify_down(i);
        }
    }
    void pop(){
        // deletes the highest priority element
        if(empty()) return;
        swap(heap[0],heap[heap.size()-1]);
        heap.pop_back();
        if(!empty()) heapify_down(0);
    }
    bool empty(){
        return heap.size()==0;
    }
    void display(){
        for(int i=0;i<heap.size();i++){
            cout<<heap[i]<<" ";
        }
    }
    maxheap(vector<int>v){
        heap=v;
        int n =heap.size();
        for(int i=n/2-1;i>=0;i--){
            heapify_down(i);
        }
        // for(int i=1;i<heap.size();i++){
        //     heapify_up(i);
        // }
    }
};
int main(){
    vector<int>v={9,6,1,19,3,2,8,12,5};
    maxheap h(v);
    h.display();
    cout<<endl;
    // to delete , which is a middle element 
    h.deleteAt(1);
    h.display();
}