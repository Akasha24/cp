#include <bits/stdc++.h>
using namespace std;

void lomuto( vector<int>&arr , int pivot){
    int n = arr.size();
    int i = -1 ;

    for(int j = 0 ; j < n ;  j ++){
        if( arr[j] <= pivot ){
            i++;
            swap(arr[i], arr[j]); // j transverses the array while i maintain boundary 

        }
    }
    swap(arr[n-1], arr[i+1]);
}



int main(){

    vector<int> v = {1 , 4 ,5,2, 3, 1,};
    lomuto( v , 1 );
    for(int  i = 0 ; i < 6 ; i ++){
        cout<<v[i]<<" ";
    }

    
}
