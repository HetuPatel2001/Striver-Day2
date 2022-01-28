#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,repeat,absent;
    cin>>n;
    int a[n],b[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        b[i] = i+1;
    }
    sort(a, a +n);

    for(int i=0;i<n;i++){
        if (a[i] == a[i+1]){
            repeat = a[i];
        }
    }

    for(int i=0;i<n;i++){
        if(a[i] != b[i]){
            absent = b[i];
        }
    }

    cout<<"{"<<repeat<<","<<absent<<")"<<endl;
}