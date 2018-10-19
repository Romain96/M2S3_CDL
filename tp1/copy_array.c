// copier le contenu d'un tableau dans un autre tableau
/*@
 requires \valid (t+(0..n-1));
 requires \valid (s+(0..n-1));
 requires n > 0;
 ensures \forall integer i; 0 <= i < n ==> s[i] == \old(s[i]);
 ensures \forall integer i; 0 <= i < n ==> t[i] == s[i];
 assigns t[0..n-1];
 */
void copy_array(int s[], int t[], int n)
{
	int i = 0;
	/*@
	 loop invariant \forall integer j; 0 <= j < i ==> s[j] == t[j];
	 loop invariant 0 <= i <= n;
	 loop variant n-i;
	 */
	while (i < n)
	{
		t[i] = s[i];
		i++;
	}
}
