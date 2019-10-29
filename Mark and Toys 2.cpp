 #include<iostream>
 #include<algorithm>
 using namespace std;
 int main()

 {
 
 long long int n, k, c = 0, s = 0, i;
cin >> n >> k;
long long int ar[n];
for (i = 0; i < n; i++)
  cin >> ar[i];
sort(ar, ar + n);
i = 0;
while (s <= k && i < n) {
  s = s + ar[i];
  if (s <= k) {
    c = c + 1;
  }
  i = i + 1;
}
cout << c;
 }
