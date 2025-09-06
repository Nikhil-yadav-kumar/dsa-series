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
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<char>vec={'a','b','c','d','e'};
//     for( char i : vec){
//         cout<< i<<endl;
//     }
// }

//vector functions
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> vec={3,4,5,6,7,8};
//     for(int i:vec){
//         cout<<i<<endl;
//     }
//     cout<<"size= "<<vec.size()<<endl; // size functions
//     return 0;
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> vec={3,4,5,6,7,8};
//     for(int i:vec){
//         cout<<i<<endl;
//     }    
//     cout<<"after push back "<<endl;

//     vec.push_back(9); // PUSH_BACK function
//     for(int i:vec){
//         cout<<i<<endl;
//     }
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> vec={3,4,5,6,7,8};
//     for(int i:vec){
//         cout<<i<<endl;
//     }    
//     cout<<"after pop back "<<endl;

//     vec.pop_back(); // POP_BACK function
//     for(int i:vec){
//         cout<<i<<endl;
//     }
// } 


// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> vec={3,4,5,6,7,8};

//     cout<<vec.front()<<endl;// front function    
// } 

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> vec={3,4,5,6,7,8};

//     cout<<vec.back()<<endl;// back function
       
    
// } 

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> vec={3,4,5,6,7,8};

//     cout<<vec.at(3)<<endl;// back function
       
    
// } 

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec;
    vec.push_back(6);
    vec.push_back(4);
    vec.push_back(7);
    vec.push_back(6);
    vec.push_back(6);
    
    cout<<"size= "<<vec.size()<<endl;
    cout<<"capacity= "<<vec.capacity()<<endl;

    return 0;
}