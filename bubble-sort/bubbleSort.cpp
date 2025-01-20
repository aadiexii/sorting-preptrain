//C++ Program
//Bubble Sort
#include<bits/stdc++.h>
using namespace std;
int finalArr(vector<int> &arr){
    int n = arr.size();
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}
void BubbleSort(vector <int> &arr){
	int n= arr.size();
    for(int i= n-1; i>=0; i--){ 
        for(int j=0; j<=i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
    cout<< "Sorting is completed, lets move to printing" << endl;;
    finalArr(arr);
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    BubbleSort(arr);
}