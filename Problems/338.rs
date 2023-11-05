impl Solution {
    pub fn count_bits(n: i32) -> Vec<i32> {
        let mut ret: Vec<i32> = vec![0; (n + 1) as usize];

        for x in 0..=n {
            ret[x as usize] = ret[(x as usize >> 1)] + (x & 1);
        }

        return ret;
    }
}
