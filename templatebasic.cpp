#include <iostream>
#include <vector>

using namespace std;
template<typename T>
T myMax(T x,T y){
    return(x>y)?x:y;
    
}
  int main(){
   cout<<myMax<int>(3,7)<<endl;
   cout<<myMax<char>('c','g')<<endl;
   cout<<myMax<double>(2.33,2.56)<<endl;
   return 0;
}
