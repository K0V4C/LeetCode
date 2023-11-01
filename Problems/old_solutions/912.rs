pub fn heapify(nums: &mut Vec<i32>){
    let len = nums.len();
    for i in (0..nums.len()).rev(){
        
        let mut curr = i;

        loop {

            let mut max;

            let left_child = (curr+1) * 2 -1;
            let right_child = (curr+1)*2;

            if left_child < len && right_child < len {

                max = left_child;

                if nums[left_child] < nums[right_child] {
                    max = right_child;
                }

            } else if left_child < len && right_child >= len {
                max = left_child;
            } else if right_child < len && right_child >= len {
                max = right_child;
            } else {
                break;
            }

            if nums[max] > nums[curr] {

                let temp = nums[max];
                nums[max] = nums[curr];
                nums[curr] = temp;
                
                curr = max;

            } else {
                break;
            }

        }
    }
}

pub fn heap_sort(nums: &mut Vec<i32>){

    heapify(nums);

    println!("{:?}", nums);

    for i in (0..nums.len()).rev(){

        let temp = nums[0];
        nums[0] = nums[i];
        nums[i] = temp;

        let len = i;

        let mut curr = 0;

        loop {

            let left_child = (curr+1) * 2 -1;
            let right_child = (curr+1)*2;

            let mut max;

            if left_child < len && right_child < len {

                max = left_child;

                if nums[left_child] < nums[right_child] {
                    max = right_child;
                }

            } else if left_child < len && right_child >= len {
                max = left_child;
            } else if right_child < len && right_child >= len {
                max = right_child;
            } else {
                break;
            }
            if nums[max] > nums[curr] {

                let temp = nums[max];
                nums[max] = nums[curr];
                nums[curr] = temp;
                
                curr = max;

            } else {
                break;
            }
            
        }
    }
    
}

impl Solution {
    pub fn sort_array(nums: Vec<i32>) -> Vec<i32> {
        let mut nums = nums.clone();

        heap_sort(&mut nums);

        return nums;

    }
}