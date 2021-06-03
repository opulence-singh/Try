#include<iostream.h>
#include<conio.h>
int main(){
    int n,x,y,z;
    x=0;
    y=1;

    cin>>n;
    cout<<x<<y;
    for(int i=0;i<n;i++)
    {
            z=x+y;
            x=y;
            y=z;
            cout<<z;
    }

    return 0;
}
