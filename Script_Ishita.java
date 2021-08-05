#!/usr/bin/java

public class Main
{
    static int hammingDist(String str1, String str2){
        
    int i = 0, count = 0;
    while (i < str1.length()){
        if (str1.charAt(i) != str2.charAt(i))
            count++;
        i++;
    }
    return count;
    }
	
	public static void main(String[] args) {
		String Name = "Ishita Shreshtha";
		String Email = "31ishita12@gmail.com";
		String SlackUsername = "@Ishreshtha";
		String Biostack = "Fill here";
		String Twitter = "@IShreshtha";
		int Distance = hammingDist (SlackUsername, Twitter);
		
		System.out.println(Name+","+Email+","+SlackUsername+","+Biostack+","+Twitter+","+Distance);
	}
}
