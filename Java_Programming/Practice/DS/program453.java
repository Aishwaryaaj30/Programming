class node
{
    public int data;
    public node next;

    node(int iNo)
    {
        this.data = iNo;
        this.next = null;
    }
}

class SinglyLL
{
    private node first;
    private int iCount;

    public SinglyLL()
    {
        System.out.println("Inside Constructor");
        this.first = null;
        this.iCount = 0;  
    }

    public void Display()
    {
 
    }

    public int Count()
    {
        return iCount;
    }

    public void InsertFirst(int iNo)
    {
        node newn = new node(iNo);

        if(first == null)
        {
            first = newn;
        }
        else
        {
            newn.next = first;
            first = newn;
        }

        iCount++;
    }

    public void InsertLast(int iNo)
    {
        node newn = new node(iNo);
        
        if(first == null)
        {
            first = newn;
        }
        else
        {
    
        }

        iCount++;
    }

    public void InsertAtPos(int iNo, int iPos)
    {}

    public void DeleteFirst()
    {}

    public void DeleteLast()
    {}

    public void DeleteAtPos(int iPos)
    {}
}

class program453
{
    public static void main(String A[])
    {
        SinglyLL obj = new SinglyLL();

        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);
    }
}