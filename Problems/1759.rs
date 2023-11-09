impl Solution {
    pub fn count_homogenous(s: String) -> i32 {
    
        let mut prev = s.as_bytes()[0];

        let MOD = 1000000000;

        let mut sum: i64 = 0;
        let mut acc: i64 = 1;
        for x in s[1..].as_bytes() {

            sum += acc;
            acc += 1;

            if *x != prev {
                prev = *x;
                acc = 1;
            }
        }

        sum += acc;

        return (sum % (MOD + 7)) as i32;

    }
}
