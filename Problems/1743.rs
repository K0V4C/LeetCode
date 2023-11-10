use std::collections::HashMap;
impl Solution {
    pub fn restore_array(adjacent_pairs: Vec<Vec<i32>>) -> Vec<i32> {
        
            
      let mut map: HashMap<i32, Vec<i32>> = HashMap::new();

      // generating graph
      for x in adjacent_pairs.into_iter() {

        let first_element = x[0];
        let second_element = x[1];

        if map.contains_key(&first_element) == false {
          map.insert(first_element, vec![second_element]);
        } else {
          map.entry(first_element).and_modify(|e| {e.push(second_element)});
        }

        if map.contains_key(&second_element) == false {
          map.insert(second_element, vec![first_element]);
        } else {
          map.entry(second_element).and_modify(|e| {e.push(first_element)});
        }
      }

      // i need to find at least one edge
      let mut start = 0;
      for (x, e) in map.iter() {
        if e.len() == 1 {
          start = *x;
          break
        }
      }

      //  start iterating from start

      println!("{:?}", map);
      let mut iter = start;
      let mut ret = vec![];
      let mut prev = 1000000000;

      loop {
        
        ret.push(iter);

        let edges = map.get(&iter).unwrap();
        
        if edges[0] != prev || ret.len() == 1 {
          prev = iter;
          iter = edges[0];

        } else {
          prev = iter;

          if edges.len() == 1 {
            break;
          }

          iter = edges[1];

        }
        


      }

      ret

    }
}
