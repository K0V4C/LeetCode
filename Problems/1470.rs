impl Solution {
    pub fn shuffle(nums: Vec<i32>, n: i32) -> Vec<i32> {
        
        let mut ret: Vec<i32> = vec![0; (n*2) as usize];
    
        for i in 0..n{
            ret[i as usize] = nums[i as usize];
            ret[(i + n) as usize] = nums[(i+n) as usize];
        }

        return ret;
    }
}