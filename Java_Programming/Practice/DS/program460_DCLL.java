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

class DoublyCLL
{
    private node first;
    private node last;
    private int iCount;

    public DoublyCLL()
    {
        this.first = null;
        this.last = null;
        this.iCount = 0;  
    }

    public void Display()
    {
        node temp = null;

        temp = first;

        if(first == null && last == null)
        {
            return;
        }

        System.out.print("\n <=> ");

        do
        {
            System.out.print("| " + temp.data + " | <=>");
            temp = temp.next;
        }while(temp != last.next);

        System.out.println();
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
            last = newn;
        }
        else
        {
            newn.next = first;
            first.prev = newn;
            first = newn;
        }

        last.next = first;
        first.prev = last;

        iCount++;
    }

    public void InsertLast(int iNo)
    {
        node newn = null;

        newn = new node(iNo);

        if(first == null)
        {
            first = newn;
            last = newn;
        }
        else
        {
            last.next = newn;
            newn.prev = last;
            last = newn;
        }

        last.next = first;
        first.prev = last;

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
        if(first == null && last == null)
        {
            return;
        }
        else if(first == last)
        {
            first = null;
            last = null;
        }
        else
        {
            first = first.next;
            
            last.next = first;
            first.prev = last;
        }

        iCount--;
    }

    public void DeleteLast()
    {
        if(first == null)
        {
            return;
        }
        else if(first == last)
        {
            first = null;
        }
        else
        {
            last = last.prev;

            last.next = first;
            first.prev = last;
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

class program460_DCLL
{
    public static void main(String A[])
    {
        DoublyCLL dobj = new DoublyCLL();
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
