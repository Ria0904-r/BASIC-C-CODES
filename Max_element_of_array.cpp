#include <iostream>

using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int lar=arr[0];
    for(i=1;i<n;i++){
        if(arr[i]>lar){
            lar=arr[i];
        }
    }
    cout<<lar<<endl;
    

    return 0;
}

//Direct Way

#include<iostream>
#include<algorithm>

using namespace std;

int main()
{   
    int arr[] = {10, 20, 100, 40, 50, 500, 8};
    
    int n = sizeof(arr)/sizeof(arr[0]);

    int res = *max_element(arr, arr+n);
    
    cout<<res;
    
    return 0;
}
