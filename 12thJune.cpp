#include <bits/stdc++.h>
using namespace std;
int main () {
	int n;
	cin >> n;

	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

    vector<int> ans(n);

	stack<int> st;

	int count = 0;

    for (int i = 0; i < n; i++) {
    	while (!st.empty() && v[st.top()] <= v[i]) {
    		st.pop();
        }
        if (st.empty()) ans[i] = i+1;
        else ans[i] = i - st.top();
        st.push(i);
    }
    for (int i = 0; i < n; i++) {
    	cout << ans[i] << " ";
    }
    return 0;  
}
----------------------------------------------------------------------------------------------

	#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int n;
  cin>>n;
  vector<int> prices(n);
  for(int i=0; i<n; i++){
    cin>>prices[i];
  }  

  stack<int> s;

  for(int i=0; i<n; i++){
    while(!s.empty() && prices[i]>=prices[s.top()])s.pop();
    if(s.empty())cout<<i+1<<" ";
    else cout<<i-s.top()<<" ";
    s.push(i);
  }
  return 0;
}
