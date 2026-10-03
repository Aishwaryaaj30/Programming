class node
{
    public int data;
    public node next;
    public node prev;

    node(int iNo)
    {
        this.data = iNo;
        this.next = null;
        this.prev = null;
    }
}

class DoublyLL
{
    private node first;
    private int iCount;

    public DoublyLL()
    {
        this.first = null;
        this.iCount = 0;  
    }

    public void Display()
    {
        node temp = null;

        temp = first;

        System.out.print("\nNULL <=> ");

        while(temp != null)
        {
            System.out.print("| " + temp.data + " | <=>");
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
        node newn = null;

        newn = new node(iNo);

        if(first == null)
        {
            first = newn;
        }
        else
        {
            newn.next = first;
            first.prev = newn;
            first = newn;
        }

        iCount++;
    }

    public void InsertLast(int iNo)
    {
        node newn = null;
        node temp = null;

        newn = new node(iNo);
        temp = first;

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
            newn.prev = temp;
        }

        iCount++;
    }

    public void InsertAtPos(int iNo, int iPos)
    {
        node newn = null;
        node temp = null;

        int iCnt = 0;

        if((iPos < 1) || (iPos > iCount + 1))
        {
            return;
        }

        if(iPos == 1)
        {
            InsertFirst(iNo);
        }
        else if(iPos == iCount + 1)
        {
            InsertLast(iNo);
        }
        else
        {
            newn = new node(iNo);

            temp = first;

            for(iCnt = 1; iCnt < iPos - 1; iCnt++)
            {
                temp = temp.next;
            }
            
            newn.next = temp.next;
            newn.next.prev = newn;

            temp.next = newn;
            newn.prev = temp;
        }

        iCount++;
    }

    public void DeleteFirst()
    {
        if(first == null)
        {
            return;
        }
        else if(first.next == null)
        {
            first = null;
        }
        else
        {
            first = first.next;
            first.prev = null;
        }

        iCount--;
    }

    public void DeleteLast()
    {
        node temp = null;

        temp = first;

        if(first == null)
        {
            return;
        }
        else if(first.next == null)
        {
            first = null;
        }
        else
        {
            while(temp.next.next != null)
            {
                temp = temp.next;
            }

            temp.next = null;
        }

        iCount--;
    }

    public void DeleteAtPos(int iPos)
    {
        node temp = null;

        int iCnt = 0;

        if((iPos < 1) || (iPos > iCount))
        {
            return;
        }

        if(iPos == 1)
        {
            DeleteFirst();
        }
        else if(iPos == iCount)
        {
            DeleteLast();
        }
        else
        {
            temp = first;

            for(iCnt = 1; iCnt < iPos - 1; iCnt++)
            {
                temp = temp.next;
            }
            
            temp.next = temp.next.next;
            temp.next.prev = temp; 
        }

        iCount--;
    }
}

class program458_DLLL
{
    public static void main(String A[])
    {
        DoublyLL dobj = new DoublyLL();
        int iRet = 0;

        dobj.InsertFirst(51);
        dobj.InsertFirst(21);
        dobj.InsertFirst(11);

        dobj.InsertLast(101);
        dobj.InsertLast(111);
        dobj.InsertLast(121);

        dobj.Display();
        iRet = dobj.Count();
        System.out.println("Count of elements is : " + iRet);

        dobj.DeleteFirst();
        dobj.Display();
        iRet = dobj.Count();
        System.out.println("Count of elements is : " + iRet);

        dobj.DeleteLast();
        dobj.Display();
        iRet = dobj.Count();
        System.out.println("Count of elements is : " + iRet);

        dobj.InsertAtPos(105, 4);
        dobj.Display();
        iRet = dobj.Count();
        System.out.println("Count of elements is : " + iRet);

        dobj.DeleteAtPos(4);
        dobj.Display();
        iRet = dobj.Count();
        System.out.println("Count of elements is : " + iRet);
    }
}
