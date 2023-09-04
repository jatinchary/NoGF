#include<bits/stdc++.h>
using namespace std ;
bool present (int arr[] , int n , int key){
    for (int i= 0 ; i< n ; i++) {
if (arr[i]== key)
return true;
    }
    return false;

}
int main(){
    int arr [10] = {1, 3 ,4, 45, 6 ,78, 98 ,90, 8, 76 };
    cout<<"enter the search element"<< endl;
    int key;
    cin>>  key ;
    bool found = present (arr , 10 , key);
    if (found){
        cout<< "present"<< endl;
    }
    else 
    cout << " not present "<< endl;
    return 0;

}