impl Solution {
    pub fn is_reachable_at_time(sx: i32, sy: i32, fx: i32, fy: i32, t: i32) -> bool {
        
        if sx == fx && sy == fy && t == 1 {
            return false;
        }

        let x_moves = (sx - fx).abs();
        let y_moves = (sy - fy).abs();

        let diagonal = x_moves.min(y_moves);

        println!("{diagonal} {x_moves} {y_moves}");

        let res = t - diagonal;

        if res < 0 {
            return false;
        }  

        let x_moves = x_moves - diagonal;
        let y_moves = y_moves - diagonal;

        if res >= x_moves + y_moves {
            return true;
        }

        false

    }
}
