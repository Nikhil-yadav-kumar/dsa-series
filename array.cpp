// #include<iostream>
// using namespace std;
// int main(){
//     int marks[5];
//     // cout<<sizeof(marks)/4;
//     cout<<"enter the elements:";
//     for(int i=0;i<5;i++){
//         cin>>marks[i];
//     }
//     cout<<"the elemnts are:";
//     for(int i=0;i<5;i++){
//         cout<<marks[i]<<endl;
//     } 
    
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int marks[5];
//     int n=5;
//     int smallest = INT8_MAX;
//     cout<<"enter the elements:";
//     for(int i=0;i<5;i++){
//         cin>>marks[i];
//     }
//     for( int i =0;i<n;i++){
//         if(marks[i]<smallest){
//             smallest=marks[i];
//         }
//     }
//     cout<<"smallest= " << smallest << endl;
//     return 0;
    
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int marks[5];
//     int  i, n=5;
//     int smallest = INT8_MAX;
//     int largest = INT8_MIN;
//     cout<<"enter the elements:";
//     for(int i=0;i<5;i++){
//         cin>>marks[i];
//     }
//     for( int i =0;i<n;i++){
//         smallest = min(marks[i],smallest);
//         largest = max(marks[i],largest);
//     }
//     cout<<"smallest= " << smallest<<endl;
//     cout<<"largest= "<< largest;
//     return 0;
    
// }

// #include<iostream>
// using namespace std;
// void changemark(int marks[],int size){
//     cout<<"in function"<<endl;
//     for(int i=0;i<3;i++){
//         marks[i]=2*marks[i];
//         cout<<marks[i]<<endl;
//     }
// }
// int main(){
//     int marks[3]={38,45,43};

//     changemark(marks, 3);
//     cout<<"in main"<<endl;
//     for(int i=0;i<3;i++){
//         cout<<marks[i]<<" ";
//         cout<<endl;
//     }
// }

#include <iostream>
using namespace std;
int lin_search(int arr[],int n, int item){
    for ( int i =0;i<=6;i++){
        if (arr[i]==item){
            return i;
        }
    }
    return -1;
}

int main (){
    int arr[6];
    cout<<"enter the elements: ";
    for(int i =1;i<=6;i++){
        cin>>arr[i];
    }
    int item;
    cout<<"enter the item to be searched: ";
    cin>>item;
    int result=lin_search(arr,6,item);
    if(result!=-1){
        cout<<"elements found at index "<<result<<endl;
    }
    else {
        cout<<"elements not found";
    }
    return 0;
}
