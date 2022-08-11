import java.util.Scanner;
public class watermelon{
public static void main(String args[]) {

    int w;
    String res;
    Scanner input = new Scanner(System.in);
    w=input.nextInt();

//    res = (w%2 ==0 && w>2) ? "YES": "NO";
//     System.out.println(res);
    if(w>2)
        {
        if((w%2)==0)
            System.out.println("YES");
        else
            System.out.println("NO");
        }
        else
            System.out.println("NO");


}
}