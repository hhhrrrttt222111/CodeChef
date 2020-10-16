#include<bits/stdc++.h>
using namespace std;

class Node{
public:
	int h , t ;
	Node(){ h = t = 0 ; }
	Node(int a , int b){
		h = a ; t = b ;
	}
};
Node *segtree;
int *lazy;

void buildTree(int start, int end, int treenode){
	if(start == end){
		segtree[treenode].h=0;
		segtree[treenode].t=1;
		return ;
	}
	int mid = (start+end)/2;
	buildTree(start, mid, 2*treenode+1);
	buildTree(mid+1, end, 2*treenode+2);
	segtree[treenode] = Node(segtree[2*treenode+1].h+segtree[2*treenode+2].h  ,  segtree[2*treenode+1].t+segtree[2*treenode+2].t);
}

Node query(int start, int end, int treenode, int left, int right){

	if(lazy[treenode]!=0){
		swap(segtree[treenode].h , segtree[treenode].t );
		if(start != end){
			(++lazy[2*treenode+1])%=2;
			(++lazy[2*treenode+2])%=2;
		}
		lazy[treenode]=0;
	}


	if(start>=left && end<=right){
		return segtree[treenode];
	}
	if(start > right || end < left){
		Node temp = Node(0,0);
		return temp;
	}
	int mid = (start+end)/2;
	Node L = query(start, mid, 2*treenode+1, left, right);
	Node R = query(mid+1, end, 2*treenode+2, left, right);
	Node temp(L.h+R.h, L.t+R.t);
	return temp;
}

void update(int start, int end, int treenode, int left, int right ){

	if(start > end) return;

	if(lazy[treenode]!=0){
		swap(segtree[treenode].h , segtree[treenode].t );
		if(start != end){
			(++lazy[2*treenode+1])%=2;
			(++lazy[2*treenode+2])%=2;
		}
		lazy[treenode]=0;
	}

	if(start>=left && end<=right){
		swap(segtree[treenode].h, segtree[treenode].t);

		if(start != end){
			lazy[2*treenode+1]++;
			lazy[2*treenode+2]++;
			lazy[2*treenode+1]%=2;
			lazy[2*treenode+2]%=2;
		}
		return;
	}
	if(start > right || end < left){
		return;
	}
	int mid = (start+end)/2;
	update(start, mid, 2*treenode+1, left, right);
	update(mid+1, end, 2*treenode+2, left, right);

	segtree[treenode].h = segtree[2*treenode+1].h + segtree[2*treenode+2].h;
	segtree[treenode].t = segtree[2*treenode+1].t + segtree[2*treenode+2].t;
}

int main(){
	int n,q;
	cin >> n >> q;
	segtree = new Node[4*n];
	lazy = new int[4*n]();

	buildTree(0, n-1, 0);

	while(q--){
		int t,a,b;
		cin >> t >> a >> b;
		if(t==0){
			update(0, n-1, 0, a, b);
		}
		else{
			cout << query(0,n-1,0, a, b).h << endl;
		}
	}
}
