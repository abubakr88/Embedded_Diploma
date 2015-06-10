int get_fact(int x);
int get_npr(int a,int b)
		{
	int npr=1,factn=1,factnr=1;
	factn =  get_fact(a);
	factnr = get_fact(b);
	npr=factn/factnr;
	 return npr;
		}

int get_ncr(int c,int d)
		{
	int factr=1,ncr=1;
	factr =  get_fact(d);
    ncr = c/factr;
	 return ncr;
		}

int get_fact(int x)
		{
	int i=1,fact=1;
	 for (i=1;i<=x;i++)
	 		    	{
	 		    	fact *= i;
	 		    	}
	 return fact;
		}
