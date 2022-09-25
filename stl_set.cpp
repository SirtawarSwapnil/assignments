#include<set>
#include<iostream>
#include<iterator>
#include<algorithm>

using namespace std;
int main(){
    set<int, less<int>> s1{4,7,2,9,15};
    cout<<"S1 :";
    for(auto it=s1.begin();it!=s1.end();it++)
        cout<<*it<<"  ";
    
    cout<<endl<<"S2 :";
    
    set<int, less<int>> s2{15,21,77,8,45};
   // set<int, greater<int>>::iterator it;
    for(auto it=s2.begin();it!=s2.end();it++)
        cout<<*it<<"  ";    
   
   cout<<"\nAfter swap "<<endl;
    s1.swap(s2);
    cout<<"S1 :";
    for(auto it=s1.begin();it!=s1.end();it++)
        cout<<*it<<"  ";
    
    cout<<endl<<"S2 :";
    
    for(auto it=s2.begin();it!=s2.end();it++)
        cout<<*it<<"  "; 
    cout<<endl;
    cout<<"S1 size : "<<s1.size()<<endl;
    cout<<boolalpha;
    cout<<"S1 empty ? - "<<s1.empty()<<endl;
   
   cout<<"S2 lower bound  5: "<<*s2.lower_bound(5)<<endl;  //??
   cout<<"S2 upper bound  8: "<<*s2.upper_bound(8)<<endl;  //??
   
    s2.erase(s2.begin(), s2.find(7));
    for(auto it=s2.begin();it!=s2.end();it++)
        cout<<*it<<"  "; 
    cout<<endl;
    
    //merge 
    set<int> set1{10,20,30}; 
    set<int> set2{15,25,35}; 
    set<int> set3{12,22,32};

    set_union(begin(set1),end(set1),
               begin(set2),end(set2),
               inserter(set3,begin(set3)));
               
    for(auto it=set3.begin();it!=set3.end();it++)
        cout<<*it<<"  "; 
    cout<<endl;
    
    set1.insert(set2.begin(), set2.end());
    for(auto it=set1.begin();it!=set1.end();it++)
        cout<<*it<<"  "; 
    cout<<endl;
 return 0;   
}
