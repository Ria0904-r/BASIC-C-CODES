#include <iostream>
#include <forward_list>

using namespace std;

int main()
{
    forward_list<int> l;
    l.assign(5,30);
    
    for(int x:l){
        cout<<x<<" ";
    }

    return 0;
}
