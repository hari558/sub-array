class MaxConsecutiveOnes
{
 private static int maxConsecutiveOnes(int x)
 {
int count = 0;
 reach x = 0.
 while (x!=0)
 {
x = (x & (x << 1));
   count++;
        }
 return count;
    }
  public static void main(String strings[])

    {

        System.out.println(maxConsecutiveOnes(14));

        System.out.println(maxConsecutiveOnes(222));

    }
}
