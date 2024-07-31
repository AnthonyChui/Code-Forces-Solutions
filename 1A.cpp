#include<iostream>
using namespace std;

long long getNumStones(long long n, long long m, long long a){
    long long numStones;
    long long x = 0;
    long long y = 0;
    x = m/a;
    if(m%a!=0){
    x++;
    }
    y = n/a;
    if(n%a!=0){
    y++;
    }
    numStones = x*y;
    return numStones;
}

int main(){
    long long n,m,a;
    cin>>n>>m>>a;
    cout<<getNumStones(n,m,a)<<endl;
    return 0;
}