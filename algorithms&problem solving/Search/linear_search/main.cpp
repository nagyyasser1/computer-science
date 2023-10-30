#include <iostream>
using namespace std;


int main(){
    cout<<"hello world"<<endl;
    int arr [5] = {1,2,3,4,5};
    for (int i = 0; i < 5; i++)
    {
        if(arr[i] == 1){
            cout<<"in index :"<<i<<endl;
            break;
        }
    }
    
    return 0;
}