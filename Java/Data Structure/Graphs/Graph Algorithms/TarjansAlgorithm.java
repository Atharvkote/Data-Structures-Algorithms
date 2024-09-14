import java.util.*;

public class BridgeFinder {

    static class Edge {
        int source;
        int destination;

        public Edge(int source, int destination) {
            this.source = source;
            this.destination = destination;
        }
    }

    // Method to create a graph as an adjacency list
    public static void createGraph(ArrayList<Edge> adjacencyList[]) {
        for (int i = 0; i < adjacencyList.length; i++) {
            adjacencyList[i] = new ArrayList<>();
        }

        // Adding edges to the graph (undirected graph)
        adjacencyList[0].add(new Edge(0, 1));
        adjacencyList[1].add(new Edge(1, 0));
        adjacencyList[0].add(new Edge(0, 2));
        adjacencyList[2].add(new Edge(2, 0));
        adjacencyList[1].add(new Edge(1, 2));
        adjacencyList[2].add(new Edge(2, 1));
        adjacencyList[1].add(new Edge(1, 3));
        adjacencyList[3].add(new Edge(3, 1));
        adjacencyList[3].add(new Edge(3, 4));
        adjacencyList[4].add(new Edge(4, 3));
    }

    // DFS-based function to find and print all bridges
    public static void findBridgesDFS(ArrayList<Edge> adjacencyList[], int currentVertex, int parentVertex, boolean visited[], int discoveryTime[], int lowestDiscoveryTime[], int currentTime) {
        // Mark the current node as visited and set its discovery and lowest discovery times
        visited[currentVertex] = true;
        discoveryTime[currentVertex] = lowestDiscoveryTime[currentVertex] = ++currentTime;

        // Traverse all the adjacent vertices
        for (int i = 0; i < adjacencyList[currentVertex].size(); i++) {
            Edge edge = adjacencyList[currentVertex].get(i);

            // If the adjacent vertex is the parent, skip it
            if (edge.destination == parentVertex) {
                continue;
            }

            // If the adjacent vertex is already visited, update the lowest discovery time
            if (visited[edge.destination]) {
                lowestDiscoveryTime[currentVertex] = Math.min(lowestDiscoveryTime[currentVertex], discoveryTime[edge.destination]);
            } else {
                // If the adjacent vertex is not visited, perform DFS on it
                findBridgesDFS(adjacencyList, edge.destination, currentVertex, visited, discoveryTime, lowestDiscoveryTime, currentTime);

                // Update the lowest discovery time for the current vertex
                lowestDiscoveryTime[currentVertex] = Math.min(lowestDiscoveryTime[currentVertex], lowestDiscoveryTime[edge.destination]);

                // Check if the current edge is a bridge
                if (discoveryTime[currentVertex] < lowestDiscoveryTime[edge.destination]) {
                    System.out.println("Bridge: " + currentVertex + " --- " + edge.destination);
                }
            }
        }
    }

    // Method to find and print all bridges in the graph
    public static void findBridges(ArrayList<Edge> adjacencyList[], int numberOfVertices) {
        int discoveryTime[] = new int[numberOfVertices];
        int lowestDiscoveryTime[] = new int[numberOfVertices];
        boolean visited[] = new boolean[numberOfVertices];
        int currentTime = 0;

        // Perform DFS for each vertex to find bridges
        for (int i = 0; i < numberOfVertices; i++) {
            if (!visited[i]) {
                findBridgesDFS(adjacencyList, i, -1, visited, discoveryTime, lowestDiscoveryTime, currentTime);
            }
        }
    }

    public static void main(String args[]) {
        int numberOfVertices = 5;
        ArrayList<Edge> adjacencyList[] = new ArrayList[numberOfVertices];
        createGraph(adjacencyList);

        // Find and print all bridges in the graph
        findBridges(adjacencyList, numberOfVertices);
    }
}
