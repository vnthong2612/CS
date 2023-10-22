//https://oj.vnoi.info/problem/icpc23_mt_a
#include <bits/stdc++.h>
using namespace std;

const int N = 100050;
int arr[N];
#define REP(i, a, b) for(int i = a;i <=b; i++)
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	freopen("input.txt", "r", stdin);
	int n;
	cin >> n;
	REP(i, 1, n){
		cin >> arr[i];
	}
	int maxx_curr = arr[1];
	int maxx_previous = maxx_curr;
	int M = arr[1], res= -1e9;

	REP(i, 2, n){
		maxx_curr = max(arr[i], arr[i] + maxx_previous);
		maxx_previous = maxx_curr;
		
		M = max(M, arr[i]);
        res = max(res, maxx_curr - M);
        
    }
	
	cout << res;
}