#include <iostream>
#include <vector>


using namespace std;

int main()
{
    vector<int>v{10,15,40,45};
    v.pop_back();
    
    
    for(int x: v){
        cout<<x<<endl; 
    }
    cout<<"front"<<v.front()<<" ";
    cout<<"back"<<v.back()<<" ";

    return 0;
}
