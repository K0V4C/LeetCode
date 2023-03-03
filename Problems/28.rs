impl Solution {
    pub fn str_str(haystack: String, needle: String) -> i32 {
    if needle == haystack {
        return 0;
    }

    if needle.len() > haystack.len() {
        return -1;
    }

    for (index, x) in haystack.as_bytes().windows(needle.len()).enumerate(){

        if *x == needle.as_bytes()[..] {
            return (index as i32);
        }
    }

    return -1;
    }
}