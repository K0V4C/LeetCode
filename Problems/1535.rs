impl Solution {
    pub fn get_winner(arr: Vec<i32>, k: i32) -> i32 {
        let mut i = 0;
        let mut j = 1;

        let mut cnt = 0;

        let mut flag = false;

        if k == 1 {
            return arr[0].max(arr[1]);
        }

        if k > arr.len() as i32 {
            return *arr.iter().max().unwrap();
        }

        while k > cnt {
            if arr[i] > arr[j] {
                if flag {
                    flag = false;
                    cnt = 0;
                }

                cnt += 1;

                if i < j {
                    j = (j + 1) % arr.len();
                } else {
                    j = (i + 1) % arr.len();
                }
            } else if arr[j] > arr[i] {
                if !flag {
                    flag = true;
                    cnt = 0;
                }

                cnt += 1;

                if j < i {
                    i = (i + 1) % arr.len();
                } else {
                    i = (j + 1) % arr.len();
                }
            }
        }

        if flag {
            return arr[j];
        } else {
            return arr[i];
        }
    }
}
