use std::collections::HashSet;

impl Solution {
    pub fn build_array(target: Vec<i32>, n: i32) -> Vec<String> {
        let mut ret: Vec<String> = vec![];

        let map: HashSet<i32> = target.iter().cloned().collect();

        for i in 1..=*target.last().unwrap() {
            if (map.contains(&i)) {
                ret.push(String::from("Push"));
            } else {
                ret.push(String::from("Push"));
                ret.push(String::from("Pop"));
            }
        }

        return ret;
    }
}
