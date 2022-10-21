 #Declare a queue and insert the starting vertex.
 #Initialize a visited array and mark the starting vertex as visited.
 #Follow the below process till the queue becomes empty:
 #Remove the first vertex of the queue.
 #Mark that vertex as visited.
 #Insert all the unvisited neighbours of the vertex into the queue.


 #Time Complexity: O(n+E), where n is the number of nodes and E is the number of edges.
 #Auxiliary Space: O(n)

 #BFS algorithm in Python


graph = {
  '5' : ['3','7'],
  '3' : ['2', '4'],
  '7' : ['8'],
  '2' : [],
  '4' : ['8'],
  '8' : []
}

visited = [] # List for visited nodes.
queue = []     #Initialize a queue

def bfs(visited, graph, node): #function for BFS
  visited.append(node)
  queue.append(node)

  while queue:          # Creating loop to visit each node
    m = queue.pop(0) 
    print (m, end = " ") 

    for neighbour in graph[m]:
      if neighbour not in visited:
        visited.append(neighbour)
        queue.append(neighbour)


print("Following is the Breadth-First Search")
bfs(visited, graph, '5')    # function calling
