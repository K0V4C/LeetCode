impl Solution {
    pub fn check_inclusion(s1: String, s2: String) -> bool {

        // General optimization would be to move the sliding window by one and only add ad substract one
        // I know how to do it just don't have time for it right now

        let mut bit_set:Vec<u8> = vec![0; 27];

        for x in s1.as_bytes(){
            bit_set[(x - b'a') as usize] += 1;
        }

        for char_elems in s2.as_bytes().windows(s1.capacity()){

            let mut cnt: u32 = 0;
            // This line can be otpimized
            let mut bit_set_c = bit_set.clone();


            for char in char_elems{
                if bit_set_c[(char - b'a') as usize] != 0{
                    cnt += 1;
                    bit_set_c[(char - b'a') as usize] -= 1;
                }
            }

            if cnt == s1.capacity() as u32{
                return true;
            }

        }

        false
    }
}