// Question:
// Write a Java program to identify the kth smallest element in the binary search tree where k =8.

import java.util.*;
import java.io.*;

class Node {
	int data;
	Node left, right;
	Node(int x)
	{
		data = x;
		left = right = null;
	}
}

public class BinaryTree {
	
	static int count = 0;
	public static Node insert(Node root, int x)
	{
		if (root == null)
			return new Node(x);
		if (x < root.data)
			root.left = insert(root.left, x);
		else if (x > root.data)
			root.right = insert(root.right, x);
		return root;
	}
	
	public static Node kthSmallest(Node root, int k)
	{
		if (root == null)
			return null;
		Node left = kthSmallest(root.left, k);
	
		if (left != null)
			return left;
			count++;
		if (count == k)
			return root;
	
		return kthSmallest(root.right, k);
	}
	
	public static void printKthSmallest(Node root, int k)
	{
		count = 0;
		
		Node res = kthSmallest(root, k);
		if (res == null)
			System.out.println("can't print as k is greater than nodes");
		else
			System.out.println(k+"-th Smallest Element is " + res.data);
	}
		
	public static void main (String[] args) {
		Scanner take = new Scanner(System.in);
		Node root = null;
        System.out.print("enter number of elements in the list: ");
		int size = take.nextInt();
	
        while(size-- !=0)
			root = insert(root, take.nextInt());
		System.out.print("enter k: ");
		int k = take.nextInt();
		printKthSmallest(root, k);
		
		
	}
}
