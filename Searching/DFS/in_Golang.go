// Depth-first search is an algorithm for traversing or searching tree or graph data structures. The algorithm starts at the root node (selecting some arbitrary node as the root node in the case of a graph) and explores as far as possible along each branch before backtracking. 

// So the basic idea is to start from the root or any arbitrary node and mark the node and move to the adjacent unmarked node and continue this loop until there is no unmarked adjacent node. Then backtrack and check for other unmarked nodes and traverse them. Finally, print the nodes in the path.

// Follow the below steps to solve the problem:

// Create a recursive function that takes the index of the node and a visited array.
// Mark the current node as visited and print the node.
// Traverse all the adjacent and unmarked nodes and call the recursive function with the index of the adjacent node.

// Time complexity: O(V + E), where V is the number of vertices and E is the number of edges in the graph.
// Auxiliary Space: O(V), since an extra visited array of size V is required.

package main

func DFS(g *Graph, startVertex *Vertex, visitCb func(int)) {
	// we maintain a map of visited nodes to prevent visiting the same
	// node more than once
	visited := map[int]bool{}

	if startVertex == nil {
		return
	}
	visited[startVertex.Key] = true
	visitCb(startVertex.Key)

	// for each of the adjacent vertices, call the function recursively
	// if it hasn't yet been visited
	for _, v := range startVertex.Vertices {
		if visited[v.Key] {
			continue
		}
		DFS(g, v, visitCb)
	}
}