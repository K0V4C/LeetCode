use std::collections::BTreeMap;

impl Solution {
    pub fn top_k_frequent(nums: Vec<i32>, k: i32) -> Vec<i32> {
        let mut map: BTreeMap<i32, i32> = BTreeMap::new();
        let mut ret: Vec<i32> = vec![];

        for x in nums.into_iter() {
            map.entry(x).and_modify(|e| *e += 1).or_insert(1);
        }

        let mut vec: Vec<(i32, i32)> = map.into_iter().collect();
        vec.sort_by(|a, b| b.1.cmp(&a.1));
        vec.iter().take(k as usize).map(|x| x.0).collect()
    }
}
