#include<iostream>
using namespace std;
main(){
    int a[3][3],i,j;
    cout<<"enter matrix: \n";
    for(i=1;i<=2;i++)
    {
        for(j=1;j<=2;j++){
            cout<<"enter a"<<i<<j;
            cout<<": ";
            cin>>a[i][j];
        }
    }
    cout<<"original matrix is: \n";
    for(i=1;i<=2;i++)
    {
        for(j=1;j<=2;j++){
            
            cout<<a[i][j];
            cout<<"   ";
        }
        cout<<"\n";
    }
    cout<<"transpose of the matrix is: \n";
    for(i=1;i<=2;i++)
    {
        for(j=1;j<=2;j++){
            
            cout<<a[j][i];
            cout<<"   ";
        }
        cout<<"\n";
    }
    return 0;


}