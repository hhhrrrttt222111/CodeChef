public class DecrementOrIncrement
{
    public static int Init(int num)
    {
        if (num % 4 == 0)
        {
            return ++num;
        }

        return --num;
    }
}
