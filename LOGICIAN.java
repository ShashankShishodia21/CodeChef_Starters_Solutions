import java.util.*;
import java.lang.*;
import java.io.*;
class Codechef {
public static void main (String[] args) throws java.lang.Exception
{
    Scanner sc = new Scanner(System.in);
    int t=sc.nextInt();
    
    while(t>0){
        int n=sc.nextInt();
        String s=sc.next();
        String ans="";
        int oneCount=0;
        int zeroCount=0;
        for(int i=0;i<n;i++){
            char c=s.charAt(i);
            
            if (c=='1') {        
                oneCount++;
                if(i==n-1){
                    if(zeroCount > 0) {
                        System.out.println("NO");
                    }
                    else{
                        System.out.println("YES");
                    }
                }
                else{
                    if(zeroCount > 0){
                        System.out.println("NO");
                    }
                    else{
                        System.out.println("IDK");
                    }
                }
            }
            else{
                zeroCount++;
                System.out.println("NO");
            }
        }
    t--;
}
}
}
