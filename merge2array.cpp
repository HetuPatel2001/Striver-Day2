#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m;

    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cin>>m;
    int b[m];
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    
    sort(a, a +n);
    sort(b, b +m);

    for(int i=0;i<n;i++){
        if (a[i] > b[0]){
            int temp = a[i];
            a[i] = b[0];
            b[0] = temp;
            sort(b, b +m);
        }
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        cout<<b[i]<<" ";
    }
}