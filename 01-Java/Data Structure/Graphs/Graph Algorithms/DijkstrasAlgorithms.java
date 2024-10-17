import java.util.ArrayList;
import java.util.PriorityQueue;

public class Dijkstras {
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

    static void createGraph(ArrayList<Edge> graph[]) {
        for (int i = 0; i < graph.length; i++) {
            graph[i] = new ArrayList<>();
        }
        graph[0].add(new Edge(0, 1, 2));
        graph[0].add(new Edge(0, 2, 4));
        graph[1].add(new Edge(1, 3, 7));
        graph[1].add(new Edge(1, 2, 1));
        graph[2].add(new Edge(2, 4, 3));
        graph[3].add(new Edge(3, 5, 1));
        graph[4].add(new Edge(4, 3, 2));
        graph[4].add(new Edge(4, 5, 5));
    }

    static class GraphNode implements Comparable<GraphNode> {
        int node;
        int pathCost;

        public GraphNode(int node, int pathCost) {
            this.node = node;
            this.pathCost = pathCost;
        }

        @Override
        public int compareTo(GraphNode other) {
            return this.pathCost - other.pathCost;
        }
    }

    public static int[] dijkstrasAlgorithm(ArrayList<Edge> graph[], int source) {
        PriorityQueue<GraphNode> heap = new PriorityQueue<>();
        int distance[] = new int[graph.length];
        boolean visited[] = new boolean[graph.length];

        // Initialize distances
        for (int i = 0; i < distance.length; i++) {
            if (i != source) {
                distance[i] = Integer.MAX_VALUE;
            }
        }

        heap.add(new GraphNode(source, 0));
        while (!heap.isEmpty()) {
            GraphNode currentNode = heap.remove();

            if (!visited[currentNode.node]) {
                visited[currentNode.node] = true;

                // Explore neighbors
                for (int i = 0; i < graph[currentNode.node].size(); i++) {
                    Edge edge = graph[currentNode.node].get(i);
                    int u = edge.source;
                    int v = edge.destination;

                    if (!visited[v] && distance[u] + edge.weight < distance[v]) {
                        distance[v] = distance[u] + edge.weight;
                        heap.add(new GraphNode(v, distance[v]));
                    }
                }
            }
        }
        return distance;
    }

    public static void main(String args[]) {
        int numberOfVertices = 6;
        ArrayList<Edge> graph[] = new ArrayList[numberOfVertices];
        createGraph(graph);

        int sourceVertex = 0;
        int distances[] = dijkstrasAlgorithm(graph, sourceVertex);

        for (int i = 0; i < distances.length; i++) {
            System.out.println(distances[i] + " ");
        }
    }
}
