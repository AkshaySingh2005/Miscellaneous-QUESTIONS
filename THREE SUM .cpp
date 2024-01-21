// ! THREE SUM PROBLEM (2 APPROACHES) //

#include<bits/stdc++.h>
using namespace std;

//^  1.BRUTE FORCE APPROACH  
//^ TIME COMPLEXITY O(N^3)

//& code : 

int main(){
    int n;cin>>n;
    int target;cin>>target;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    bool found = false;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;j<n;j++){
                if(arr[i]+arr[j]+arr[k]==target){
                    found = true;

                }
            }
        }
    }
    if(!found){
        cout<<"NO";

    }
    else{
        cout<<"YES";
    }

} 

//^ OPTIMIZED APPROACH 
//^ TIME COMPLEXITY O(N^3)

// step1 : sort the array
// step2 : fix the first element 
// step3 : provide a condition so that it stops at last elemet
// step4 : traverse the array after selecting one element thus it will convert the problem in two sum problem
// example :

// target = 24 ,  array = 1,3,6,7,9,12(after sorting)
// select 1 then traverse rest of the array sum = 24-1 = 23(not found)
// then move the pointer to 3 then traverse rest of the array sum = 24-3 = 21(found)
// 3 + 9 + 12 = 24 break

//& code :

int main(){

    int n;cin>>n;
    int target;cin>>target;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    bool found = false;

    sort(arr,arr+n);

    for(int i=0;i<n;i++){
        int lo = i+1 , hi = n-1;
        while(lo<hi){
            int current = arr[i]+arr[lo]+arr[hi];
            if(current == target){
                found = true;

            }
            if(current < target){
                lo++;

            }
            else{
                hi--;
            }

        }

    }
    if(found){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }



}












