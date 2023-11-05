use std::collections::HashMap;

impl Solution {
    // let mut map: HashMap<i32, i32> = HashMap::new();
    pub fn tribonacci(n: i32) -> i32 {
        pub fn helper(n: i32, map: &mut HashMap<i32, i32>) -> i32 {
            match n {
                0 => return 0,
                1 => return 1,
                2 => return 1,
                _ => {
                    if let Some(&x) = map.get(&n) {
                        return x;
                    }
                }
            };

            let x = helper(n - 1, map) + helper(n - 2, map) + helper(n - 3, map);
            map.insert(n, x);
            return x;
        }

        let mut map: HashMap<i32, i32> = HashMap::new();

        return helper(n, &mut map);
    }
}
