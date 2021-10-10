class solution {
    public int minDeletions(String s) {
        HashMap<Character, Integer> map = new HashMap<>();
        HashSet<Integer> frequencies = new HashSet<>();

        var chars = s.toCharArray();
        for (char ch : chars) {
            map.put(ch, map.getOrDefault(ch, 0) + 1);
        }

        // check if have same freq chars if there is remove them
        // we are maintaining a set to check the unique freq
        int del = 0;
        for (char ch : map.keySet()) {
            int freq = map.get(ch);
            if (!frequencies.contains(freq)) {
                frequencies.add(freq);
            } else {
                while (frequencies.contains(freq) && freq > 0) {
                    del += 1;
                    freq -= 1;
                }
                if (freq > 0) {
                    frequencies.add(freq);
                }
            }
        }
        return del;
    }
}