use std::collections::BTreeSet;

struct SeatManager {
    seats: BTreeSet<i32>,
}


/** 
 * `&self` means the method takes an immutable reference.
 * If you need a mutable reference, change it to `&mut self` instead.
 */
impl SeatManager {

    fn new(n: i32) -> Self {

        let mut a = BTreeSet::new();

        for x in 1..=n {
            a.insert(x);
        }

        SeatManager {
            seats: a,
        }
    }
    
    fn reserve(&mut self) -> i32 {
        let ret = self.seats.iter().next().cloned();

        if let Some(e) = ret {
            self.seats.remove(&e);
        } 

        ret.unwrap()

    }
    
    fn unreserve(&mut self, seat_number: i32) {
        self.seats.insert(seat_number);
    }
}

/**
 * Your SeatManager object will be instantiated and called as such:
 * let obj = SeatManager::new(n);
 * let ret_1: i32 = obj.reserve();
 * obj.unreserve(seatNumber);
 */
