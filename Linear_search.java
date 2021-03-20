import java.util.Scanner;
public class Linear_search{
	public static void main(String[] args)
	{
		boolean found=false;
    int position=0,listlength=10;
    int[] a={5,2,7,8,12,54,2,7,9,3},item; 
    Scanner scan = new Scanner(System.in);
    int target=0;
    if(scan.hasNext())
    {
      target = scan.nextInt();
    }
    while((found==false)&&(position<=9))
    {
      if(target == a[position])
      {
        found=true;
      }
      else
      {
        position=position+1;
      }
    }
    if(found==true)
    {
      System.out.println("Item found at "+position+"\n");
    }
    else
    {
      System.out.println("Item not found in list\n");
    }

	}
}