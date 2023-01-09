int full_adder_c(int a, int b ,int c) {
     return (a & b) | (b & c) | (a & c);
}

int full_adder_x(int a, int b, int c) {
     return a ^ b ^ c;
}
