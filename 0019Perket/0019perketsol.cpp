#include <bits/stdc++.h>
using namespace std;

#define MAXN 10

int n, s[MAXN], b[MAXN], best = 1000000000;

void recur(int i, int sourness, int bitterness) {
  if (i == n) {
    if (bitterness > 0 && abs(sourness-bitterness) < best)
      best = abs(sourness-bitterness);
  } else {
    recur(i + 1, sourness, bitterness);               // กรณีไม่เลือกส่วนผสมชนิดที่ i
    recur(i + 1, sourness * s[i], bitterness + b[i]); // กรณีที่เลือกส่วนผสมชนิดที่ i
  }
}

int main() {
  cin>>n;
  for (int i = 0; i < n; ++i)
    cin>>s[i]>>b[i];

  recur(0, 1, 0);

  cout<<best;
  return 0;
}