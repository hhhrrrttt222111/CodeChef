def insert_edge(tree, x, y):
    if x in tree:
        tree[x].add(y)
    else:
        tree[x] = {y}
        
    if y in tree:
        tree[y].add(x)
    else:
        tree[y] = {x}
    return

def get_nodes_at_distance(tree, start, distance):
    if start not in tree:
        return set()
    
    if distance == 1:
        return tree[start]
    
    nodes = set()
    for node in tree[start]:
        nodes_d = get_nodes_at_distance(tree, node, distance - 1).copy()
        if start in nodes_d:
            nodes_d.remove(start)
        nodes = nodes.union(nodes_d)
        
    return nodes

t = int(input())
for i in range(t):
    n, q = (int(v) for v in input().split())
    tree = dict()
    for j in range(n - 1):
        x, y = (int(v) for v in input().split())
        insert_edge(tree, x, y)
    for j in range(q):
        a, da, b, db = (int(v) for v in input().split())
        a_nodes = get_nodes_at_distance(tree, a, da)
        b_nodes = get_nodes_at_distance(tree, b, db)
        common_nodes = a_nodes.intersection(b_nodes)
        if len(common_nodes) == 0:
            print(-1)
        else:
            print(common_nodes.pop())
        
