package com.davidread;

import java.util.*;

public class Main {

    private static int binaryConcatenation(int decX, int decY) {

        // Find binary representations of decX and decY without leading zeroes.
        String binX = Integer.toBinaryString(decX);
        String binY = Integer.toBinaryString(decY);

        // Concatenations of binX and binY.
        String concatBinXY = binX + binY;
        String concatBinYX = binY + binX;

        // Decimal values of the concatenations of binX and binY.
        int decConcatBinXY = Integer.parseInt(concatBinXY, 2);
        int decConcatBinYX = Integer.parseInt(concatBinYX, 2);

        // Return difference between the decimal values.
        return decConcatBinXY - decConcatBinYX;
    }

    public static void main(String[] args) {

        // Declare variables.
        Scanner scanner;
        int testCaseMax, numberOfParams, maxBinaryConcatenation, binaryConcatenation;
        List<Integer> params, output;

        // Initialize Scanner object.
        scanner = new Scanner(System.in);

        // Initialize output list.
        output = new ArrayList<>();

        // Get number of test cases to be executed.
        System.out.print("Enter number of test cases: ");
        testCaseMax = scanner.nextInt();

        // Run each test case.
        for (int testCaseCount = 0; testCaseCount < testCaseMax; testCaseCount++) {

            // Initialize parameters list.
            params = new ArrayList<>();

            // Get number of parameters.
            System.out.print("Enter number of parameters: ");
            numberOfParams = scanner.nextInt();
            scanner.nextLine();

            // Get list of parameters.
            System.out.print("Enter each parameter delimited by spaces: ");
            String stringListOfParameters[] = scanner.nextLine().split(" ");
            for (int i = 0; i < stringListOfParameters.length; i++)
                params.add(Integer.parseInt(stringListOfParameters[i]));

            /* Iterate through each possible pair of parameters (i,j) and calculate binaryConcatenation(i,j). Keep track
             * of maximum value encountered during entire iteration. */
            maxBinaryConcatenation = Integer.MIN_VALUE;

            for (int i = 0; i < numberOfParams; i++) {

                for (int j = 0; j < numberOfParams; j++) {
                    binaryConcatenation = binaryConcatenation(params.get(i), params.get(j));

                    if (binaryConcatenation > maxBinaryConcatenation)
                        maxBinaryConcatenation = binaryConcatenation;
                }
            }

            // Add maximum value encountered in this test case to output list.
            output.add(maxBinaryConcatenation);
        }

        // Print output list.
        System.out.println(output.toString());
    }
}