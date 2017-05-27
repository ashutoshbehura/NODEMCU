
import java.io.BufferedReader;
import java.io.DataInputStream;
import java.io.IOException;
import java.io.InputStreamReader;
import java.net.ServerSocket;
import java.net.Socket;
import java.util.Arrays;

public class Server {

    public static void main(String[] args) throws IOException {
    	System.out.println("start");
        ServerSocket ss=new ServerSocket(5000);
        try{
        while(true){
            Socket s=ss.accept();
            DataInputStream din=new DataInputStream(s.getInputStream());
            //System.out.println((String)din.readUTF());
            BufferedReader reader=new BufferedReader(new InputStreamReader(din));
            
            String msg=reader.readLine();
            
            System.out.println("entire string "+msg);
            
           System.out.println(msg.length());
        }}catch(Exception e){System.out.println(e);}
    }
}
