use std::collections::HashMap;
let mut data: HashMap<u8, usize> = HashMap::new();

for (x,y) in order.chars().enumerate(){
    data.insert(y as u8, x);
}

let compare = |a: &String, b: &String| -> bool {
    let a = a.as_bytes();
    let b = b.as_bytes();
    
    let mut min = a.len();
    if b.len() < min {
        min = b.len();
    }

    for i in 0..min{
        let x = data[&a[i]];
        let y = data[&b[i]];

        if x == y {
            continue;
        } else if x > y {
            return false;
        } else {
            return true;
        }
    }

    a.len() <= b.len()

};

for two_words in words.windows(2){
    if !compare(&two_words[0], &two_words[1]){
        return false;
    }
}

true
