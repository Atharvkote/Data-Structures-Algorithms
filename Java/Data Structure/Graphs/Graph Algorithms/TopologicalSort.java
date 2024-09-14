import java.util.*;

public class TopologicalSort {

    static class Edge {
        int source;
        int destination;

        public Edge(int source, int destination) {
            this.source = source;
            this.destination = destination;
        }
    }

    static void createGraph(ArrayList<Edge> adjacencyList[]) {
        for (int i = 0; i < adjacencyList.length; i++) {
            adjacencyList[i] = new ArrayList<>();
        }
        adjacencyList[2].add(new Edge(2, 3));
        adjacencyList[3].add(new Edge(3, 1));
        adjacencyList[4].add(new Edge(4, 0));
        adjacencyList[4].add(new Edge(4, 1));
        adjacencyList[5].add(new Edge(5, 0));
        adjacencyList[5].add(new Edge(5, 2));
    }

    public static void topologicalSortUtil(ArrayList<Edge> adjacencyList[], int currentVertex, boolean visited[], Stack<Integer> stack) {
        visited[currentVertex] = true;
        for (int i = 0; i < adjacencyList[currentVertex].size(); i++) {
            Edge edge = adjacencyList[currentVertex].get(i);
            if (!visited[edge.destination]) {
                topologicalSortUtil(adjacencyList, edge.destination, visited, stack);
            }
        }
        stack.push(currentVertex);
    }

    // O(V + E) - Time Complexity
    public static void topologicalSort(ArrayList<Edge> adjacencyList[]) {
        boolean visited[] = new boolean[adjacencyList.length];
        Stack<Integer> stack = new Stack<>();
        
        // Visit all vertices to handle disconnected graphs
        for (int i = 0; i < adjacencyList.length; i++) {
            if (!visited[i]) {
                topologicalSortUtil(adjacencyList, i, visited, stack);
            }
        }
        
        // Print the elements of the stack to get topological order
        while (!stack.isEmpty()) {
            System.out.print(stack.pop() + " ");
        }
    }

    public static void main(String args[]) {
        int numberOfVertices = 6;
        ArrayList<Edge> adjacencyList[] = new ArrayList[numberOfVertices];
        createGraph(adjacencyList);
        topologicalSort(adjacencyList);
    }
}
