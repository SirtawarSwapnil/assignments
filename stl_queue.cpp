#include<iostream>
#include<queue>
using namespace std;

int main()
{
   queue<int>q;
   q.push(10);
   q.push(20);
   q.push(30);
   q.push(40);
   q.push(50);
   cout<<q.size()<<endl;
   while(!q.empty()){
       cout<<q.front()<<" ";
       q.pop();
   }
   //priority queue
   cout<<"\nPriority queue :"<<endl;
   priority_queue<int,vector<int>,greater<int> >q1;
   q1.push(100);
   q1.push(300);
   q1.push(200);
   q1.push(150);
   
   while(!q1.empty()){
       cout<<q1.top()<<" ";
       q1.pop();
   }
   cout<<endl;
   
   priority_queue<int,vector<int>,less<int> >q2;
   q2.push(100);
   q2.push(300);
   q2.push(200);
   q2.push(150);
   
   while(!q2.empty()){
       cout<<q2.top()<<" ";
       q2.pop();
   }
   
	return 0;
}

