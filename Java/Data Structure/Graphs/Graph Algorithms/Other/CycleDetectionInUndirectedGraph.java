import java.util.*;

public class CycleUndirected {
    static class Edge {
        int src;
        int dest;

        public Edge(int s, int d) {
            this.src = s;
            this.dest = d;
        }
    }

    static void createGraph(ArrayList<Edge> graph[]) {
        for (int i = 0; i < graph.length; i++) {
            graph[i] = new ArrayList<>();
        }
        graph[0].add(new Edge(0, 1));
        graph[0].add(new Edge(0, 2));
        graph[0].add(new Edge(0, 3));
        graph[1].add(new Edge(1, 0));
        graph[1].add(new Edge(1, 2));
        graph[2].add(new Edge(2, 0));
        graph[2].add(new Edge(2, 1));
        graph[3].add(new Edge(3, 0));
        graph[3].add(new Edge(3, 4));
        graph[4].add(new Edge(4, 3));
    }

    public static boolean isCyclicUtil(ArrayList<Edge>[] graph, boolean vis[], int curr, int par) {
        vis[curr] = true;
        for (int i = 0; i < graph[curr].size(); i++) {
            Edge e = graph[curr].get(i);
            // case 1: If the node is visited and it's not the parent, we found a cycle.
            if (vis[e.dest] && e.dest != par) {
                return true;
            } 
            // case 2: If the node is the parent, skip to the next neighbor.
            else if (!vis[e.dest]) {
                if (isCyclicUtil(graph, vis, e.dest, curr)) {
                    return true;
                }
            }
        }
        return false;
    }

    // O(V + E)
    public static boolean isCyclic(ArrayList<Edge>[] graph) {
        boolean vis[] = new boolean[graph.length];
        for (int i = 0; i < graph.length; i++) {
            if (!vis[i]) {
                if (isCyclicUtil(graph, vis, i, -1)) {
                    return true;
                }
            }
        }
        return false;
    }

    public static void main(String args[]) {
        /*
        0 ------- 3
        /|       |
       / |       |
      1  |       4
       \ |
        \|
         2
        */
        int V = 5;
        ArrayList<Edge> graph[] = new ArrayList[V];
        createGraph(graph);
        System.out.println(isCyclic(graph));
    }
}
