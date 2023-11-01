// This solution isn't mine and i dont take credit for it

use std::cell::RefCell;
use std::rc::Rc;

impl Solution {
    pub fn find_mode(root: Option<Rc<RefCell<TreeNode>>>) -> Vec<i32> {
        let mut current_val = 0;
        let mut current_count = 0;
        let mut max_count = 0;
        let mut modes = Vec::new();

        Self::in_order_traversal(
            &root,
            &mut current_val,
            &mut current_count,
            &mut max_count,
            &mut modes,
        );

        modes
    }

    fn in_order_traversal(
        node: &Option<Rc<RefCell<TreeNode>>>,
        current_val: &mut i32,
        current_count: &mut i32,
        max_count: &mut i32,
        modes: &mut Vec<i32>,
    ) {
        if let Some(n) = node {
            let n = n.borrow();

            Self::in_order_traversal(&n.left, current_val, current_count, max_count, modes);

            *current_count = if n.val == *current_val {
                *current_count + 1
            } else {
                1
            };
            *current_val = n.val;

            if *current_count == *max_count {
                modes.push(*current_val);
            } else if *current_count > *max_count {
                *max_count = *current_count;
                *modes = vec![*current_val];
            }

            Self::in_order_traversal(&n.right, current_val, current_count, max_count, modes);
        }
    }
}
