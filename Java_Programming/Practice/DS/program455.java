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
        node temp = first;

        while(temp != null)
        {
            System.out.print("| " + temp.data + " | -> ");
            temp = temp.next;
        }

        System.out.println("NULL");
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
        node temp = first;
        if(first == null)
        {
            first = newn;
        }
        else
        {
            while(temp.next != null)
            {
                temp = temp.next;
            }

            temp.next = newn;
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

class program455
{
    public static void main(String A[])
    {
        SinglyLL sobj = new SinglyLL();
        int iRet = 0;

        sobj.InsertFirst(21);
        sobj.InsertFirst(11);

        sobj.InsertLast(51);
        sobj.InsertLast(101);

        sobj.Display();
        iRet = sobj.Count();
        System.out.println("Count of elements is : " + iRet);
    }
}