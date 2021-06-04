#include "iostream"
using namespace std;
int power(int n,int p){
    if(p>0)
    return n*power(n,--p);
    return 1;
}
int main(){
    cout<<power(2,5);
    return 0;
}