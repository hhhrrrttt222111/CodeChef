class CutTheSticks { 

public static void main(String[] args) {
    List<Integer> sticks = readSticksFromStdin();
    Collections.sort(sticks);

    int pos = 0;
    int remaining = sticks.size();
    while (0 < remaining) {
        System.out.println(remaining);
        int count = countEqualFrom(sticks, pos);
        pos += count;
        remaining -= count;
    }
}

private static int countEqualFrom(List<Integer> sticks, int from) {
    int value = sticks.get(from);
    for (int i = 1; from + i < sticks.size(); ++i) {
        if (value != sticks.get(from + i)) {
            return i;
        }
    }
    return sticks.size() - from;
}

private static List<Integer> readSticksFromStdin() {
    Scanner scanner = new Scanner(System.in);
    int num = scanner.nextInt();
    List<Integer> sticks = new ArrayList<>(num);
    for (int i = 0; i < num; ++i) {
        sticks.add(scanner.nextInt());
    }
    return sticks;
}

}