import java.io.IOException;
import java.util.Scanner;

public class SimilarDishes {

	public static void main(String[] args) throws IOException {
		int t, i, j;
		t = Integer.parseInt(ConsoleInput.readToWhiteSpace(true));

		for(i = 0; i < t; i++) {
			int count = 0;
			String[] s = new String[4];
			for(i = 0; i < 4; i++) {
				s[i] = ConsoleInput.readToWhiteSpace(true);
			}
			String[] a = new String[4];
			for ( i = 0;i < 4;i++) {
				a[i] = ConsoleInput.readToWhiteSpace(true);
			}
			for ( i = 0;i < 4;i++) {
				for (j = 0;j < 4;j++) {
					if (s[i].equals(a[j])){
						count++;
					}
				}
			}
			if (count >= 2) {
				System.out.print("similar");
				System.out.print("\n");
			}
			else {
				System.out.print("dissimilar");
				System.out.print("\n");
			}
		}
	}
}

//Class for reading whitespace
class ConsoleInput
{
	private static boolean goodLastRead = false;
	public static boolean lastReadWasGood()
	{
		return goodLastRead;
	}

	public static String readToWhiteSpace(boolean skipLeadingWhiteSpace) throws IOException
	{
		String input = "";
		char nextChar;
		while (Character.isWhitespace(nextChar = (char)System.in.read()))
		{
			
			if (!skipLeadingWhiteSpace)
			{
				input += nextChar;
			}
		}
		
		input += nextChar;

		
		while (!Character.isWhitespace(nextChar = (char)System.in.read()))
		{
			input += nextChar;
		}

		goodLastRead = input.length() > 0;
		return input;
	}

	public static String scanfRead() throws IOException
	{
		return scanfRead(null, -1);
	}

	public static String scanfRead(String unwantedSequence) throws IOException
	{
		return scanfRead(unwantedSequence, -1);
	}

	public static String scanfRead(String unwantedSequence, int maxFieldLength) throws IOException
	{
		String input = "";

		char nextChar;
		if (unwantedSequence != null)
		{
			nextChar = '\0';
			for (int charIndex = 0; charIndex < unwantedSequence.length(); charIndex++)
			{
				if (Character.isWhitespace(unwantedSequence.charAt(charIndex)))
				{
					
					while (Character.isWhitespace(nextChar = (char)System.in.read()))
					{
					}
				}
				else
				{
					
					nextChar = (char)System.in.read();
					if (nextChar != unwantedSequence.charAt(charIndex))
						return null;
				}
			}

			input = (new Character(nextChar)).toString();
			if (maxFieldLength == 1)
				return input;
		}

		while (!Character.isWhitespace(nextChar = (char)System.in.read()))
		{
			input += nextChar;
			if (maxFieldLength == input.length())
				return input;
		}

		return input;
	}
}
