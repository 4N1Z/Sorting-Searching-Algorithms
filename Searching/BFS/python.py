# Python code to give the traversed path by BFS algorithm as output. BFS(int n) scans through the vertices which are reachable from n. 
# Time Complexity: O(V+E), where V is the number of nodes and E is the number of edges.
# Auxiliary Space: O(V)

# BFS in Python
from collections import defaultdict as dd  
  
class Graph:  
    
    # Constructing a list  
    def __init__(self):  
    
        # default dictionary to store graph  
        self.graph = dd(list)  
    
    # defining function which will add edge to the graph  
    def addEdgetoGraph(self, x, y):  
        self.graph[x].append(y)  
    
    # defining function to print BFS traverse  
    def BFSearch(self, n):  
    
        # Initially marking all vertices as not visited  
        visited_vertices = ( len(self.graph ))*[False]  
    
        # creating a queue for visited vertices  
        queue = []  
    
        # setting source node as visited and adding it to the queue  
        visited_vertices[n] = True  
        queue.append(n)  
          
    
        while queue:  
    
            # popping the element from the queue which is printed  
            n = queue.pop(0)  
            print (n, end = " ")  
    
            # getting vertices adjacent to the vertex n which is dequed.   
            for v in self.graph[ n ]:  
                if visited_vertices[v] == False:  
                    queue.append(v)  
                    visited_vertices[v] = True  
    
  
# Example code  
# Initializing a graph  
graph = Graph()  
graph.addEdgetoGraph(0, 1)  
graph.addEdgetoGraph(1, 1)  
graph.addEdgetoGraph(2, 2)  
graph.addEdgetoGraph(3, 1)  
graph.addEdgetoGraph(4, 3)  
graph.addEdgetoGraph(5, 4)  
    
print ( " The Breadth First Search Traversal for The Graph is as Follows: " )  
graph.BFSearch(3)  