#include <bits/stdc++.h>
using namespace std;

#define use         ios_base::sync_with_stdio(false); cin.tie(0);
#define ll          long long
#define yes         cout << "YES" << endl
#define no          cout << "NO" << endl
const ll MAXN   = 1E5 + 15;
const double eps = 1E-7;
const ll MOD    = 1E9 + 7;

template<typename T>
void printVector(vector<T>& v) {
    for(T a:v) cout << a<< " ";
    cout << "\n";
}

bool isVowel(char c) {
    c = tolower(c);
    return (isalpha(c) && (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'));
}

template<typename T>
T gcd(T a, T b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

template<typename T>
T lcm(T a, T b) {
    return (abs(a) / gcd(a, b)) * abs(b);
}

template<typename T>
bool is_prime(T num) {
    if (num < 2)    return false;
    if (num == 2 || num == 3)   return true;
    if (num % 2 == 0 || num % 3 == 0)   return false;
    int i = 5, w = 2;
    while (i * i <= num) {
        if (num % i == 0)   return false;
        i += w; w = 6 - w;
    }return true;
}

template<typename T>
void primeFactor(T n, vector<T> &nums) {
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
string str;

void solve(){
    cin >> str;
    n = str.length();
    for(int i=0;i<n;i++){
        if(isVowel(str[i]) || tolower(str[i]) == 'y') continue;
        cout<<"."<<(char)tolower(str[i]);
    }
    cout<<endl;
}

int main(){
    use;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    // cin>>t;
    // while(t--)
        solve();
    
    return 0;
}