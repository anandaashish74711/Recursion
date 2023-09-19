#include<iostream>
using namespace std;
int func(){
    cout<<"My name is Kanhaiya"<<endl;
   
    func();
     return 0;
}
int main(){
    func();
    return 0;
}
//infinite  calling