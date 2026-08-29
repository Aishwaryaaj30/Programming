import java.io.*;
import java.net.*;

class A126_1_ArithmeticServer
{
    public static void main(String A[])
    {
        try
        {
            ServerSocket serversocket = new ServerSocket(9000);

            System.out.println("-------------------------------------------------------");
            System.out.println("-------------- Marvellous Server Started --------------");
            System.out.println("-------------------------------------------------------");

            // Loop for multiple client requests
            while(true)
            {
                System.out.println("Server is waiting for client request");

                Socket clientsocket = serversocket.accept();

                System.out.println("Client connected successfully!");

                // Thread gets created for client
                Thread t = new Thread(() -> HandleClientRequest(clientsocket));

                t.start();
            } // End of while
        }
        catch(Exception e)
        {
            System.out.println("Exception occured : " + e);
        }
    } // End of main

    public static void HandleClientRequest(Socket socket)
    {
        try
        {
            DataInputStream dis = new DataInputStream(socket.getInputStream());

            DataOutputStream dos = new DataOutputStream(socket.getOutputStream());

            dos.writeUTF("Connected to Marvellous server");

            while(true)
            {
                String command = dis.readUTF();
                
                System.out.println("Command received from client : " + command);

                String parts[] = command.split(" ");

                String operation = parts[0].toUpperCase();

                if(operation.equals("Quit"))
                {
                    dos.writeUTF("Disconnected from server");
                    break;
                }

                if(parts.length != 3)
                {
                    dos.writeUTF("Invalid command format");
                    
                    continue;
                }

                Double no1 = Double.parseDouble(parts[1]);
                Double no2 = Double.parseDouble(parts[2]);

                Double result = 0.0;

                if(operation.equals("ADD"))
                {
                    result = no1 + no2;

                    dos.writeUTF("Addition is : " + result);
                }
                else if(operation.equals("SUB"))
                {
                    result = no1 - no2;

                    dos.writeUTF("Subtraction is : " + result);
                }
                else if(operation.equals("MULT"))
                {
                    result = no1 * no2;

                    dos.writeUTF("Multiplication is : " + result);
                }
                else if(operation.equals("DIV"))
                {
                    result = no1 / no2;

                    dos.writeUTF("Division is : " + result);
                }
                else if(operation.equals("MOD"))
                {
                    result = no1 % no2;

                    dos.writeUTF("Modulas is : " + result);
                }
                else if(operation.equals("MAX"))
                {
                    if(no1 > no2)
                    {
                        result = no1;
                    }
                    else
                    {
                        result = no2;
                    }

                    dos.writeUTF("Maximum is : " + result);
                }
                else if(operation.equals("MIN"))
                {
                    if(no1 > no2)
                    {
                        result = no2;
                    }
                    else
                    {
                        result = no1;
                    }

                    dos.writeUTF("Minimum is : " + result);
                }
                else
                {
                    dos.writeUTF("Invalid operation");
                }
            } // End of while

            socket.close();

            System.out.println("Client disconnected");
        }
        catch(Exception e)
        {
            System.out.println("Exception occured : " + e);
        }
    }
} // End of class