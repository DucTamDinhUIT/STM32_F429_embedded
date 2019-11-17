/*
Author
15520755 - Dinh Duc Tam
15520533 - Tran Quang Nghi
Sources tham khao: javatpoint(dot)com
 */
package arduinoide;
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import java.io.*;



public class bt1  implements ActionListener, ItemListener{
    bt1() {
        //Creat JfFrame with title, background.
        JFrame f = new JFrame();
        f.setTitle("15520755 - 15520533 | Arduino IDE");
        f.setBackground(Color.gray);
        
        //Creat menu items - start : Developer by Tâm!
        //file
        JMenuBar mb=new JMenuBar();  
        JMenu file=new JMenu("File");  
        JMenu example=new JMenu("Examples");  
        JMenuItem i1=new JMenuItem("New");  
        JMenuItem i2=new JMenuItem("Open");  
        JMenuItem i3=new JMenuItem("Save");  
        JMenuItem i4=new JMenuItem("Close");  
        JMenuItem i5=new JMenuItem("Quit"); 
        JMenuItem i6=new JMenuItem("Digital");
        JMenuItem i7=new JMenuItem("Analog");
         //Developer by Tâm!
        i1.addActionListener(this);     //listener for item
        i2.addActionListener(this);     //listener for item
        i3.addActionListener(this);     //listener for item
        i5.addActionListener(this);     //listener for item
        file.add(i1);                   //add item into file
        file.add(i2);                   //add item into file
        file.add(i3);                   //add item into file
        file.add(i4);                   //add item into file
        file.add(i5);                   //add item into file
        example.add(i6);                //add item into submenu example
        example.add(i7);                //add item into submenu example
        file.add(example);              //add submenu "example" into menu "file"
        
        
        //creat menu "edit"
        JMenu edit=new JMenu("Edit");  
        JMenuItem j1=new JMenuItem("Undo");  
        JMenuItem j2=new JMenuItem("Redo");  
        JMenuItem j3=new JMenuItem("Cut");  
        JMenuItem j4=new JMenuItem("Copy");  
        JMenuItem j5=new JMenuItem("Paste"); 
        JMenuItem j6=new JMenuItem("Comment");
        JMenuItem j7=new JMenuItem("Find");
        JMenuItem j8=new JMenuItem("Replace");
        JMenuItem j9=new JMenuItem("Up/Down Size");
        edit.add(j1);  
        edit.add(j2);  
        edit.add(j3);
        edit.add(j4);
        edit.add(j5);
        edit.add(j6);
        edit.add(j7);
        edit.add(j8);
        edit.add(j9);
        //Creat menu "sketch"
        JMenu sketch=new JMenu("Sketch");  
        JMenu includelib=new JMenu("Include Library"); 
        JMenuItem k1=new JMenuItem("Verify/Complie");  
        JMenuItem k2=new JMenuItem("Upload");  
        JMenuItem k3=new JMenuItem("Upload Using Programer");  
        JMenuItem k4=new JMenuItem("Export anything");  
        JMenuItem k5=new JMenuItem("Show"); 
        JMenuItem k6=new JMenuItem("Clean ROM");
        JMenuItem k7=new JMenuItem("Add File");
        JMenuItem k8=new JMenuItem("Lib 1");
        JMenuItem k9=new JMenuItem("Lib 2");
        
        sketch.add(k1);  
        sketch.add(k2);  
        sketch.add(k3);
        sketch.add(k4);
        sketch.add(k5);
        sketch.add(includelib);
        sketch.add(k6);
        sketch.add(k7);
        includelib.add(k8);
        includelib.add(k9);
        
        //Creat menu "tools"
        JMenu tools=new JMenu("Tools");  
        JMenu board=new JMenu("Boards");
        JMenu port=new JMenu("Port COM"); 
        JMenuItem l1=new JMenuItem("Auto format");  
        JMenuItem l2=new JMenuItem("Fix endcode & Reload");  
        JMenuItem l3=new JMenuItem("Serial Moniter");  
        JMenuItem l4=new JMenuItem("Serial Plotter");  
        JMenuItem l5=new JMenuItem("Update Firmware"); 
        JMenuItem l6=new JMenuItem("COM 1");
        JMenuItem l7=new JMenuItem("COM 2");
        JMenuItem l8=new JMenuItem("Arduino Uno");
        JMenuItem l9=new JMenuItem("Arduino Mega");
        JMenuItem l10=new JMenuItem("Arduino Nano");
        JMenuItem l11=new JMenuItem("Get Board info");
               
        tools.add(l1);  
        tools.add(l2);  
        tools.add(l3);
        tools.add(l4);
        tools.add(l5);
        port.add(l6);
        port.add(l7);
        port.add(l11);
        board.add(l8);
        board.add(l9);
        board.add(l10);
        tools.add(board);
        tools.add(port);
        
        //Creat menu "help"
        JMenu help=new JMenu("Helps");  
        JMenuItem h1=new JMenuItem("Getting started");  
        JMenuItem h2=new JMenuItem("Environment");  
        JMenuItem h3=new JMenuItem("Troubleshoting");  
        JMenuItem h4=new JMenuItem("Reference");  
        JMenuItem h5=new JMenuItem("Help custom"); 
        JMenuItem h6=new JMenuItem("Find in Reference");
        JMenuItem h7=new JMenuItem("Ask question");
        JMenuItem h8=new JMenuItem("Visit us");
        JMenuItem h9=new JMenuItem("Abort Arduino IDE");
               
        help.add(h1);  
        help.add(h2);  
        help.add(h3);
        help.add(h4);
        help.add(h5);
        help.add(h6);
        help.add(h7);
        help.add(h8);
        help.add(h9);
        //add menu" file, edit, sketch, tools, help to menubar.
        mb.add(file);
        mb.add(edit);
        mb.add(sketch);
        mb.add(tools);
        mb.add(help);
        //menu items - end/
        
        //set menubar to Frame.
        f.setJMenuBar(mb);
        f.setSize(700, 500);
        f.setLayout(new BorderLayout());        //use Layout "BorderLayout"
        f.setVisible(true);
        
        //Developer by Nghi!
        //add panelOne on panelZero
        JPanel panelZero = new JPanel();
        panelZero.setBounds(00, 00, 600, 400);   
        panelZero.setLayout(new BorderLayout());  //use Layout "GridLayout"
        panelZero.setBackground(Color.white);
        panelZero.setVisible(true);

        
        //add panelOne on panelZero
        JPanel panelOne = new JPanel();
        panelOne.setBounds(00, 00, 700, 400);
        panelOne.setBackground(Color.black);
        panelOne.setLayout(new GridLayout(1, 6));  //use Layout "GridLayout"
        panelOne.setVisible(true);
        String str1[]={"1", "2", "3", "4", "5", "6"};
        
        
        
        
         //Generate button!!!
        JButton verify, upload, newpage, save, open;
        verify = new JButton("Verify");
        verify.setBounds(00, 00, 80, 30);
        upload = new JButton("Upload");
        upload.setBounds(81, 00, 80, 30);
        newpage = new JButton("New Page");
        newpage.setBounds(161, 00, 80, 30);
        save = new JButton("Save");
        save.setBounds(241, 00, 80, 30);
        open = new JButton("Open");
        open.setBounds(321, 00, 79, 30);
        
        verify.addActionListener(this);
        upload.addActionListener(this);
        newpage.addActionListener(this);
        save.addActionListener(this);
        open.addActionListener(this);
          
        // Developer by Tâm!
        //add text area
        JTextArea mainedit,area;
        mainedit = new JTextArea("  void setup(){\n" +
                                 "  }\n" +
                                 "  \n" +
                                 "  void loop(){\n"+
                                 "  \n" +
                                 "  }");
        
        JScrollPane panelScroller=new JScrollPane(mainedit);
        
        
        mainedit.setFont(new Font("SansSerif", Font.PLAIN, 26));
        mainedit.setEditable(true);
        mainedit.setBounds(50, 70, 100, 100);
        mainedit.setBackground(Color.WHITE);
        mainedit.setVisible(true);
        //add text area
        area = new JTextArea("\n    Author\n" +
                             "  15520755 - Dinh Duc Tam\n" +
                             "  15520533 - Tran Quang Nghi\n" +
                             "  Sources tham khao: javatpoint(dot)com\n" +
                             "  viettuts(dot)vn/java-awt\n");
        area.setBackground(Color.GREEN);
        area.setForeground(Color.black);
        area.setEditable(false);
        area.setBounds(30, 30, 300, 200);
        
        // Developer by Nghi!
        panelOne.add(verify,str1[1]);
        panelOne.add(upload,str1[2]);
        panelOne.add(newpage,str1[3]);
        panelOne.add(save,str1[4]);
        panelOne.add(open,str1[5]);
        
        panelZero.add(panelOne,BorderLayout.NORTH);
        panelZero.add(panelScroller, BorderLayout.CENTER);
        f.add(panelOne,BorderLayout.NORTH);
        f.add(mainedit,BorderLayout.CENTER);
        f.add(area,BorderLayout.SOUTH);
        
        
        //closing
        f.addWindowListener(new WindowAdapter() {
            @Override
            public void windowClosing(WindowEvent e) {
                f.dispose();
            }
        });
    }
    // Developer by Tâm!
    @Override
    public void actionPerformed(ActionEvent e) {
        if(e.getActionCommand().equals("New"))
        {
            //Creating an object of FileDialog
            bt1 subFrame1 = new bt1();
            
        }
        if(e.getActionCommand().equals("New Page"))
        {
            //Creating an object of FileDialog
            bt1 subFrame2 = new bt1();
            
        }
        //Developer by Nghi!
        if(e.getActionCommand().equals("Open"))
        {
            //Creating an object of FileDialog
            FileDialog fc;
            JFrame dial = new JFrame();
            fc = new FileDialog(dial, "Choose a file", FileDialog.LOAD);
            fc.setDirectory("D:\\");
            fc.setFile("*.java");
            fc.setVisible(true);
            String filename = fc.getFile();
            if (filename == null)
              System.out.println("You cancelled the choice");
            else
              System.out.println("You chose " + filename);

        }
        if(e.getActionCommand().equals("Save"))
        {
            
        }
        if(e.getActionCommand().equals("Quit"))
        {
            System.exit(0);
        }
        if(e.getActionCommand().equals("Verify"))
        {
            System.out.println("Verify pressed!");   
        }
        
        
    }
    @Override
    public void itemStateChanged(ItemEvent e) {

    }
    /**
     * @param args the command line arguments
     */
    public static void main(String args[]){  
        // TODO code application logic here
        bt1 bt1 = new bt1();
        //bt1 khong hien thi dung GUI.
        bt1 bt2 = new bt1();
        //bt2 hien thi dung GUI
    }
}

