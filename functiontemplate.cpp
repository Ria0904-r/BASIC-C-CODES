//Changes which have to do while setting a limit are written in comments//

#include <iostream>
#include <vector>

using namespace std;
template<typename T>     //template<typenameT,int limit>
T arrMax(T arr[],int n){   //if(n>limit){ } //         
    T res=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>res)
        {
            res=arr[i];
        }
    }
    return res;
}
    

  int main(){
      int arr1[]={10,34,67};
      
   cout<<arrMax<int>(arr1,3)<<endl;       //<int,100>(arr1,3)//
   float arr2[]={56,78,21,76,34,230};
   cout<<arrMax<float>(arr2,6)<<endl;
   
   return 0;
}
