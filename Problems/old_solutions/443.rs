impl Solution {
    pub fn compress(chars: &mut Vec<char>) -> i32 {
    
        let mut iter: usize = 0;
        
        if chars.len() == 1 {
            return 1;
        }

        loop {
            
            let running_char = chars[iter];

            let mut next = iter + 1;
            let mut acc = 1;

            if next < chars.len() {

                while running_char == chars[next] {
                    acc += 1;
                    next += 1;
                    if next == chars.len() {
                        break;
                    }
                }

            }

            match acc {
                1 => {
                    chars.remove(iter);
                    chars.insert(iter, running_char);
                    iter += 1;
                }, 

                _ => {  

                    for i in 0..acc {
                        chars.remove(iter);
                    }

                    chars.insert(iter, running_char);

                    for i in acc.to_string().chars().rev(){
                        chars.insert(iter + 1, i);
                    }

                    iter += acc.to_string().len() + 1;

                }
            }
            
            if iter >= chars.len() {
                break;
            }
        }

        return (chars.len() as i32);
    }
}