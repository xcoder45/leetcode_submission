#include<bits/stdc++.h>
//<__msvc_all_public_headers.hpp>
using namespace std;

int main()
{
     // cpp STL
     /*
      CPP STL is divided into four parts:
      1) algorithm
      2) functions
      3) containers
      4) iterators

     
     */
    /*
      pairs :- these are the part of utilities library 
    */
   pair<int , int>pq={1,3};  // initializing the pair array or pair library structure.

   cout<<pq.first<<endl;  // it will return the first element of the pair.
   cout<<pq.second<<endl; // it will return the second element of the pair.

   // if we store 3 elements in pair then we use nested functionality of the pairs.

   pair<int , pair<int ,int>>p={1,{4,5}};

   cout<<p.first<<endl; // prints 1
   cout<<p.second.first<<endl; // prints 4
   cout<<p.second.second<<endl; // prints 5

   // array of pair

   pair<int , int>arr[] = {{1,2},{2,5},{3,4}};
   cout<< arr[0].first<<endl; //prints 1
   cout<< arr[0].second<<endl; // prints 2

   /*
     vector :- this is the part of STL containers  dynamic in nature and if we want to increase the size we can .
   
   
   */
  vector<int>v;
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  v.emplace_back(4);
  cout<<v[3]<<endl;


   return 0;
}