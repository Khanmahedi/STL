#include<bits/stdc++.h>
using namespace std;
#define ll       long long
const ll int INF = 9223372036854775807 , nmax = 2501 , block = 350 , N = 3e6+20, mod = 998244353 ;
ll val = 998244353;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<pair < ll , ll > , null_type, less<pair <ll , ll > >, rb_tree_tag,
             tree_order_statistics_node_update>
  ordered_set;
 //order_of_key(k) Number of items striclty smaller than k
  //find_by_order(k) K-th element in a set (counting from index zero)
/*
assign firstly we take 5 elements then
1 2 3 4 5 
0 0 0 0 0 0 */

/*
for resize first we take 5 elements then resize again with n+1, 0
and it is the output 
1 2 3 4 5
1 2 3 4 5 0*/


void solve(){
    ll n ;
    cin >> n ;
    vector < ll > v(n) ;
    for( ll i = 0 ; i < n ; i++) cin >> v[i] ;
    for( ll i = 0 ; i < v.size() ; i++) cout << v[i] << " " ;
        cout << endl;
    v.assign(n+1, 0);

    for( ll i = 0 ; i < v.size() ; i++) cout << v[i] << " " ;
        cout << endl;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    #endif 
    int test = 1 ;    // cin >> test;
    while(test--){solve();}
    return 0 ;
}
