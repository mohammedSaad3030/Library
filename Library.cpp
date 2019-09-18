/*
Ctrl + Shift + L delete the line
Ctrl + L        delete the line and keep it in your cilpboard
Ctrl + D  repeat the line
Ctrl + Shift + C on codeblocks  || Ctrl + Shift + / in clion    line comment
Ctrl + Shift + X on codeblocks  || Ctrl + Shift + / in clion    line uncomment
 */

///minimization : (st + ed) / 2;
///maximization : (st + ed + 1)/ 2;

///a = 97  z = 122
///A = 65  Z = 90

#include <bits/stdtr1c++.h>

using namespace std;

#define endl            "\n"
#define pb              push_back
#define all(v)			((v).begin()), ((v).end())
#define sz(v)			((int)((v).size()))
#define ll              long long
#define ld              long double
#define rep(i,n)        for(int i=0 ; i<sz(n) ; i++)
#define lp(i, n)        for(int i = 0 ; (int)i<n ; i++)
#define loop(i, x, n)   for(int i=x ; (int)i<=n ; i++)

typedef vector<int> vi;
typedef deque<int> de;
typedef map<int, int> imap;
typedef map<char, int> cmap;

const double PI = 3.14159265358979323846;
const double PI = acos(-1.0);
const double EPSILON = 0.001;
const double EPSILON = 1e-9;
const ll INF = 1e15;
const int MOD = 1e9 + 7;

///memset(vis, 0, sizeof vis);

///double equality
bool Equal(double a, double b)
{
    return fabs(a - b) < EPSILON;
}

///Double whole comparison
///Return 0 for a==b, 1 for a > b, -1 for a < b
int comp_double(double a, double b)
{
	//If very small difference, then equal
	if(fabs(a - b) <= EPSILON
		return 0;
	return a < b ? -1 : 1;
}

///Ceil division
ll ceilDiv(ll a, ll b)
{
    return (a + b - 1)/b;
}

///gcd
int gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b ); }

///interval summation function
int summ(int i, int n)
{
    if(i == 1) return(n* (n+1) / 2);
    return (summ(1, n) - summ(1, i-1));
}

///Size of an array
int n = sizeof(arr)/sizeof(arr[0]); 

///transform(Iterator inputBegin, Iterator inputEnd, Iterator OutputBegin, unary_operation);

///Convert string tolower or toupper letters
transform(su.begin(), su.end(), su.begin(), ::toupper); 

///Increment all elements of an array
transform(arr, arr+n, arr, increment);

///Add two arrays and save the result in res array
transform(arr1, arr1+n, arr2, res, plus<int>());



///fining all dividors of a number g
vector<int> dividors;
for(int i = 1 ; i <= g/i ; i++)
{
    if(g%i == 0)
    {
        dividors.push_back(i)
        if(g/i != i) dividors.push_back(g/i);;
    }
}///You can sort the dividors vector (if you need the dividors to be sorted) after you finish generating it.



///Permutations 
https://www.geeksforgeeks.org/write-a-c-program-to-print-all-permutations-of-a-given-string/
///A string of length n has 00n! permutation.

int ctr; ///Number of permutations.
void findPermutations(int arr[], int n)
{
    sort(arr, arr + n);
    do
    {
        ctr++;
        lp(i, n)
        {
            cout << arr[i] << " " ;
        }
        cout << endl;
    } while (next_permutation(arr, arr + n));
}

int ctr; ///Number of permutations.
void findPermutations(string str)
{
    sort(all(str));	///all(str) : str.begin(), str.end()
    do
    {
        ctr++;
        cout << str << endl;
    } while (next_permutation(all(str)));
}

///A string of length n has n! permutation.
void permute(string a, int l, int r)
{
    if (l == r)
        cout<<a<<endl;
    else
    {
        // Permutations made
        for (int i = l; i <= r; i++)
        {
            // Swapping done
            swap(a[l], a[i]);

            // Recursion called
            permute(a, l+1, r);

            //backtrack
            swap(a[l], a[i]);
        }
    }
}


///Fibonacci
///The sequence Fn of Fibonacci numbers is defined by the recurrence relation (Fn = Fn-1 + Fn-2)
///with seed values (F0 = 0 and F1 = 1.)

///Get n-th Fibonacci Number.
int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n-1) + fib(n-2);
}

///Generate Fibonacci Series up to n number of terms
vi fibvec;
void fibSeries(int n)
{
    int t1 = 0, t2 = 1, nextTerm = 0;
    for (int i = 1; i <= n; ++i)
    {
        // Prints the first two terms.
        if(i == 1)
        {
            fibvec.pb(t1);
            continue;
        }
        if(i == 2)
        {
            fibvec.pb(t2);
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;

        fibvec.pb(nextTerm);
    }
}


///Bits manipulation (Bitmasks)
void printSet(int s)
{
  cout << "s = " << s << endl;
  stack<int> st;
  while (s)
    st.push(s % 2), s /= 2;
  while (!st.empty())                         // to reverse the print order
    {cout << st.top(); st.pop();}
  cout << endl;
}
#define isOn(S, j) (S & (1 << j))
#define setBit(S, j) (S |= (1 << j))
#define clearBit(S, j) (S &= ~(1 << j))
#define toggleBit(S, j) (S ^= (1 << j))
#define lowBit(S) (S & (-S))
#define setAll(S, n) (S = (1 << n) - 1)

#define modulo(S, N) ((S) & (N - 1))   // returns S % N, where N is a power of 2
#define isPowerOfTwo(S) (!(S & (S - 1)))
#define nearestPowerOfTwo(S) ((int)pow(2.0, (int)((log((double)S) / log(2.0)) + 0.5)))
#define turnOffLastBit(S) ((S) & (S - 1))
#define turnOnLastZero(S) ((S) | (S + 1))
#define turnOffLastConsecutiveBits(S) ((S) & (S + 1))
#define turnOnLastConsecutiveZeroes(S) ((S) | (S - 1))


///DFS
void dfs(int node)
{
	visited[node] = true;

	rep(i, adj[node])
	{
		int child = adj[node][i];
		if (!visited[child])	// To avoid cyclic behavior
			dfs(child);
	}

	topsort.push_back(node);	// DAG // Other way Indegree / Outdegree
}

bool isSingleComponent() {
    //because we use 'vis' global variable, we need to clear it before we start
    //if you only call this function once, you don't need to clear it (because it is default initalized to false)
 
    memset(vis, 0, sizeof vis); //function that clears array, use for-loop if you want.
 
    //Start DFS from any node you want.
    DFS(1);
 
    //one-based loop because input is one-based
    for (int i = 1; i <= n; i++) {
        if (vis[i] == false)
            return false;
    }
    return true;
}

void dfs_EdgeClassification(int node)
{
	start[node] = timer++;

	rep(i, adj[node])
	{
		int child = adj[node][i];
		if (start[child] == -1)	// Not visited Before. Treed Edge
			dfs_EdgeClassification(child);
		else {
			if(finish[child] == -1)// then this is ancestor that called us and waiting us to finish. Then Cycle. Back Edge
				anyCycle = 1;
			else if(start[node] < start[child])	// then you are my descendant
				;	// Forward Edge
			else
				;	// Cross Edge
		}
	}

	finish[node] = timer++;
}

int cnt = 0;
void cntReachalbleCells(int r, int c)
{
    if( !valid(r, c) || maze[r][c] == 'X' || vis[r][c] == 1)
		return;		// invalid position or block position


	vis[r][c] = 1;	// we just visited it, don't allow any one back to it
	cnt++;

	// Try the 4 neighbor cells
	cntReachalbleCells(r, c-1);
    cntReachalbleCells(r, c+1);
    cntReachalbleCells(r-1, c);
    cntReachalbleCells(r+1, c);
}

/// to know the farthest node of a particular node, and the number of nodes in that path
void dfs(int node, int d = 1)
{
    vis[node] = 1;
    for(auto & v: adj[node])
    {
        if(!vis[v]) dfs(v, d+1);
    }
    if(d > mxd)
    {
        mxd = d;
        mxnode = node;
    }
}

void farthestNode(int node)
{
    memset(vis, 0, sizeof vis);
    mxd = 0; mxnode = -1;
    dfs(node);
    cout << "From node : " << node << ", the farthest node you can reach is : " << mxnode
    << ", and the number of nodes on that path is : " << mxd << "\n";
}

/// farthest path in the tree as all
void dfs(int node, int d = 1)
{
    vis[node] = 1;
    for(auto & v : adj[node])
    {
        if(!vis[v])
            dfs(v, d+1);
    }
    if(d  > mxd)
    {
        mxd = d;
        mxnode = node;
    }
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
    	freopen("output.txt", "w", stdout);
    	#else
    	#endif
	
	///Bits manipulation 
	int s = 34;
	printSet(s);
	cout << "2. Multiply s by 2, then divide S by 4 (2x2), then by 2\n";
	s = 34; printSet(s);
	s = s << 1; printSet(s);
	s = s >> 2; printSet(s);
	s = s >> 1; printSet(s);
	cout << endl;

	cout << "3. Set/turn on the 3-th item of the set\n";
	s = 34; printSet(s);
	setBit(s, 3); printSet(s);
	cout << endl;

	int T;
	cout << "4. Check if the 3-th and then 2-nd item of the set is on?\n";
	s = 42; printSet(s);
	T = isOn(s, 3); if(T) cout << "ON\n"; else cout << "OFF\n";
	T = isOn(s, 2); if(T) cout << "ON\n"; else cout << "OFF\n";

	cout << "5. Clear/turn off the 1-st item of the set\n";
	s = 42; printSet(s);
	clearBit(s, 1); printSet(s);
	cout << endl;

	cout << "6. Toggle the 2-nd item and then 3-rd item of the set\n";
	s = 40; printSet(s);
	toggleBit(s, 2); printSet(s);
	toggleBit(s, 3); printSet(s);
	cout << endl;

	cout << "7. Check the first bit from right that is on\n";
	s = 40; printSet(s);
	T = lowBit(s); cout << "T = " << T << " (this is always a power of 2)\n";
	s = 52; printSet(s);
	T = lowBit(s); cout << "T = " << T << " (this is always a power of 2)\n";
	cout << endl;

