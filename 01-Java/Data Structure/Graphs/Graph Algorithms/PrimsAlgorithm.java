import java.util.*;

public class PrimsAlgorithm {

    static class Edge {
        int source;
        int destination;
        int weight;

        public Edge(int source, int destination, int weight) {
            this.source = source;
            this.destination = destination;
        }
    }

    static void createGraph(ArrayList<Edge> adjacencyList[]) {
        for (int i = 0; i < adjacencyList.length; i++) {
            adjacencyList[i] = new ArrayList<>();
        }
        adjacencyList[0].add(new Edge(0, 1, 10));
        adjacencyList[0].add(new Edge(0, 2, 15));
        adjacencyList[0].add(new Edge(0, 3, 30));
        adjacencyList[1].add(new Edge(1, 0, 10));
        adjacencyList[1].add(new Edge(1, 3, 40));
        adjacencyList[2].add(new Edge(2, 0, 15));
        adjacencyList[2].add(new Edge(2, 3, 50));
        adjacencyList[3].add(new Edge(3, 1, 40));
        adjacencyList[3].add(new Edge(3, 2, 50));
    }

    static class Node implements Comparable<Node> {
        int vertex;
        int weight;

        public Node(int vertex, int weight) {
            this.vertex = vertex;
            this.weight = weight;
        }

        @Override
        public int compareTo(Node otherNode) {
            return this.weight - otherNode.weight;
        }
    }

    // O(E log E) - Time Complexity
    public static void primsAlgorithm(ArrayList<Edge> adjacencyList[]) {
        boolean visited[] = new boolean[adjacencyList.length];
        PriorityQueue<Node> minHeap = new PriorityQueue<>();
        minHeap.add(new Node(0, 0)); // Start with vertex 0 and weight 0
        int minWeight = 0;

        while (!minHeap.isEmpty()) {
            Node currentNode = minHeap.remove();

            if (!visited[currentNode.vertex]) {
                visited[currentNode.vertex] = true;
                minWeight += currentNode.weight;

                // Explore all adjacent vertices of the current node
                for (int i = 0; i < adjacencyList[currentNode.vertex].size(); i++) {
                    Edge edge = adjacencyList[currentNode.vertex].get(i);
                    
                    if (!visited[edge.destination]) {
                        minHeap.add(new Node(edge.destination, edge.weight));
                    }
                }
            }
        }

        System.out.println("Minimum cost of the spanning tree: " + minWeight);
    }

    public static void main(String args[]) {
        int numberOfVertices = 4;
        ArrayList<Edge> adjacencyList[] = new ArrayList[numberOfVertices];
        createGraph(adjacencyList);
        primsAlgorithm(adjacencyList);
    }
}
