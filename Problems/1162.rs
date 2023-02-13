impl Solution {
    pub fn max_distance(grid: Vec<Vec<i32>>) -> i32 {
        let mut grid = grid;
        let mut zeros = 0;

        for i in 0..grid.len(){
            for j in 0..grid.len(){
                if grid[i][j] == 0 {
                    zeros += 1;
                }
            }
        }

        if zeros == (grid.len() * grid.len()) as i32 {
            return -1;
        }

        if zeros == 0 {
            return -1;
        }

        let mut current = 1;

        while zeros != 0 {
            for i in 0..grid.len(){
                for j in  0..grid.len(){
                    if grid[i][j] == current{
                        if (i as i32) - 1 >= 0{
                            if grid[i-1][j] == 0{
                                grid[i-1][j] = current+1;
                                zeros -= 1;
                            }

                        }
                        if (i as i32) + 1 < grid.len() as i32{
                            if grid[i+1][j] == 0{
                                grid[i+1][j] = current+1;
                                zeros -= 1;
                            }
                        }
                        if (j as i32) - 1 >= 0{
                            if grid[i][j-1] == 0{
                                grid[i][j-1] = current+1;
                                zeros -= 1;
                            }
                        }
                        if (j as i32) + 1 < grid.len() as i32 {
                            if grid[i][j+1] == 0{
                                grid[i][j+1] = current+1;
                                zeros -= 1;
                            }
                        }
                    }
                }
            }

            current += 1;
        }



        return current-1;
    }
}