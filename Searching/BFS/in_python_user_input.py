'''
Implementation of Breadth First Search algorithm with user input system, Where the user has the provision to 
dynamically create the graph of their choice without defining the graph inside the code.
'''

#Time Complexity : O(|V|+|E|)=O(b^d)
#Space Complexity : O(|V|)=O(b^d)
#Where b is the branching factor of the graph

#Code for Depth First Search
flag=0
visited = [] # List for visited nodes.
queue = []     #Initialize a queue
graph={}



def addnode(v):
    if v in graph:
        print("present")
    else:
        graph[v]=[]
    
def addedge(v1,v2):
    if v1 not in graph:
        print (v1,"is not present")
    elif v2  not in graph:
        print (v2,"is not present")
    else:
        graph[v1].append(v2)
        graph[v2].append(v1)

def bfs(visited, graph, node, goal, flag): #function for BFS
    if(flag==0):
        visited.append(node)
        queue.append(node)
        while queue:          # Creating loop to visit each node
            m = queue.pop(0) 
            print (m, end = " ") 
            if(m==goal):
                print("Goal node Found")
                flag=1
                exit(0)
            elif(flag==0):
                for neighbour in graph[m]:
                    if neighbour not in visited:
                        visited.append(neighbour)
                        queue.append(neighbour)

# Driver Code
n=int(input("Enter the number of nodes:"))     
for i in range(1,n+1):
    print("Enter the value of node ",i)
    v=int(input())
    addnode(v)
for i in range(1,n+1):
    print("Enter the number of connections of node ",i)
    m=int(input())
    for j in range(0,m):
        x=int(input("Enter the connections:"))
        addedge(i,x)
x=int(input("Enter the goal node:"))
s=int(input("Enter the starting node:"))
print("Breadth First Search is :")
bfs(visited,graph,s,x,0)    # function calling