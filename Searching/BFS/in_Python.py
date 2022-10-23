#Time COmplexity - O(n) where n if the number of vertices
#or sometimes considered as O(n+e) where e is the number if edges 
#Space Complexity - O(n) or O(n+e)
# Python3 Program for BFS traversal
from collections import defaultdict


# adjacency list representation
class Graph:

	# Constructor
	def __init__(self):

		self.graph = defaultdict(list)

	# add an edge to graph
	def addEdge(self,u,v):
		self.graph[u].append(v)

	# print a BFS of graph
	def BFS(self, s):

		# Mark all the vertices as not visited
		visited = [False] * (len(self.graph))

		# queue for BFS
		queue = []

		# Mark the source node as
		# visited and enqueue it
		queue.append(s)
		visited[s] = True

		while queue:

			# Dequeue a vertex from
			# queue and print it
			s = queue.pop(0)
			print (s, end = " ")

			# Get all adjacent vertices of the
			# dequeued vertex s. If a adjacent
			# has not been visited, then mark it
			# visited and enqueue it
			for i in self.graph[s]:
				if visited[i] == False:
					queue.append(i)
					visited[i] = True


# Create a graph 
g = Graph()
g.addEdge(0, 1)
g.addEdge(0, 2)
g.addEdge(1, 2)
g.addEdge(2, 0)
g.addEdge(2, 3)
g.addEdge(3, 3)

g.BFS(0)

