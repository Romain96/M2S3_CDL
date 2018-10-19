// recherche l'indice du minimum dans un tableau
/*@
 requires \valid (t+(..n-1));
 requires n > 0;
 assigns \nothing;
 ensures \result <==> (\forall integer i; 0 <= i < n ==> t[\result] <= t[i]);
 */
int min_index_array(int t[], int n)
{
	int i = 0;
	int index = 0;

	/*@
	 loop invariant \forall integer j; 0 <= j < i ==> t[index] <= t[j];
	 loop invariant 0 <= i <= n;
	 loop variant n-i;
	 */
	while (i < n)
	{
		if (t[i] < t[index])
		{
			index = i;
		}
		
		i++;
	}

	return index;
}
