#include<iostream>
using namespace std;
int maze(int sr, int sc, int er, int ec){
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    return maze(sr+1,sc,er,ec) + maze(sr,sc+1,er,ec);
}
void mazepath(int sr, int sc, int er, int ec, string s){
    if(sr>er || sc>ec) return;
    if(sr==er && sc==ec){
        cout<<s<<endl;
        return;
    }
    mazepath(sr+1,sc,er,ec,s+'D');
    mazepath(sr,sc+1,er,ec,s+'R');
}
int maze2(int m,int n){
    if(m<1 || n<1) return 0;
    if(m==1 && n==1) return 1;
    return maze2(m,n-1) + maze2(m-1,n);
}
int main(){
    cout<<maze(1,1,3,3)<<endl;
    mazepath(1,1,3,3," ");
    cout<<endl;
    cout<<maze2(3,4);
}