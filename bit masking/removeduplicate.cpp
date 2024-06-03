#include <iostream>
#include <set>
#include <vector>
using namespace std;
void duplicate(vector<int> &ans){
    set<int> st;
    for (int i = 0; i < ans.size(); i++)
    {
        st.insert(ans[i]);
    }
    for(auto &i:ans){
        cout<<i<<" ";
    }

}

int main(){
    int n;
    cin>>n;
    vector<int> ans(n);

    for (int i = 0; i < n; i++)
    {
        cin>>ans[i];
    }
    duplicate(ans);
    
}