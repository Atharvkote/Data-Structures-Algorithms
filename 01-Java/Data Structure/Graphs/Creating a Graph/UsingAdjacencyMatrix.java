import java.util.Arrays;

public class buildGraph {
    private int[][] adjMatrix;
    private int numVertices;

    // Constructor to initialize the adjacency matrix
    public buildGraph(int numVertices) {
        this.numVertices = numVertices;
        adjMatrix = new int[numVertices][numVertices];

        // Initialize the adjacency matrix with 0 (no edges)
        for (int[] row : adjMatrix) {
            Arrays.fill(row, 0);
        }
    }

    // Method to add an edge between two vertices
    public void addEdge(int src, int dest, int weight) {
        adjMatrix[src][dest] = weight;
        adjMatrix[dest][src] = weight;  // For an undirected graph, use this line
    }

    // Method to remove an edge between two vertices
    public void removeEdge(int src, int dest) {
        adjMatrix[src][dest] = 0;
        adjMatrix[dest][src] = 0;  // For an undirected graph, use this line
    }

    // Method to print the adjacency matrix
    public void printGraph() {
        for (int i = 0; i < numVertices; i++) {
            for (int j = 0; j < numVertices; j++) {
                System.out.print(adjMatrix[i][j] + " ");
            }
            System.out.println();
        }
    }

    // Method to create the graph with edges as per the previous example
    public static void createGraph(buildGraph graph) {
        graph.addEdge(0, 1, 1);
        graph.addEdge(0, 2, 1);
        graph.addEdge(1, 3, 1);
        graph.addEdge(2, 4, 1);
        graph.addEdge(3, 4, 1);
        graph.addEdge(3, 5, 1);
        graph.addEdge(4, 5, 1);
        graph.addEdge(5, 6, 1);
    }

    public static void main(String[] args) {
        int numVertices = 7;
        buildGraph graph = new buildGraph(numVertices);

        // Create the graph
        createGraph(graph);

        // Print the adjacency matrix
        graph.printGraph();
    }
}
