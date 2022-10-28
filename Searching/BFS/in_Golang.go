//See how this algo works--

// Declare a queue and insert the starting vertex.
// Initialize a visited array and mark the starting vertex as visited.
// Follow the below process till the queue becomes empty:
// Remove the first vertex of the queue.
// Mark that vertex as visited.
// Insert all the unvisited neighbours of the vertex into the queue.


// Time Complexity: O(V+E), where V is the number of nodes and E is the number of edges.
// Auxiliary Space: O(V)

// BFS algorithm in GoLang

//BFS to print the tree in breadth first fashion

type Tree struct {
    Value  int
    Left   *Tree
    Right  *Tree
    Repeat int
    Parent *Tree
}
func BFS(tree *Tree) []int {
    queue := []*Tree{}
    queue = append(queue, tree)
    result := []int{} 
    return BFSUtil(queue, result)
}
func BFSUtil(queue []*Tree, res []int) []int {
//This appends the value of the root of subtree or tree to the 
//result
    if len(queue) == 0 {
        return res
     }
    res = append(res, queue[0].Value)
    if queue[0].Right != nil {
        queue = append(queue, queue[0].Right)
    }
    if queue[0].Left != nil {
        queue = append(queue, queue[0].Left)
    }
    return BFSUtil(queue[1:], res)
   }