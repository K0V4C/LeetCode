impl Solution {
    pub fn find_anagrams(s: String, p: String) -> Vec<i32> {

        // Not optimal cuz of the cloning but didn't have time to make it optimal 
        // With that optimization it will be top runner 

        let mut bit_set:Vec<u32> = vec![0; 27];

        for x in p.as_bytes(){
            bit_set[(x - b'a') as usize] += 1;
        }

        let mut tmp: Vec<i32> = vec![];

        for (i, char_elems) in s.as_bytes().windows(p.capacity()).enumerate(){

            let mut cnt: u32 = 0;
            let mut bit_set_c = bit_set.clone();


            for char in char_elems{
                if bit_set_c[(char - b'a') as usize] != 0{
                    cnt += 1;
                    bit_set_c[(char - b'a') as usize] -= 1;
                }
            }

            if cnt == p.capacity() as u32{
                tmp.push( i as i32);
            }

        }

        tmp
    }
}