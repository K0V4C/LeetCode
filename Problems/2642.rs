use std::collections::HashSet;
struct Graph {
    n: usize,
    g: Vec<Vec<(usize, i32)>>
}


/** 
 * `&self` means the method takes an immutable reference.
 * If you need a mutable reference, change it to `&mut self` instead.
 */
impl Graph {

    fn new(n: i32, edges: Vec<Vec<i32>>) -> Self {
        let mut g: Vec<Vec<(usize, i32)>> = vec![Vec::new(); n as usize];
        for i in 0..edges.len() {
            g[edges[i][0] as usize].push((edges[i][1] as usize, edges[i][2]));
        }
        Self {
            n: n as usize,
            g: g
        }
    }
    
    fn add_edge(&mut self, edge: Vec<i32>) {
        self.g[edge[0] as usize].push((edge[1] as usize, edge[2]));
    }
    
    fn shortest_path(&self, node1: i32, node2: i32) -> i32 {
        let mut visited = vec![false; self.n];
        let mut dist = vec![i32::MAX; self.n];
        dist[node1 as usize] = 0;
        
        let mut cur = node1 as usize;
        let mut s = HashSet::new();

        loop {
            visited[cur] = true;
            for i in 0..self.g[cur].len() {
                let node = self.g[cur][i].0;
                if visited[node]  {continue;}

                s.insert(node);
                let alt = dist[cur] + self.g[cur][i].1;
                if alt < dist[node]   {dist[node] = alt;}
            }

            s.remove(&cur);
            if s.is_empty()  {break;}
            let mut min = i32::MAX;
            let mut idx = 0;
            for a in s.iter() {
                if dist[*a] < min {
                    min = dist[*a];
                    idx = *a;
                }
            }
            cur = idx;
        }

        if dist[node2 as usize] != i32::MAX {dist[node2 as usize]} else {-1}
    }
}
