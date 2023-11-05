impl Solution {
    pub fn pivot_index(nums: Vec<i32>) -> i32 {
        let mut right = nums.iter().sum::<i32>();
        let mut left = 0;

        let mut pivot = -1;

        for (i, x) in nums.iter().enumerate() {
            right -= *x;
            if left == right {
                pivot = i as i32;
                break;
            }
            left += *x;
        }

        pivot
    }
}
