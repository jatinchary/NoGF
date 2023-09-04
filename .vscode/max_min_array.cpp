#include<bits/stdc++.h>
using namespace std ;
int getmax(int arr[] , int a)
{
    int max = INT_MIN;
    for(int i = 0 ;i<a; i++ ){
        if ( arr[i]> max)
         {
        max= arr[i] ;
    }}
    return max ;
}
int getmin(int arr[] , int a){
    int min = INT_MAX;
    for(int i = 0 ;i<a; i++ ){
        if ( arr[i]< min){
        min = arr[i] ;
    }}
    return min ;
}
int main(){
    int n ;
    cin >> n;
    int arr[100];
    for (int i =0 ; i< n ; i++){
        cin >> arr[i];
    }
    cout << " max element is "<< getmax(arr, n ) << endl;
     cout << " min element is "<< getmin(arr , n )<< endl ;
}