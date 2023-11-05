impl Solution {
    pub fn kids_with_candies(candies: Vec<i32>, extra_candies: i32) -> Vec<bool> {
        let maximum = candies.iter().max().unwrap_or(&0);

        return candies
            .iter()
            .map(|x| (x + extra_candies >= *maximum))
            .collect::<Vec<bool>>();
    }
}
