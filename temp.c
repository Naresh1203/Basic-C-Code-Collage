int fac(int k);

int main() {
	int k;
  int result = fac(k);
  printf("%d", result);
  return 0;
}

int fac(int k) {
  if (k > 0) {
    return k * fac(k - 1);
  } else {
    return 0;
  }
} 
