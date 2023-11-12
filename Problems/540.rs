impl Solution {
    pub fn single_non_duplicate(nums: Vec<i32>) -> i32 {
        let mut result: i32 = 0;

        for x in nums{
            result = result ^ x;
        }

        return result;
    }
}
