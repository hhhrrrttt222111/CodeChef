import java.io.DataInputStream;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.Reader;
import java.lang.reflect.Array;
import java.util.*;


class Main {

    private class Node
    {
        int data;
        ArrayList<Node> children= new ArrayList<>();
    }
    private Node root;
    public  Main() throws IOException {
       this.root= construct(null,-1);
    }

    private Node construct(Node node,int ith) throws IOException {
        Reader sc=new Reader();
        if(node==null)
        {
            System.out.println("Enter data for root node");
        }
        else
        {
            System.out.println("Enter data for "+ith+"child of "+node);
        }
        int item=sc.nextInt();
        Node nn= new Node();
        nn.data=item;
        System.out.println("Enter number of children");
        int noc=sc.nextInt();
        for(int i=0;i<noc;i++)
        {
            Node child=construct(nn,i);
            nn.children.add(child);
        }
        return nn;
    }
    public void display() throws IOException {
        displayTree(this.root);

    }

    private void displayTree(Node node) throws IOException{
        String str=node.data+"->";
        for(Node child:node.children)
        {
            str+=child.data+",";
        }
        str+=".";
        System.out.println(str);
        for(int i=0;i<node.children.size();i++)
        {
            displayTree(node.children.get(i));
        }
    }

    public static void main (String[] args) throws IOException {
        Reader sc = new Reader();
        int q=sc.nextInt();
        while(q-->0)
        {
            int s=sc.nextInt();
            int w1=sc.nextInt();
            int w2=sc.nextInt();
            int w3=sc.nextInt();
            int a[] = new int[3];
            a[0]=w1;
            a[1]=w2;
            a[2]=w3;
            int sum=0;
            int c=0;
            for(int i=0;i<3;i++)
            {
                sum=sum+a[i];
                if(sum>s)
                {
                    c++;
                    sum=0;
                    i=i-1;

                }
                else if(sum==s)
                {
                    c++;
                    sum=0;

                }
                else if(i==2&&a[i]<s)
                {
                    c++;
                }
            }
            System.out.println(c);

        }
    }


    static class Reader
    {
        final private int BUFFER_SIZE = 1 << 16;
        private DataInputStream din;
        private byte[] buffer;
        private int bufferPointer, bytesRead;

        public Reader()
        {
            din = new DataInputStream(System.in);
            buffer = new byte[BUFFER_SIZE];
            bufferPointer = bytesRead = 0;
        }

        public Reader(String file_name) throws IOException
        {
            din = new DataInputStream(new FileInputStream(file_name));
            buffer = new byte[BUFFER_SIZE];
            bufferPointer = bytesRead = 0;
        }

        public String readLine() throws IOException
        {
            byte[] buf = new byte[64]; // line length
            int cnt = 0, c;
            while ((c = read()) != -1)
            {
                if (c == '\n')
                    break;
                buf[cnt++] = (byte) c;
            }
            return new String(buf, 0, cnt);
        }

        public int nextInt() throws IOException
        {
            int ret = 0;
            byte c = read();
            while (c <= ' ')
                c = read();
            boolean neg = (c == '-');
            if (neg)
                c = read();
            do
            {
                ret = ret * 10 + c - '0';
            }  while ((c = read()) >= '0' && c <= '9');

            if (neg)
                return -ret;
            return ret;
        }

        public long nextLong() throws IOException
        {
            long ret = 0;
            byte c = read();
            while (c <= ' ')
                c = read();
            boolean neg = (c == '-');
            if (neg)
                c = read();
            do {
                ret = ret * 10 + c - '0';
            }
            while ((c = read()) >= '0' && c <= '9');
            if (neg)
                return -ret;
            return ret;
        }

        public double nextDouble() throws IOException
        {
            double ret = 0, div = 1;
            byte c = read();
            while (c <= ' ')
                c = read();
            boolean neg = (c == '-');
            if (neg)
                c = read();

            do {
                ret = ret * 10 + c - '0';
            }
            while ((c = read()) >= '0' && c <= '9');

            if (c == '.')
            {
                while ((c = read()) >= '0' && c <= '9')
                {
                    ret += (c - '0') / (div *= 10);
                }
            }

            if (neg)
                return -ret;
            return ret;
        }

        private void fillBuffer() throws IOException
        {
            bytesRead = din.read(buffer, bufferPointer = 0, BUFFER_SIZE);
            if (bytesRead == -1)
                buffer[0] = -1;
        }

        private byte read() throws IOException
        {
            if (bufferPointer == bytesRead)
                fillBuffer();
            return buffer[bufferPointer++];
        }

        public void close() throws IOException
        {
            if (din == null)
                return;
            din.close();
        }
    }

}