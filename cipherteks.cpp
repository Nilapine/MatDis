#include<iostream>
#include<string>
using namespace std;
int main(){
    int i,j,k;
    string s,t;
    int key;
    cout<<"Tulis kunci : \n";
    cin>>key;
    cout<<"Tulis pesan (kapital tanpa spasi) :\n";
    cin>>s;
    for(i=0;i<s.size();i++){
        t+=(s[i]-'A'+key)%26+'A';
    }
    cout<<"Pesan cipherteks : "<<t<<'\n';
    return 0;
}
