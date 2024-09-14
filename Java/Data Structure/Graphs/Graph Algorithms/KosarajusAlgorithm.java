import java.util.*;

public class Kosaraju {
    static class Edge {
        int source;
        int destination;

        public Edge(int source, int destination) {
            this.source = source;
            this.destination = destination;
        }
    }

    public static void createGraph(ArrayList<Edge> adjacencyList[]) {
        for (int i = 0; i < adjacencyList.length; i++) {
            adjacencyList[i] = new ArrayList<>();
        }
        adjacencyList[0].add(new Edge(0, 2));
        adjacencyList[0].add(new Edge(0, 3));
        adjacencyList[1].add(new Edge(1, 0));
        adjacencyList[2].add(new Edge(2, 1));
        adjacencyList[3].add(new Edge(3, 4));
    }

    public static void topologicalSort(ArrayList<Edge> adjacencyList[], int currentVertex, Stack<Integer> stack, boolean visited[]) {
        visited[currentVertex] = true;
        for (int i = 0; i < adjacencyList[currentVertex].size(); i++) {
            Edge edge = adjacencyList[currentVertex].get(i);
            if (!visited[edge.destination]) {
                topologicalSort(adjacencyList, edge.destination, stack, visited);
            }
        }
        stack.push(currentVertex);
    }

    public static void depthFirstSearch(ArrayList<Edge> adjacencyList[], boolean visited[], int currentVertex) {
        visited[currentVertex] = true;
        System.out.print(currentVertex + " ");
        for (int i = 0; i < adjacencyList[currentVertex].size(); i++) {
            Edge edge = adjacencyList[currentVertex].get(i);
            if (!visited[edge.destination]) {
                depthFirstSearch(adjacencyList, visited, edge.destination);
            }
        }
    }

    public static void kosarajuAlgorithm(ArrayList<Edge> adjacencyList[], int numberOfVertices) {
        // Step 1: Perform topological sort on the original graph
        Stack<Integer> stack = new Stack<>();
        boolean visited[] = new boolean[numberOfVertices];
        
        for (int i = 0; i < numberOfVertices; i++) {
            if (!visited[i]) {
                topologicalSort(adjacencyList, i, stack, visited);
            }
        }

        // Step 2: Create the transpose of the graph
        ArrayList<Edge> transposeGraph[] = new ArrayList[numberOfVertices];
        for (int i = 0; i < numberOfVertices; i++) {
            transposeGraph[i] = new ArrayList<>();
        }

        // Reverse the direction of edges
        for (int i = 0; i < numberOfVertices; i++) {
            visited[i] = false; // Reset visited array for the second DFS
            for (int j = 0; j < adjacencyList[i].size(); j++) {
                Edge edge = adjacencyList[i].get(j);
                transposeGraph[edge.destination].add(new Edge(edge.destination, edge.source));
            }
        }

        // Step 3: Perform DFS on the transpose graph in the order defined by the stack
        while (!stack.isEmpty()) {
            int currentVertex = stack.pop();
            if (!visited[currentVertex]) {
                System.out.print("Strongly Connected Component (SCC): ");
                depthFirstSearch(transposeGraph, visited, currentVertex);
                System.out.println();
            }
        }
    }

    public static void main(String args[]) {
        int numberOfVertices = 5;
        ArrayList<Edge> adjacencyList[] = new ArrayList[numberOfVertices];
        createGraph(adjacencyList);
        kosarajuAlgorithm(adjacencyList, numberOfVertices);
    }
}
