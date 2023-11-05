impl Solution {
    pub fn search(nums: Vec<i32>, target: i32) -> i32 {
        let mut high = nums.len() - 1;
        let mut low = 0;

        while high > low {
            let mid = (high + low) / 2;

            if nums[mid] == target {
                return mid as i32;
            }

            if nums[mid] < target {
                low = mid + 1;
            }

            if nums[mid] > target {
                high = mid;
            }
        }

        return -1;
    }
}
