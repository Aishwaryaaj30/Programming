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

class program454
{
    public static void main(String A[])
    {
        SinglyLL obj = new SinglyLL();
        int iRet = 0;

        obj.InsertFirst(21);
        obj.InsertFirst(11);

        obj.InsertLast(51);
        obj.InsertLast(101);

        obj.Display();
        iRet = obj.Count();
        System.out.println("Count of elements is : " + iRet);
    }
}