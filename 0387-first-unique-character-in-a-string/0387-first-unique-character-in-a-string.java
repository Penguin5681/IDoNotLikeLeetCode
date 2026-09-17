class Solution {
    public int firstUniqChar(String name) {
        Map<Character, Integer> charCountMap = new LinkedHashMap<>();
        
        for (char c : name.toLowerCase().toCharArray()) {
           charCountMap.put(c, charCountMap.getOrDefault(c, 0) + 1); 
        }

        for (Map.Entry<Character, Integer> entry : charCountMap.entrySet()) {
            if (entry.getValue() == 1) {
                return name.indexOf(entry.getKey());
            }
        } 

        return -1;
    }
}