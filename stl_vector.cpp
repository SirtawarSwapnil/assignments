#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector<int> v{4,3,7};
    for(auto i:v){
        cout<<i<<"  ";
    }
    cout<<"\nsize : "<<v.size()<<endl;
    cout<<"Capacity : "<<v.capacity()<<endl;
    
    //push_back()
    v.push_back(8);
    for(auto i:v){
        cout<<i<<"  ";
    }
    cout<<"\nsize : "<<v.size()<<endl;
    cout<<"Capacity : "<<v.capacity()<<endl;
    
    v.shrink_to_fit();
    cout<<"\nsize : "<<v.size()<<endl;
    cout<<"Capacity : "<<v.capacity()<<endl;
    v.push_back(9);
    v.push_back(3);
 
    v.pop_back();  // pop_back()---3
    for(auto i:v){
        cout<<i<<"  ";
    }
    cout<<endl;
    
    //begin() and end()
    for(auto a=v.begin();a<v.end();a++){
        cout<<*a<<"  ";
    }
    cout<<endl;
    
    //rbegin() and rend()
    for (auto a=v.rbegin();a<v.rend();a++)
        cout<<*a<<"  ";
        
    cout<<"\nElement at 2nd position : "<<v.at(2)<<endl; 
    // removes the first element
    v.erase(v.begin());  //
    
    vector<int>v2;
    v2.assign(4,11);   //vector 2 : 11 11 11 11
    cout<<"V2 : ";
    for(auto i:v2){
        cout<<i<<"  ";
    }    
    
    //swap
    v.swap(v2);
    cout<<"\nSwapping v1 and v2 "<<endl;
    cout<<"V1 :";
    for(auto i:v){
        cout<<i<<"  ";
    }cout<<endl;
    
    cout<<"V2 :";
    for(auto i:v2){
        cout<<i<<"  ";
    }
	
	//merge
	vector<int>v1 {1, 3, 4, 5, 20, 30};
    vector<int>v2 {1, 5, 6, 7, 25, 30};
    
    v2.insert(v2.end(),v1.begin(),v1.end());
 
    cout << "The new container after merging is :\n";
    for (int &x : v2)
    	cout << x << " ";
    cout << endl;
		
	return 0;
}

