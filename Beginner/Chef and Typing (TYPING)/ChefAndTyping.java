import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.HashMap;
import java.util.Map;

public class ChefAndTyping {

    private static final int THE_FIRST_CHARACTER_COST = 2;
    private static final int THE_SAME_HAND_COST = 4;
    private static final int ANOTHER_HAND_COST = 2;
    private static final String LEFT_HAND_CHARS = "df";
    private static final String RIGHT_HAND_CHARS = "jk";

    public static void main(String[] args) throws IOException {
        final BufferedReader scanner = new BufferedReader(new InputStreamReader(System.in));
        final short testcasesAmount = Short.parseShort(scanner.readLine());
        final Map<String, Integer> pastWordCosts = new HashMap<>();

        for (short testcase = 0; testcase < testcasesAmount; testcase++) {
            final short wordsAmount = Short.parseShort(scanner.readLine());
            int typingCost = 0;
            for (short wordIndex = 0; wordIndex < wordsAmount; wordIndex++) {
                final String word = scanner.readLine().toLowerCase();
                final String[] letters = word.split("");

                if (pastWordCosts.containsKey(word)) {
                    typingCost += pastWordCosts.get(word) / 2;
                } else {
                    int wordCost = THE_FIRST_CHARACTER_COST;
                    for (short charIndex = 1; charIndex < word.length(); charIndex++) {
                        final String prevChar = letters[charIndex - 1];
                        final String curChar = letters[charIndex];

                        if (isTheSameHand(prevChar, curChar)) {
                            wordCost += THE_SAME_HAND_COST;
                        } else {
                            wordCost += ANOTHER_HAND_COST;
                        }
                    }
                    typingCost += wordCost;
                    pastWordCosts.put(word, wordCost);
                }
            }
            System.out.println(typingCost);
            pastWordCosts.clear();
        }
    }

    private static boolean isTheSameHand(String prevLetter, String curLetter) {
        return prevLetter.equals(curLetter)
                || (LEFT_HAND_CHARS.contains(prevLetter) && LEFT_HAND_CHARS.contains(curLetter))
                || (RIGHT_HAND_CHARS.contains(prevLetter) && RIGHT_HAND_CHARS.contains(curLetter));
    }
}
