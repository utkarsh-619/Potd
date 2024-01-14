#include <bits/stdc++.h>
using namespace std;

#define use         ios_base::sync_with_stdio(false); cin.tie(0);
#define ll          long long
#define yes         cout << "YES" << endl
#define no          cout << "NO" << endl

const ll MAXN   = 1E5 + 15;
const double eps = 1E-7;
const ll MOD    = 1E9 + 7;
 
int gcd(ll a, ll b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
 
int lcm(ll a, ll b) {
    return (std::abs(a) / gcd(a, b)) * std::abs(b);
}
 
bool is_prime(ll num) {
    if (num < 2)    return false;
    if (num == 2 || num == 3)   return true;
    if (num % 2 == 0 || num % 3 == 0)   return false;
    int i = 5, w = 2;
    while (i * i <= num) {
        if (num % i == 0)   return false;
        i += w; w = 6 - w;
    }return true;
}
 
void primeFactor(ll n, vector<ll> &nums) {
    while (n % 2 == 0) {
        nums.push_back(2);
        n = n / 2;}
    for (int i = 3; i <= sqrt(n); i = i + 2) {
        while (n % i == 0) {
            nums.push_back(i);
            n = n / i;}}
    if (n > 2)  nums.push_back(n);
}
 
ll t,n,k,temp,sum,ans,a,b,c,x,y,z,mx=INT_MIN,mi=INT_MAX;
char ch;
map<ll,ll> mp;
string str;

void solve(){
    cin >> n; 
    cout<<n-3<<" "<<"1 1 1"<<endl;
}

int main(){
    use;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    cin>>t;
    while(t--)
        solve();
    
    return 0;
}