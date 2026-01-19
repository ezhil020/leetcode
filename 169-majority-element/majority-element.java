class Solution {
    public int majorityElement(int[] nums) {
        HashMap<Integer,Integer> map = new HashMap<>();
        for (Integer n : nums){
            if(map.get(n) == null)
            {
            map.put(n,1);
            }
            else{
                map.put(n,map.get(n)+1);
            }
            if(map.get(n) > nums.length / 2)
            {
                return n ;
            }
        }
        return -1;
    
        }
}