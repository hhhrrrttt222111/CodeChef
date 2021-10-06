Graph Labelling https://www.codechef.com/problems/GPHLBL

Description-
You are given a directed graph G with N vertices (numbered 1 through N) and M edges. Let's denote the set of its vertices by V, the set of its edges by E and an edge from a vertex u to a vertex v by (u,v). Then, let's define:

For each u,v∈V, R(u,v) is true if v can be reached from u or false otherwise. Specifically, if u=v, it is always true.
For each v∈V, a set of vertices N(v)={u∈V∣R(u,v)∧R(v,u)}.
For each subset U⊆V, two sets of edges Out(U)={(u,v)∈E∣u∈U} and In(U)={(v,u)∈E∣u∈U}.
You need to assign a label to each edge in E; you may only use labels 1 and 2. The costs of labelling an edge are c1 and c2 for the labels 1 and 2 respectively.

Constraints
1≤T≤100
1≤N≤3⋅104
0≤M≤3⋅104
0≤Q≤3⋅105
1≤u,v≤N
1≤c1,c2≤109
1≤ti≤4 for each valid i
1≤wi≤N for each valid i
xi∈{1,2} for each valid i
0≤li≤ri≤M for each valid i
the sum of N over all test cases does not exceed 6⋅104
the sum of M over all test cases does not exceed 6⋅104
the sum of Q over all test cases does not exceed  6⋅105

Sample Input 1 
1
4 4 1
1 2
2 3
1 3
3 4
10 20
3 1 1 1 1
Sample Output 1 
50