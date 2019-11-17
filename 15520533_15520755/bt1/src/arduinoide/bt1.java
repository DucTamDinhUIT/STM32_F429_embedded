/*
Author
15520755 - Dinh Duc Tam
115520533 - Tran Quang Nghi
Sources tham khao: javatpoint(dot)com
 */
package arduinoide;
import static com.sun.java.accessibility.util.AWTEventMonitor.addWindowListener;
import java.awt.*;
import java.awt.event.*;  


public class bt1 implements ActionListener{
    bt1() {
        Frame f = new Frame();
        f.setTitle("15520755 - 15520533 | Arduin IDE");
        f.setBackground(Color.gray);
        
        Button verify = new Button("Verify");
        verify.setBounds(00, 50, 80, 30);
        Button upload = new Button("Upload");
        upload.setBounds(81, 50, 80, 30);
        Button newpage = new Button("New Page");
        newpage.setBounds(161, 50, 80, 30);
        Button save = new Button("Save");
        save.setBounds(241, 50, 80, 30);
        Button open = new Button("Open");
        open.setBounds(321, 50, 80, 30);
        
        f.add(verify);
        f.add(upload);
        f.add(newpage);
        f.add(save);
        f.add(open);
        
        //menu items - start 
        //file
        MenuBar mb=new MenuBar();  
        Menu file=new Menu("File");  
        Menu example=new Menu("Examples");  
        MenuItem i1=new MenuItem("New");  
        MenuItem i2=new MenuItem("Open");  
        MenuItem i3=new MenuItem("Save");  
        MenuItem i4=new MenuItem("Close");  
        MenuItem i5=new MenuItem("Quit"); 
        MenuItem i6=new MenuItem("Digital");
        MenuItem i7=new MenuItem("Analog");
        file.add(i1);  
        file.add(i2);  
        file.add(i3);
        file.add(i4);
        file.add(i5);
        example.add(i6);  
        example.add(i7);  
        file.add(example);  
        //edit
        Menu edit=new Menu("Edit");  
        MenuItem j1=new MenuItem("Undo");  
        MenuItem j2=new MenuItem("Redo");  
        MenuItem j3=new MenuItem("Cut");  
        MenuItem j4=new MenuItem("Copy");  
        MenuItem j5=new MenuItem("Paste"); 
        MenuItem j6=new MenuItem("Comment");
        MenuItem j7=new MenuItem("Find");
        MenuItem j8=new MenuItem("Replace");
        MenuItem j9=new MenuItem("Up/Down Size");
        edit.add(j1);  
        edit.add(j2);  
        edit.add(j3);
        edit.add(j4);
        edit.add(j5);
        edit.add(j6);
        edit.add(j7);
        edit.add(j8);
        edit.add(j9);
        //sketch
        Menu sketch=new Menu("Sketch");  
        Menu includelib=new Menu("Include Library"); 
        MenuItem k1=new MenuItem("Verify/Complie");  
        MenuItem k2=new MenuItem("Upload");  
        MenuItem k3=new MenuItem("Upload Using Programer");  
        MenuItem k4=new MenuItem("Export anything");  
        MenuItem k5=new MenuItem("Show"); 
        MenuItem k6=new MenuItem("Clean ROM");
        MenuItem k7=new MenuItem("Add File");
        MenuItem k8=new MenuItem("Lib 1");
        MenuItem k9=new MenuItem("Lib 2");
        
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
        
        //tools
        Menu tools=new Menu("Tools");  
        Menu board=new Menu("Boards");
        Menu port=new Menu("Port COM"); 
        MenuItem l1=new MenuItem("Auto format");  
        MenuItem l2=new MenuItem("Fix endcode & Reload");  
        MenuItem l3=new MenuItem("Serial Moniter");  
        MenuItem l4=new MenuItem("Serial Plotter");  
        MenuItem l5=new MenuItem("Update Firmware"); 
        MenuItem l6=new MenuItem("COM 1");
        MenuItem l7=new MenuItem("COM 2");
        MenuItem l8=new MenuItem("Arduino Uno");
        MenuItem l9=new MenuItem("Arduino Mega");
        MenuItem l10=new MenuItem("Arduino Nano");
        MenuItem l11=new MenuItem("Get Board info");
               
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
        
        //help
        Menu help=new Menu("Tools");  
        MenuItem h1=new MenuItem("Getting started");  
        MenuItem h2=new MenuItem("Environment");  
        MenuItem h3=new MenuItem("Troubleshoting");  
        MenuItem h4=new MenuItem("Reference");  
        MenuItem h5=new MenuItem("Help custom"); 
        MenuItem h6=new MenuItem("Find in Reference");
        MenuItem h7=new MenuItem("Ask question");
        MenuItem h8=new MenuItem("Visit us");
        MenuItem h9=new MenuItem("Abort Arduino IDE");
               
        help.add(h1);  
        help.add(h2);  
        help.add(h3);
        help.add(h4);
        help.add(h5);
        help.add(h6);
        help.add(h7);
        help.add(h8);
        help.add(h9);
        
        mb.add(edit);
        mb.add(file);
        mb.add(sketch);
        mb.add(tools);
        mb.add(help);
        
        
        //menu items - end/
        
        
        f.setMenuBar(mb);
        f.setSize(600, 400);
        f.setLayout(null);
        f.setVisible(true);
        
        //add panel
        Panel panel = new Panel();
        panel.setBounds(00, 80, 500, 400);
        panel.setBackground(Color.white);
        f.add(panel);

        //add text area
        TextArea area = new TextArea("Author\n" +
                                     "15520755 - Dinh Duc Tam\n" +
                                     "115520533 - Tran Quang Nghi\n" +
                                     "Sources tham khao: javatpoint(dot)com\n" +
                                     "viettuts(dot)vn/java-awt");
        area.setBounds(00, 100, 400, 300);
        area.setBackground(Color.CYAN);
        panel.add(area);

        
        //closing
        f.addWindowListener(new WindowAdapter() {
            @Override
            public void windowClosing(WindowEvent e) {
                f.dispose();
            }
        });
    }
    @Override
    public void actionPerformed(ActionEvent e) {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }

    
    /**
     * @param args the command line arguments
     */
    public static void main(String args[]){  
         // TODO code application logic here
        new bt1();
    }
}

