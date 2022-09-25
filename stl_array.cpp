#include<iostream>
#include<array>

using namespace std;

int main()
{
    array<int,4> a1{4,3,5,1}; 
    array<int,4> a2{8,2,4,6};
    
    cout<<"a1 before swap ";
    int size1=a1.size();
    
    for(int i=0;i<size1;i++)
		cout<<a1[i];
    
    cout<<"\na2 before swap ";
    int size2=a2.size();
    
    for(int i=0;i<size2;i++)
		cout<<a2[i];
    
    //swap
    a1.swap(a2);
    
    cout<<"\na1 after swap ";
    
    for(int i=0;i<size1;i++)
		cout<<a1[i];
    
    cout<<"\na2 after swap ";
    
    for(int i=0;i<size2;i++)
		cout<<a2[i];
    
    cout<<endl<<a1.at(2);
    cout<<boolalpha;
    cout<<"\nEmpty or not : "<<a1.empty()<<endl;

    cout<<"a1 front : "<<a1.front()<<endl;
    cout<<"a2 back : "<<a2.back();
    
    //change data in a1
    cout<<"\nchange a1 data at 2 to 9 :"<<endl;
    a1.at(2)=9;
    for(int i=0;i<size1;i++)
		cout<<a1[i];

	cout<<endl;
    //begin() and end()
    for(auto a=a1.begin();a<a1.end();a++){
        cout<<*a<<" ";
    }
    
	return 0;
}





































