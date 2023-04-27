#include <iostream>
using namespace std;
void greatestNumber(int a,int b,int c){
    if(a>b && a>c){
        cout<<"Greatest number is : "<<a;
        
    }
    else if(b>a && b>c){
        cout<<"Greatest number is : "<<b;
    }
    else{
        cout<<"Greatest number is : "<<c;
    }
}
int main() {
   int a,b,c;
   cin>>a >>b>>c;
   greatestNumber(a,b,c);

    return 0;
}