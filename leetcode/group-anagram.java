class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        // Create a HashMap to store anagrams as keys and lists of anagram words as values.
        HashMap<String, List<String>> map = new HashMap<>();

        // Create a list to store the final result.
        List<List<String>> res = new ArrayList<>();

        // Loop through each word in the input array.
        for (String word : strs) {
            // Convert the word into a character array for sorting.
            char[] charArr = word.toCharArray();

            // Sort the character array to get a canonical representation of the word.
            Arrays.sort(charArr);

            // Convert the sorted character array back to a string.
            String sortedWord = String.valueOf(charArr);

            // Check if the sortedWord (anagram key) is already in the map.
            if (!map.containsKey(sortedWord)) {
                // If it's not in the map, create a new list for this anagram group.
                map.put(sortedWord, new ArrayList<>());
            }

            // Add the word to the list of its anagram group.
            map.get(sortedWord).add(word);
        }

        // Add all the lists of anagrams from the map to the result list.
        res.addAll(map.values());

        // Return the final list of anagram groups.
        return res;
    }
}
