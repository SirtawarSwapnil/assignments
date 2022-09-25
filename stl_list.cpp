#include<iostream>
#include<list>
#include<iterator>

using namespace std;

int main()
{
   list<int>l;
   l.push_back(2);  //push_back
   l.push_back(4); 
   l.push_back(9);
   l.push_front(7); // push_front
   l.push_front(6);
   l.push_front(1);
   cout<<"L1 : ";
   l.sort();
   for(auto i:l){
       cout<<i<<"  ";
   }
   cout<<"\nL2 : ";
   list<int>l2;
   for(int i=1;i<7;i++) 
       l2.push_back(i*2);
    //list<int>::iterator it;
    for (auto it = l2.begin(); it != l2.end(); ++it) //using auto
        cout<< *it<<"  ";
    cout << '\n';
   
   //copy elements from L2 to L3
   list<int>l3;
   cout<<"L3 : ";
   l3.assign(l2.begin(),l2.end());  //
   for(auto i:l3){
       cout<<i<<"  ";
   }
  
  //merge L1 and L4
   cout<<"\nL4 : ";
   list<int>l4 {5,3,8,9};
   l4.sort();
   for(auto i:l4){
       cout<<i<<"  ";
   }
   cout<<endl;
   
   cout<<"merge L1 and L4 in L1: ";
   l.merge(l4);
   for(auto i:l){
       cout<<i<<"  ";
   }
   cout<<endl;
   
   //reverse
   cout<<"Reverse new L1 : ";
   l.reverse();
   for(auto i:l){
       cout<<i<<"  ";
   }
	return 0;
}

