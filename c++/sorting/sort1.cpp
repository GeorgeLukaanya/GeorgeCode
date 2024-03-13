#include<iostream>
#include<cstdlib>
#define MAX 100
using namespace std;
int main(){
    int n;
    int array[MAX];
    cout<<"Enter a number N: "<<endl;
    cin>>n;

    //inputting values in an array
    for(int i=0; i<n; i++){
        array[i]=rand();
    }

    //outputing unsorted array
    for(int i=0; i<n; i++){
        cout<<array[i]<<" ";
    }

    //sorting the array
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            //in ascending order
            if(array[j]>array[i]){
                int temp=array[i];
                array[i]=array[j];
                array[j]=temp;
                //if(array[j]<array[i]){ for descending order
            }
        }
    }
    //sorted array
    cout<<endl;
    for(int i=0; i<n; i++){
        cout<<array[i]<<" ";
    }
    return 0;
}