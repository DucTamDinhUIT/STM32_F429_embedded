package com.bai1;
       
import java.util.Random;

public class Bai1 {

    public static void main(String[] args) {
     // TODO Auto-generated method stub
     Random rd=new Random();
     int a=rd.nextInt(26)+25;
     System.out.println("ngau nhien from 25 to 50 là "+" "+a);
     int b=rd.nextInt((26)+(-10));
     System.out.println("Ngau nhien from -10 to 15 là :"+" " +b);
    }
}
