impl Solution {
    pub fn is_palindrome(s: String) -> bool {
        let new_string = s
            .chars()
            .filter(|x| x.is_alphanumeric())
            .collect::<String>()
            .to_ascii_lowercase();
        let new_string = new_string.as_bytes();

        if new_string.len() == 0 {
            return true;
        }

        let mut i = 0;
        let mut j = new_string.len() - 1;

        while i < j {
            match new_string[i].cmp(&new_string[j]) {
                std::cmp::Ordering::Less | std::cmp::Ordering::Greater => return false,
                _ => {
                    i += 1;
                    j -= 1;
                }
            }
        }

        true
    }
}
