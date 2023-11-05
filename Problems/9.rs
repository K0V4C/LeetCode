impl Solution {
    pub fn is_palindrome(x: i32) -> bool {
        let t = x.to_string();

        return t.chars().eq(t.chars().rev());
    }
}
