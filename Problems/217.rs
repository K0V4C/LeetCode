use std::collections::HashSet;
impl Solution {
    pub fn contains_duplicate(nums: Vec<i32>) -> bool {
        let mut map: HashSet<i32> = HashSet::new();

        for i in nums.iter() {
            if map.contains(i) == false {
                map.insert(*i);
            } else {
                return true;
            }
        }

        false
    }
}

