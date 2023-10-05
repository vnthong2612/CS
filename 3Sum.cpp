#include <bits/stdc++.h>
using namespace std;

int arr[3100];
#define rep(i,a ,b) for(int i = a; i <= b;i++)
int bSearch(int arr[], int l , int r, int x){
	int m;

	while(l <= r){
		m = l + (r-l)/2;
		if(arr[m] == x){
			return m;
		}else if(arr[m] < x){
			l = m+1;
		}else{
			r = m-1;
		}
	}	
	return -1;

}
int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	int n;
	cin >> n;
	rep(i, 1, n){
		cin >> arr[i];
	}
	sort(arr+1 , arr+n+1);
	int cnt = 0;
	rep(i, 1, n){
		cout << arr[i] << " ";
	}
	cout << endl;
	rep(i, 1, n){
		rep(j, i+1, n){
			if(bSearch(arr, j+1, n, -(arr[i]+ arr[j]))!=-1){
				cnt++;

			}
		}
	}
	cout << cnt;
	return 0;

}