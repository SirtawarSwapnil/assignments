#include<iostream>
#include<deque>

using namespace std;

int main()
{
   deque<int>d;
   d.push_back(2);  //push_back
   d.push_back(4); 
   d.push_back(9);
   d.push_front(7); // push_front
   d.push_front(9);
   d.push_front(1);
   
   for(auto i:d){
       cout<<i<<"  ";
   }
   cout<<endl;
   cout<<"size : "<<d.size()<<endl;
   cout<<"Element at 2 : "<<d.at(2)<<endl;
   int count{0};
   for (int i = 0; i < d.size(); ++i) 
        if (d.at(i) == 9) 
            ++count;
   cout<<"Frequency for 9 : "<<count<<endl;
   
   //pop
   d.pop_back();
   d.pop_front();
    
   for(auto i:d){
       cout<<i<<"  ";
   } 
   cout<<endl; 
   deque<int>d2;
   d2.assign(5,20);
    for(auto i:d2){
       cout<<i<<"  ";
   }
   cout<<endl;
   
   //insert at position 2
   deque<int>::iterator it = d2.begin();
   it=it+2;
   d2.insert(it,40);
   for(auto i:d2){
       cout<<i<<"  ";
   }
   
   
	return 0;
}

