class Solution {
        public int minCostConnectPoints(int[][] points) {
                int n = points.length;
                        int[] min = new int[n];
                                boolean[] used = new boolean[n];

                                        for (int i = 0; i < n; i++)
                                                    min[i] = Integer.MAX_VALUE;

                                                            min[0] = 0;
                                                                    int ans = 0;

                                                                            for (int i = 0; i < n; i++) {
                                                                                        int u = -1;

                                                                                                    for (int j = 0; j < n; j++) {
                                                                                                                    if (!used[j] && (u == -1 || min[j] < min[u]))
                                                                                                                                        u = j;
                                                                                                                                                    }

                                                                                                                                                                used[u] = true;
                                                                                                                                                                            ans += min[u];

                                                                                                                                                                                        for (int v = 0; v < n; v++) {
                                                                                                                                                                                                        int d = Math.abs(points[u][0] - points[v][0])
                                                                                                                                                                                                                              + Math.abs(points[u][1] - points[v][1]);

                                                                                                                                                                                                                                              if (!used[v] && d < min[v])
                                                                                                                                                                                                                                                                  min[v] = d;
                                                                                                                                                                                                                                                                              }
                                                                                                                                                                                                                                                                                      }

                                                                                                                                                                                                                                                                                              return ans;
                                                                                                                                                                                                                                                                                                  }
                                                                                                                                                                                                                                                                                                  };