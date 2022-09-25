#include <iostream>

using namespace std;
  
int main()
{
    // defining a pair
    pair<int,string> P1(1,"AA");
    pair<int,string> P2(2,"BB");
    pair<int,string> P3(3,"CC");
    
  
    cout << P1.first << "  "<< P1.second << endl;
    cout << P2.first << "  "<< P2.second << endl;
    cout << P3.first << "  "<< P3.second << endl;
  
    //make_pair P4 from P1 and P2
    pair<int,string> P4;
    P4=make_pair(P1.first,P2.second);
    cout << P4.first << "  "<< P4.second << endl;
    
    //swap
    cout<<"P1  and P2 before swap "<<endl;
    cout << P1.first << "  "<< P1.second << endl;
    cout << P2.first << "  "<< P2.second << endl;
    P1.swap(P2);
    cout<<"After "<<endl;
    cout << P1.first << "  "<< P1.second << endl;
    cout << P2.first << "  "<< P2.second << endl;
    return 0;
}















