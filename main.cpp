#include <iostream>
using namespace std;
int main(){
    int a=1;
    int b=1;
    int c;
    int n;
    cin>>n;
    if(n>=2){
        for (int i=0; i<n; i++){
        cout<<a<<endl;
        c=a;
        a=b;
        b=a+c;
        }
    }
    else{
    cout<<"errore";
    }
   return 0;
}
