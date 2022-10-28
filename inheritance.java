/*
 * First practice program for inheritance in Java. Not part of weekly lab quesitons in class
 * 
 * Most Java Home practice Questions will be inspired / solving directly from the book:
 * --> Java The Complete Reference, 12E Schildt, Herbert
 * */

package week7;
import java.util.Scanner;

//super class
class A{
	int i, j;

void showVal() {
	System.out.println("I and J are:" + i + ";" + j);
}
}

//sub class
class B extends A{
	int k;
	
	void showk() {
		System.out.println("K is: " + k);
	}
	
	void sum() {
		System.out.println("Sum is: " + (i+j+k));
	}
}

public class inheritance {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		A superOb = new A();
		B subOb = new B();
		
		//Define the superOb
		superOb.i = 10;
		superOb.j = 20;
		superOb.showVal();
		
		//Define the subOb
		subOb.i = 15; //these values of i and j will only be applied
		subOb.j = 25; //for the sub class 
		subOb.k = 35;
		subOb.showVal();
		subOb.showk();
		superOb.showVal(); //super class still stores values assigned to it
		subOb.sum();

	}

}
