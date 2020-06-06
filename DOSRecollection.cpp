#include<iostream>
#include<windows.h>
using namespace std;
int number;

void JustSafe(){
  
  
}
void DirtyDirty(){

}
void BadBoy(){

}
void start(){
    cout<<"Welocme to 'Some Lost'Game"<<endl;
    cout<<"Now Please select a mode"<<endl;
    cout<<"1. Just Safe 2. dirty! dirty 3.bad boy"<<endl;
    cout<<">";
    cin>>number;
    if(number==1){
      cout<<"Start 'Just Safe Mode'"<<endl;
      system("cls");
      JustSafe();
    }
}

int main(){
    
}
