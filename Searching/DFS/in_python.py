
# Initially all vertices are marked unvisited (false).
# The DFS algorithm starts at a vertex u in the graph. By starting at vertex u it considers the edges from u to other vertices.
# If the edge leads to an already visited vertex, then backtrack to current vertex u.
# If an edge leads to an unvisited vertex, then go to that vertex and start processing from that vertex. That means the new vertex becomes the current root for traversal.
# Follow this process until a vertices are marked visited.
# Here adjacency matrix is used to store the connection between the vertices. 

# The time complexity of the DFS algorithm is represented in the form of O(V + E), where V is the number of nodes and E is the number of edges.
# The space complexity of the algorithm is O(V).




# DFS algorithm in Python


# DFS algorithm
def dfs(graph, start, visited=None):
    if visited is None:
        visited = set()
    visited.add(start)

    print(start)

    for next in graph[start] - visited:
        dfs(graph, next, visited)
    return visited


graph = {'0': set(['1', '2']),
         '1': set(['0', '3', '4']),
         '2': set(['0']),
         '3': set(['1']),
         '4': set(['2', '3'])}

dfs(graph, '0')
