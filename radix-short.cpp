#include<iostream>
using namespace std;

int main(){
    int i,j,n,key;
    cout<<"Enter The array size"<<'\n';
    cin>>n;
    int shortarray[n];
     cout<<"Enter The value"<<'\n';
    for (i=0; i<n;i++){
        cin>>shortarray[i];
    }
   
    for(j=1;j<n;j++){
        key=shortarray[j];
        i=j-1;
        while(i>=0 && (shortarray[i]%10)>(key%10)){
            shortarray[i+1]=shortarray[i];
            i=i-1;
        }
        shortarray[i+1]=key;
    }

    for(j=1;j<n;j++){
        key=shortarray[j];
        i=j-1;
        while(i>=0 && ((shortarray[i]%100)/10)>((key%100)/10)){
            shortarray[i+1]=shortarray[i];
            i=i-1;
        }
        shortarray[i+1]=key;
    }

    for(j=1;j<n;j++){
        key=shortarray[j];
        i=j-1;
        while(i>=0 && (shortarray[i]/100)>(key/100)){
            shortarray[i+1]=shortarray[i];
            i=i-1;
        }
        shortarray[i+1]=key;
    }
    
    cout<<"Sorted value:"<<'\n'<<endl;
    
    for(i=0;i<n;i++)
        cout<<shortarray[i]<<" "<<endl;
    return 0;
}
