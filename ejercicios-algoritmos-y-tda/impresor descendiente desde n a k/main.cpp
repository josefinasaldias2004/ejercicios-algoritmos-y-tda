#include <iostream>

using namespace std;

int main()
{
int n;
int k;
    cout <<"ingrese n, luego ingrese k" << endl;
    cin>>n;
    cin>>k;
    if (n>k){
    for (int i=n; i>=k; i--){
    cout<<i<<endl;}
    }
    else {
    cout<<"n no puede ser menor a k";
    }

    return 0;
}
