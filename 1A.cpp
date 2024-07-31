#include<iostream>
using namespace std;

long long getNumStones(int n, int m, int a){
    long long numStones;
    int x = 0;
    int y = 0;
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
    int n,m,a;
    cin>>n>>m>>a;
    cout<<getNumStones(n,m,a)<<endl;
    return 0;
}
