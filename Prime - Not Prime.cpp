#include <iostream>
using namespace std;
int main ()
{
int num,i;
cout<<"Enter your number:"<<flush;
cin>>num;
for(i=2;i<=num;i++){
    if(num%2==0){
        cout<<"Not Prime";
    }
    else{
        cout<<"Prime";
    }
    return 0;
  }
}