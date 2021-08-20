g = {0: [1, 2], 1: [2], 2: [3], 3: [1, 2]}

def bfs(a):
    que = []
    visited = []
    que.append(a)
    visited.append(a)
    while que != []:
        v = que.pop(0) 
        for n in g[v]:
            if n not in visited:
                visited.append(n)
                que.append(n)
                print(visited , que,n)
                
    print(visited)
bfs(0)
