/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package arduinoide;
import javax.swing.*;  
import java.awt.*;
import java.awt.event.*;
import java.text.*;  
import java.util.*;  

public class ArduinoIDE extends Frame{
    public ArduinoIDE(String title) {
        super(title);

        setSize(600, 300); // kich thuoc frame voi width = 300 va height = 300
        setLayout(null); // khong trinh quan ly layout
        setVisible(true); // hien thi frame
        addWindowListener(new WindowAdapter(){
            @Override
            public void windowClosing(WindowEvent e){
            super.windowClosing(e);
            System.exit(0);
        }
    });
    }
public class Main{
    public void main(String args[]) {
        new ArduinoIDE("sketch.ductam | Arduino IDE 0.0.0");
}
};
}