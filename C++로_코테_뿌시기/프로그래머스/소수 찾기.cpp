#include <string>
#include <vector>
#include <cmath>

using namespace std;

int prime[1000001];

void eratos(int n){
    for(int i=2; i<=n; i++){
        prime[i] = i;
    }
    for(int i=2; i<=sqrt(n); i++){
        if(prime[i]==0) continue;
        for(int j=i+i; j<=n; j+=i){
            prime[j]=0;
        }
    }
}
int solution(int n) {
    int answer = 0;
    eratos(n);
    for(int i=2; i<=n; i++){
        if(prime[i]) answer++;
    }
    return answer;
}