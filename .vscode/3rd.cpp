#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum=0;
    cin >> n  ; 
    int i= 2;
    while (n<i){
        sum= sum + i(i+2)/2;
        i++;
        cout << sum ;
         

    }
    return 0;
}