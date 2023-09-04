#include<bits/stdc++.h>

using namespace std;
 int sumPrime(number){


         int counter;
         int sum=0;
         for(counter=2;counter<=(number/2);counter++){
           if(number%counter==0){
              sum=counter;
              counter++;
              sum+=counter;


              }
           return sum;  

          }
    }

int main(){
    cin>>n;
   sumPrime(n);
   return 0;
   
}