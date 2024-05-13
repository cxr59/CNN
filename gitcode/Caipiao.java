package cxr;
import java.util.*;
public class Caipiao {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("请输入整数：");
		int i=sc.nextInt();
		int s=(int) (Math.random()*90+10);
		int shii=i/10;
		int gei=i%10;
		int shis=s/10;
		int ges=s%10;
		if(i==s) System.out.println("恭喜您，获得$10000!");
		else if(shii==ges && gei==shis) System.out.println("恭喜您，获得$3000!");
		else if(shii==ges || gei==shis)System.out.println("恭喜您。获得$1000!");
		else  System.out.println("很遗憾，您没有中奖！");
		System.out.println("本次获奖数字为："+s);
	}

}
