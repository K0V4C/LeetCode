use std::ops::Add;

impl Solution {
    pub fn merge_alternately(word1: String, word2: String) -> String {

        let a = word1.clone();
        let b = word2.clone();

        let me = a.chars().zip(b.chars());

        let mut out = String::from("");

        for (x, y) in me {
            out.push(x);
            out.push(y);
        }

        if a.len() > b.len() {
            out = out.add(&a[b.len()..]);
        }

        if b.len() > a.len() {
            out = out.add(&b[a.len()..]);
        }

        out
    }
}
