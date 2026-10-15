#include<iostream>
using namespace std;

int main(){
     int arr[15];
     int n=15;
     cout<<"Enter 15 products IDS:\n";
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
     cout<<"\n Original product IDS:\n";
     for(int i=0;i<n;i++){
        cout<<arr[i]<<"   \n";
     }
     cout<<"\n Duplicate product IDS: \n";
     for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){
                count ++;
                break;
            }
        }
        if(count==0){
            for(int j=i+1;j<n;j++){
                if(arr[i]==arr[j]){
                    cout<<arr[i]<<"  \n";
                    break;
                }
            }
        }
     }
     for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                for(int k=j;k<n-1;k++){
                    arr[k]=arr[k+1];
                }
                n--;
                j--;
            }
        }
     }
     cout<<"product IDS after removing duplicates:\n";
     for(int i=0;i<n;i++){
          cout<<arr[i]<<"   \n";
     }
     for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
     }
     cout<<"\n Sorted product IDS:\n";
     for(int i=0;i<n;i++){
        cout<<arr[i]<<"   \n";
     }
     int key;
     cout<<"\n Enter product ID to search:\n";
     cin>>key;
     int low=0;
     int high=n-1;
     int mid;
     int found = -1;
     while(low<=high){
        mid=low+(high - low)/2;
        if(arr[mid]==key){
            found=mid;
            break;
        }
        else if(arr[mid]<key){
            low=mid+1;
        }else{
            high=mid-1;
        }        
     }
     if(found!=-1){
        cout<<"product id found at index:\n"<<found<<endl;
     }
     else{
        cout<<"product ID not found."<<"  \n";
     }
     return 0;
}