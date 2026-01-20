class Solution {
    public int subarraySum(int[] nums, int k) {
    HashMap<Integer,Integer> map = new HashMap<>();
    Integer count = 0;
    Integer sum = 0;
    Integer rem = 0;
            map.put(0,1);
    for(Integer i = 0 ; i < nums.length ; i++){
         sum += nums[i];
        rem = sum - k;
        if(map.containsKey(rem)){
            count+=map.get(rem);
        }
             map.put(sum, map.getOrDefault(sum, 0) + 1);

    }
    return count;
        
    }
}