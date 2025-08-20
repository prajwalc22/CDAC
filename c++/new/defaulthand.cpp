#include<iostream>
using namespace std;
void defaultHandler(){
    cout<<"default handler"<<endl;

    //specify the actions to be performed


    //then invoke abort function
    abort();
}

int main(){
set_terminate(defaultHandler);
throw -1;
throw"uncaught exception";
}