/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public TreeNode sortedArrayToBST(int[] nums) {
        int n=nums.length;
        return solve(nums,0,n-1);    
    }
    public TreeNode solve(int[] nums,int i,int j){
        if(i>j) return null;
        int middle=((i+j)/2);
        TreeNode bst=new TreeNode(nums[middle]);
        bst.left=solve(nums,i,middle-1);
        bst.right=solve(nums,middle+1,j);

        return bst;
    }

}