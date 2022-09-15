#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER NUMBER"<<endl;
    cin>>n;
    int i,start=1;
       for(i=1;i<=n;i++){
        int j;
        for(j=1;j<=i;j++){
             cout<<start;
             start=start+1;
        }
        cout<<endl;
    }
    return(0);}