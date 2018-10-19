// tester si tous les éléments d'un tableau sont nuls
/*@
  requires \valid (t+(0..n-1));
  requires n >= 0;
  ensures \result <==> (\forall int i; 0 <= i < n ==> t[i] == 0);
*/
int all_zeros(int t[], int n)
{
	int i = 0;
	/*@
	  loop invariant \forall integer j; 0 <= j < i ==> t[j] == 0;
	  loop invariant 0 <= i <= n;
	  loop variant n-i;
	 */
	while (i < n && t[i] == 0)
	{
		i++;
	}

	return i == n;
}
