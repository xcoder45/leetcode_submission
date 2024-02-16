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
   cout<< arr[1].first<<endl; // prints 2
   cout<< arr[1].second<<endl; // prints 5
   cout<< arr[2].first<<endl; // prints 3
   cout<< arr[2].second<<endl; // prints 4


   

   // 

   /*
     vector :- this is the part of STL containers  dynamic in nature and if we want to increase the size we can .
   
   
   */
  vector<int>v;
  v.push_back(1);  // add 1 in emptry vector 
  v.push_back(2);  // add 2 after 1 in vector
  v.push_back(3); // add 3 after 2 in vector
  v.emplace_back(4);  // add 4 after 3 in vector use as similar to push_back. faster then push_back
  cout<<v[3]<<endl;  
  cout<<v.size()<<endl;  
  cout<<v.capacity()<<endl;  
  cout<<v.empty()<<endl;  
  cout<<v.front()<<endl;  
  cout<<v.back()<<endl;  
  cout<<v.data()<<endl;  
  cout<<v.max_size()<<endl;  
 
  /*
      vector of pair data type
  */

 vector<pair<int,int>>vec;
 v.push_back({1,1});
 v.emplace_back(2,4);
 cout<<vec[0].first<<endl;
 cout<<vec[1].second<<endl;

 // v[0] == v.at(0)  means both are same .

 vector<int>::iterator it = v.begin();

 // let say vector v  is ={2,3,4,5,6}

 it++;
 cout<<*it<<endl; // prints 3 

 it+=2;
 cout<<*it<<endl; // prints 5

 vector<int>::iterator it = v.end();
  vector<int>::iterator it = v.rbegin();
   vector<int>::iterator it = v.rend();





   return 0;
}