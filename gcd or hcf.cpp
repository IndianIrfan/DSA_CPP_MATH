// platform - coding ninjas
//link - https://www.codingninjas.com/studio/problems/hcf-and-lcm_840448?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf
// concept - gcd or hcf
int calcGCD(int n, int m){
  while (n > 0 && m > 0) {
    if(n>m)
    n=n%m;
    else
    m=m%n;
  }
  if(n==0)return m;
  return n;
}