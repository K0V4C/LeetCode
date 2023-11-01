use std::collections::HashMap;

impl Solution {
    pub fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {
        let mut map: HashMap<i32, i32> = HashMap::new();

        let mut ret: Vec<i32> = Vec::new();

        for (index, i) in nums.iter().enumerate() {
            if map.contains_key(&i) == true {
                let val = map.get(&i).unwrap();

                if *val == (index as i32) {
                    continue;
                }

                ret.push(index as i32);
                ret.push(*val);
                break;
            } else {
                map.insert(target - i, index as i32);
            }
        }

        return ret;
    }
}
