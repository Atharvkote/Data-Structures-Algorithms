import java.util.*;

public class BellmanFord {
    static class Edge {
        int source;
        int destination;
        int weight;

        public Edge(int source, int destination, int weight) {
            this.source = source;
            this.destination = destination;
            this.weight = weight;
        }
    }

    static void createGraph(ArrayList<Edge> adjacencyList[]) {
        for (int i = 0; i < adjacencyList.length; i++) {
            adjacencyList[i] = new ArrayList<>();
        }
        adjacencyList[0].add(new Edge(0, 1, 2));
        adjacencyList[0].add(new Edge(0, 2, 4));
        adjacencyList[1].add(new Edge(1, 2, -4));
        adjacencyList[2].add(new Edge(2, 3, 2));
        adjacencyList[3].add(new Edge(3, 4, 4));
        adjacencyList[4].add(new Edge(4, 1, -1));
    }

    public static void bellmanFord(ArrayList<Edge> adjacencyList[], int sourceVertex) {
        int numberOfVertices = adjacencyList.length;
        int distances[] = new int[numberOfVertices];

        // Initialize distances to all vertices as infinite except the source vertex
        for (int i = 0; i < distances.length; i++) {
            if (i != sourceVertex)
                distances[i] = Integer.MAX_VALUE;
        }

        // Relax all edges |V| - 1 times
        for (int i = 0; i < numberOfVertices - 1; i++) {
            for (int j = 0; j < numberOfVertices; j++) {
                for (int k = 0; k < adjacencyList[j].size(); k++) {
                    Edge edge = adjacencyList[j].get(k);
                    int u = edge.source;
                    int v = edge.destination;
                    int weight = edge.weight;

                    // Relax the edge if a shorter path is found
                    if (distances[u] != Integer.MAX_VALUE && distances[u] + weight < distances[v]) {
                        distances[v] = distances[u] + weight;
                    }
                }
            }
        }

        // Detect negative weight cycles
        for (int j = 0; j < numberOfVertices; j++) {
            for (int k = 0; k < adjacencyList[j].size(); k++) {
                Edge edge = adjacencyList[j].get(k);
                int u = edge.source;
                int v = edge.destination;
                int weight = edge.weight;

                if (distances[u] != Integer.MAX_VALUE && distances[u] + weight < distances[v]) {
                    System.out.println("Negative weight cycle exists");
                    return;
                }
            }
        }

        // Print the distances to all vertices
        System.out.println("Shortest distances from source vertex:");
        for (int i = 0; i < distances.length; i++) {
            System.out.print("Vertex " + i + ": ");
            if (distances[i] == Integer.MAX_VALUE) {
                System.out.println("Infinity");
            } else {
                System.out.println(distances[i]);
            }
        }
    }

    public static void main(String args[]) {
        int numberOfVertices = 5;
        ArrayList<Edge> adjacencyList[] = new ArrayList[numberOfVertices];
        createGraph(adjacencyList);
        
        int sourceVertex = 0;
        bellmanFord(adjacencyList, sourceVertex);
    }
}
