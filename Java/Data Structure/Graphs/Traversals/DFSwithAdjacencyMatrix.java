public class DFSAdjMatrix {

    // Method to create the graph using adjacency matrix
    static void createGraph(int[][] graph) {
        // Representing the edges as given in the previous example
        graph[0][1] = 1;
        graph[0][2] = 1;
        graph[1][0] = 1;
        graph[1][3] = 1;
        graph[2][0] = 1;
        graph[2][4] = 1;
        graph[3][1] = 1;
        graph[3][4] = 1;
        graph[3][5] = 1;
        graph[4][2] = 1;
        graph[4][3] = 1;
        graph[4][5] = 1;
        graph[5][3] = 1;
        graph[5][4] = 1;
        graph[5][6] = 1;
        graph[6][5] = 1;
    }

    // DFS method to traverse the graph using adjacency matrix
    public static void dfs(int[][] graph, int curr, boolean[] visited, int V) {
        if (visited[curr]) {
            return;
        }

        System.out.print(curr + " ");
        visited[curr] = true;

        // Visit all neighbors
        for (int i = 0; i < V; i++) {
            if (graph[curr][i] == 1 && !visited[i]) {
                dfs(graph, i, visited, V);
            }
        }
    }

    public static void main(String[] args) {
        int V = 7;
        int[][] graph = new int[V][V];
        createGraph(graph);

        boolean[] visited = new boolean[V];

        // Perform DFS traversal starting from vertex 0
        System.out.println("DFS traversal starting from vertex 0:");
        dfs(graph, 0, visited, V);
    }
}
