//https://leetcode.com/problems/longest-palindromic-substring/?source=submission-ac
#include <bits/stdc++.h>
using namespace std;
const int N = 1010;
int f[N][N];
#define rep(i,a ,b) for(int i = a; i<=b;i++)
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);	
	string s;
	cin >> s;
	int n = s.length();
	rep(i, 1, n){
		f[i][i] = 1;
	}
	int maxx = 1;
	int l = 1, r=2, v=2, left, right;
    if(n==1){
        cout << s;
        return 0;
    }

	while(r != n+1){
		if(r-l == 1){
			if(s[r-1]!= s[l-1]){
				f[l][r] = 0;
			}else{
				f[l][r] = 2;
			}
		}else{
			if(s[l-1] != s[r-1]){
				f[l][r] = 0;
			}else{
				if(f[l+1][r-1]){
					f[l][r] = 2 + f[l+1][r-1];
				}
			}
		}
		if(maxx < f[l][r]){
			maxx = f[l][r];
            left = l;
            right = r;

		}
		if(r!= n){
			l++;
			r++;
		}else{
			r = v+1;
			l=1;
			v++;
		}
	}
	cout << s.substr(left-1, right-left+1);
	return 0;
}