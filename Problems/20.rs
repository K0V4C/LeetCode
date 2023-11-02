impl Solution {
    pub fn is_valid(s: String) -> bool {
        let mut stack: Vec<char> = vec![];

        for e in s.chars() {
            match e {
                '(' => {
                    stack.push('(');
                }
                ')' => {
                    let top = stack.pop();

                    if let Some(x) = top {
                        if x != '(' {
                            return false;
                        }
                    } else {
                        return false;
                    }
                }
                '[' => {
                    stack.push('[');
                }
                ']' => {
                    let top = stack.pop();

                    if let Some(x) = top {
                        if x != '[' {
                            return false;
                        }
                    } else {
                        return false;
                    }
                }
                '{' => {
                    stack.push('{');
                }
                _ => {
                    let top = stack.pop();

                    if let Some(x) = top {
                        if x != '{' {
                            return false;
                        }
                    } else {
                        return false;
                    }
                }
            }
        }

        if stack.len() == 0 {
            return true;
        }

        false
    }
}
