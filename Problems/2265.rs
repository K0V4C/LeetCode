// Again not my solution but I don't want to give up from the badges
// I will rewrite this when I learn rust in more detail

// Definition for a binary tree node.
// #[derive(Debug, PartialEq, Eq)]
// pub struct TreeNode {
//   pub val: i32,
//   pub left: Option<Rc<RefCell<TreeNode>>>,
//   pub right: Option<Rc<RefCell<TreeNode>>>,
// }
//
// impl TreeNode {
//   #[inline]
//   pub fn new(val: i32) -> Self {
//     TreeNode {
//       val,
//       left: None,
//       right: None
//     }
//   }
// }
use std::cell::RefCell;
use std::rc::Rc;
impl Solution {
    pub fn average_of_subtree(root: Option<Rc<RefCell<TreeNode>>>) -> i32 {
        fn traverse(node: Option<Rc<RefCell<TreeNode>>>, result: &mut i32) -> (i32, i32) {
            if let Some(n) = node {
                let n = n.borrow();
                let (left_sum, left_count) = traverse(n.left.clone(), result);
                let (right_sum, right_count) = traverse(n.right.clone(), result);

                let curr_sum = n.val + left_sum + right_sum;
                let curr_count = 1 + left_count + right_count;

                if curr_sum / curr_count == n.val {
                    *result += 1;
                }

                (curr_sum, curr_count)
            } else {
                (0, 0)
            }
        }

        let mut result = 0;
        traverse(root, &mut result);
        result
    }
}
