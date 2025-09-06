// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     // declaration or syntax of vector
//     // vector<int> vec;
//     // vector<int> vec = {1,2,3};
//     vector<int>vec(3,1);
//     cout<<vec[0]<<endl;
//     cout<<vec[1]<<endl;
//     cout<<vec[2]<<endl;


// }
//for Each loop
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<char>vec={'a','b','c','d','e'};
    for( char i : vec){
        cout<< i<<endl;
    }
}