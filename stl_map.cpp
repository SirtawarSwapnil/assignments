#include<iostream>
#include<map>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    map<int,char>mp1;
    mp1.insert(pair<int,char>(1,'A'));
    mp1.insert(pair<int,char>(2,'B'));
    mp1.insert(pair<int,char>(3,'C'));
    mp1.insert(pair<int,char>(4,'D'));
    mp1.insert(pair<int,char>(5,'E'));
	cout <<"Map 1 : ";
	 for (auto it = mp1.begin(); it != mp1.end(); ++it) {
        cout <<"("<<it->first << '\t' << it->second
             <<")"<<"\t";
    }
    //copy
    cout <<"\nMap 2 : ";
	map<int,char>mp2 (mp1.begin(),mp1.end());  
	for (auto it = mp2.begin(); it != mp2.end(); ++it) {
        cout <<"("<<it->first << '\t' << it->second
             <<")"<<"\t";
    }
   cout<<"\nmp2 element at pin 4 : "<<mp2.at(4);
   
   if (mp2.count(5))
        cout << "\nThe key 5 is present in mp2\n";
    else cout << "The key 5 is not present\n";
   
	cout<<"\nMap 3 : ";
	
	map<int,char>mp3 (mp1.begin(),mp1.end());
	mp3.erase(mp3.begin(),mp3.find(3)); //erase upto pin 3
	
	for (auto it = mp3.begin(); it != mp3.end(); ++it) {
        cout <<"("<<it->first << '\t' << it->second
             <<")"<<"\t";
    }
    
    mp2.swap(mp3);
    cout <<"\nMap 2 : ";
	for (auto it = mp2.begin(); it != mp2.end(); ++it) {
        cout <<"("<<it->first << '\t' << it->second
             <<")"<<"\t";
    }
    cout<<"\nMap 3 : ";
    for (auto it = mp3.begin(); it != mp3.end(); ++it) {
        cout <<"("<<it->first << '\t' << it->second
             <<")"<<"\t";
    }
    
    //merge
    map<int,char> mp4 {{1,'Z'},{20,'Y'},{30,'X'},{40,'W'},{50,'V'}}; //(1,'z') will not print in merge
    mp3.insert(mp4.begin(),mp4.end());
    cout<<"\nAfter mp3 and mp4 merge ";
    cout<<"\nMap 3 : ";
    for (auto it = mp3.begin(); it != mp3.end(); ++it) {
        cout <<"("<<it->first << '\t' << it->second
             <<")"<<"\t";
    }
    
    
    
    
	return 0;
}

