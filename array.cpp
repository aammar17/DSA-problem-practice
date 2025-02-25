#include<iostream>

using namespace std;

int binSearch(int *arr,int n,int key){
    int st = 0, end = n-1;

    while(st<=n){
        int mid = (st+ end)/2;

        if(arr[mid]  == key){
            return mid;
        } else if(arr[mid]<key){
            st = mid + 1;
        } else{
            end = mid - 1;
        }
    }
    return -1;
}


void printArr(int nums[],int n){
    for(int i = 0 ; i<n;i++){
        cout << nums[i] << ",";
    }
    cout << endl;
}


int main(){
int arr[] = {1,2,3,4,5};
int n = sizeof(arr) / sizeof(int);

cout<< binSearch(arr,n,4)<< endl;

    return 0;
}