class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer,Integer> map = new HashMap<>();
        for(Integer i = 0 ; i < nums.length ; i++){
            Integer element = target - nums[i];
            if (map.containsKey(element)){
                return new int[] { map.get(element), i };
            }
            else{
                map.put(nums[i],i);
            }
        }
        return new int[] { };


            }
}