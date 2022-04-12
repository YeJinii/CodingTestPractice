#include <iostream>
using namespace std;

int main(void){
    int T; cin>>T;
    while(T--){
        int H, W, N; cin>>H>>W>>N;
        int floor = N%H;
        int num = N/H+1;
        cout<<floor*100+num<<'\n'; 
    }
}