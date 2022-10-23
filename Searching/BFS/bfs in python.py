# BREADTH FIRST SEARCH

def bfs(self,vertex):
    visited = [vertex]                                 # O(1)
    queue = [vertex]                                  
    while queue:                                         # O(V) ,,,v is num of vertices
        deVertex = queue.pop(0)
        print(deVertex)
        for adjacentVertex in self.gdict[deVertex]:      #O(E)  ,,,E is num of edges
            if adjacentVertex not in visited:
                visited.append(adjacentVertex)
                queue.append(adjacentVertex)