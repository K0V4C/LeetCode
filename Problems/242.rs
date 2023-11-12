impl Solution {
    pub fn is_anagram(s: String, t: String) -> bool {

        let mut t = t;

        if s.len() != t.len() {
            return false;
        }

        for (i, x) in s.bytes().enumerate(){
        let index:i32 = match t.find(x as char) {
            Some(v) => v as i32,
            _ => -1,
        };

        if index == -1 {
            return false;
        }

        t.remove(index as usize);
    }

    true


        
    }
}
