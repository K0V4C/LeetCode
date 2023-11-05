impl Solution {
    pub fn largest_altitude(gain: Vec<i32>) -> i32 {
        let mut max = 0;
        let mut curr = 0;

        for x in gain.iter() {
            curr += *x;
            if curr > max {
                max = curr;
            }
        }
        max
    }
}
