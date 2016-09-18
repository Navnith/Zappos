import java.io.*;
import java.util.*;
import java.util.HashMap;

public class gigawatt{
	public static void main(String args[]){
		
		int [] batteryOne = new int [] {6, 3, 1, 9, 5, 4, 0, 1, -29, 12, 45, 2, 6};
		int [] batteryTwo = new int [] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
		int gigawattTarget = 100;

		boolean result;

		result= GigawattPower(batteryOne, batteryTwo, gigawattTarget);

		System.out.println(result);

		//HashMap map = new HashMap ();
		
	}

	public static boolean GigawattPower(int [] batteryOne, int [] batteryTwo, int gigawattTarget){
		HashMap<Integer, Integer> hmap = new HashMap<Integer, Integer>();
		for (int i=0; i < batteryOne.length; i++){
				hmap.put(gigawattTarget-batteryOne[i], gigawattTarget-batteryOne[i]);	
		}
		for (int i=0; i < batteryTwo.length; i++){
			if(hmap.containsKey(batteryTwo[i])){
				return true;
			}
		}
		return false;
	}
}