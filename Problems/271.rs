use std::collections::HashSet;
impl Solution {
    
    pub fn contains_duplicate(nums: Vec<i32>) -> bool {

        let mut set: HashSet<i32> = HashSet::new();

        for x in nums {
            if set.contains(&x) {
                return true;
            } else {
                set.insert(x);
            }
        }

        false

    }
}
