#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER NUMBER"<<endl;
    cin>>n;
    int i;
       for(i=1;i<=n;i++){
        int j,start=i;
        for(j=1;j<=i;j++){
        cout<<start;
        start=start-1;
        }
        cout<<endl;
    }
    return(0);}