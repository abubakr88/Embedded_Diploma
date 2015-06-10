int get_npr(int a,int b);
int get_ncr(int c,int d);

int main(void) {
	int n,r,nr,npr=1,ncr=1;
	do
	   {
	printf("n = ");
	scanf("%d",&n);
	printf("\nr= ");
	scanf("%d",&r);
	   }
	while ( n < r);
	nr=n-r;
	npr= get_npr(n,nr);
	ncr=get_ncr(npr,r);
	printf("npr = %d \n",npr);
	printf("ncr = %d \n",ncr);

}
