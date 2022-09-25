#include<iostream>
#include<string>
#include<stack>

using namespace std;

void print(pair<int,string>p) {
        cout<<"("<<p.first<<","<<p.second<<")"<<endl;
    }

int main()
{
    stack<int>st;
    st.push(10);
    st.push(30);
    st.push(15);
    st.push(60);
    cout<<st.size()<<endl;
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
	cout<<st.size()<<endl;
//	cout<<boolalpha;
	cout<<"Empty : "<<st.empty()<<endl;
	
	//stack using pairs
	stack<pair<int, string> > sp;
    
    sp.push({ 1, "A" });
    sp.push({ 2, "B" });
    sp.push({ 3, "C" });
    sp.push({ 4, "D" });
    sp.push({ 5, "E" });
    
    while (!sp.empty()) {
        print(sp.top());
        sp.pop();
    }
	
	return 0;
}









