import java.util.LinkedList;
import java.util.Queue;

public class BFSAdjMatrix {

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

    // BFS method to traverse the graph using adjacency matrix
    public static void bfs(int[][] graph, int V) {
        boolean[] visited = new boolean[V];
        Queue<Integer> q = new LinkedList<>();
        q.add(0); // Start BFS from vertex 0

        while (!q.isEmpty()) {
            int curr = q.remove();
            if (!visited[curr]) {
                System.out.print(curr + " ");
                visited[curr] = true;

                // Traverse all neighbors
                for (int i = 0; i < V; i++) {
                    if (graph[curr][i] == 1 && !visited[i]) {
                        q.add(i);
                    }
                }
            }
        }
    }

    public static void main(String[] args) {
        int V = 7;
        int[][] graph = new int[V][V];
        createGraph(graph);

        // Perform BFS traversal
        System.out.println("BFS traversal starting from vertex 0:");
        bfs(graph, V);
    }
}
