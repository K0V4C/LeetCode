impl Solution {
    pub fn find_max_average(nums: Vec<i32>, k: i32) -> f64 {
        let mut maximum = -1000000000000000.0;

        for x in nums.windows(k as usize) {
            let sum: i32 = x.iter().sum();

            let average: f64 = (sum as f64) / (k as f64);

            if average > maximum {
                maximum = average;
            }
        }

        maximum
    }
}

// cooler one

impl Solution {
    pub fn find_max_average(nums: Vec<i32>, k: i32) -> f64 {
        nums.windows(k as usize)
            .map(|x| x.iter().sum::<i32>())
            .max()
            .unwrap() as f64
            / k as f64
    }
}

