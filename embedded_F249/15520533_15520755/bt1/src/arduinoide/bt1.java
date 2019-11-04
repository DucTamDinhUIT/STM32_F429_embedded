/*
Author
15520755 - Dinh Duc Tam
115520533 - Tran Quang Nghi
Sources tham khao: javatpoint(dot)com
 */
package arduinoide;
import java.awt.*;
import java.awt.event.*;  

public class bt1 extends Frame implements ActionListener{
    TextField tf;
    Label l1,l2;  
    TextArea area;  
    Button b1,b2;
    bt1(){  
        //ađ panel
         Panel panel = new Panel();
         panel.setBounds(40, 80, 200, 200);
         panel.setBackground(Color.gray);
         /*Button button1 = new Button("Button 1");
         button1.setBounds(50, 100, 80, 30);
         button1.setBackground(Color.yellow);
         Button button2 = new Button("Button 2");
         button2.setBounds(100, 100, 80, 30);
         button2.setBackground(Color.green);*/
       
         MenuBar mb=new MenuBar();  
         Menu menu=new Menu("Menu");  
         Menu submenu=new Menu("Sub Menu");  
         MenuItem i1=new MenuItem("Item 1");  
         MenuItem i2=new MenuItem("Item 2");  
         MenuItem i3=new MenuItem("Item 3");  
         MenuItem i4=new MenuItem("Item 4");  
         MenuItem i5=new MenuItem("Item 5");  
         menu.add(i1);  
         menu.add(i2);  
         menu.add(i3);  
         submenu.add(i4);  
         submenu.add(i5);  
         menu.add(submenu);  
         mb.add(menu);

         panel.add(panel);
         panel.setSize(400, 400);
         panel.setLayout(null);
         panel.setVisible(true);

        //create components
        
        tf=new TextField();  
        tf.setBounds(0,0,170,20);  
        Button b1=new Button("click me");  
        b1.setBounds(100,120,80,30);  
        //register listener  
        b1.addActionListener(this);//passing current instance  
        //add components and set size, layout and visibility  
        add(b1);add(tf);
        //Made by Nghi : Enable input area
            l1=new Label();  
            l1.setBounds(70,50,600,400);  
            l2=new Label();  
            l2.setBounds(160,500,600,400);  
            area=new TextArea();  
            area.setBounds(20,100,600,400);  
            b2=new Button("Compile code");  
            b2.setBounds(100,400,100,30);  
            b2.addActionListener(this);  
            add(l1);add(l2);add(area);add(b2);  
            setSize(400,450);  
            setLayout(null);  
            setVisible(true);
        //made by Tam : frame + button + closing 
        setTitle("15520755 - 15520533 | Arduin IDE"); 
        //Setting the layout for the Frame
        setLayout(new FlowLayout());
        /* By default frame is not visible so 
         * we are setting the visibility to true 
         * to make it visible.
         */
        setSize(600,400);  
        setVisible(true);  
        // closing - start 
        addWindowListener(new WindowAdapter(){
            @Override
            public void windowClosing(WindowEvent e){
                super.windowClosing(e);
                System.exit(0);
            }   
        });
         //closing - end.
    };
    /*/menu items - start (R&D part)
    public class MenuExample(){
    Frame f= new Frame("Menu and MenuItem Example");  
    MenuBar mb=new MenuBar();  
    Menu menu=new Menu("Menu");  
    Menu submenu=new Menu("Sub Menu");  
    MenuItem i1=new MenuItem("Item 1");  
    MenuItem i2=new MenuItem("Item 2");  
    MenuItem i3=new MenuItem("Item 3");  
    MenuItem i4=new MenuItem("Item 4");  
    MenuItem i5=new MenuItem("Item 5");  
    menu.add(i1);  
    menu.add(i2);  
    menu.add(i3);  
    submenu.add(i4);  
    submenu.add(i5);  
    menu.add(submenu);  
    mb.add(menu);  
    f.setMenuBar(mb);  
    f.setSize(400,400);  
    f.setLayout(null);  
    f.setVisible(true);
    //menu items - end*/

    
    public void actionPerformed(ActionEvent e){  
        tf.setText("Welcome");
    }
    public void actionPerformed2(ActionEvent e){  
  
    l1.setText("Java");  
    l2.setText("Embedded");  
}  
    /**
     * @param args the command line arguments
     */
    public static void main(String args[]){  
         // TODO code application logic here
        new bt1();
    }
}

