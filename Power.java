import java.util.*;
public class Power{
	public static void main(String[] args){
		int a=Integer.parseInt(args[0]);
		System.out.println("2^ "+a+"is ="+Math.pow(2,a));
		if(a<30){
			for(int i=0;i<a;i++){
				System.out.println("2^ "+i+" = "+Math.pow(2,i));
			}
		}
	}
}
