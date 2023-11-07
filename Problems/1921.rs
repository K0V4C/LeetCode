impl Solution {
    pub fn eliminate_maximum(dist: Vec<i32>, speed: Vec<i32>) -> i32 {
        let n = dist.len();
        let mut time_to_city: Vec<f64> = dist.iter().zip(speed.iter())
            .map(|(&d, &s)| d as f64 / s as f64)
            .collect();
        
        time_to_city.sort_by(|a, b| a.partial_cmp(b).unwrap());
        
        for i in 0..n {
            if time_to_city[i] <= i as f64 {
                return i as i32;
            }
        }
        
        n as i32
    }
}
