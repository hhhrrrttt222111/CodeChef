
// Time complexity of this algorithm is O(nlogn) 
// if the element is found we get the output as true
import java.util.*;

public class BinarySearch {
    public static boolean search(int arr[], int low, int high, int x) {
        int mid;
        while (low < high) {
            mid = low + high / 2;
            if (arr[mid] == x)
                return true;
            else if (arr[mid] < x)
                search(arr, mid + 1, high, x);
            else
                search(arr, 0, mid - 1, x);
        }
        return false;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of the array: ");
        int n = sc.nextInt();
        int arr[] = new int[n];
        System.out.print("Enter the elements of the array: ");
        for (int i = 0; i < arr.length; i++)
            arr[i] = sc.nextInt();
        System.out.print("Enter the element to be searched: ");
        int x = sc.nextInt();
        int low = 0;
        int high = arr.length - 1;
        System.out.println(search(arr, low, high, x));

    }
}