impl Solution {
    pub fn is_anagram(s: String, t: String) -> bool {
        let mut map: Vec<usize> = vec![0; 26];

        if s.len() != t.len() {
            return false;
        }

        for i in s.as_bytes() {
            map[(i - b'a') as usize] += 1;
        }

        for i in t.as_bytes() {
            if map[(i - b'a') as usize] == 0 {
                return false;
            }

            map[(i - b'a') as usize] -= 1;
        }

        true
    }
}
