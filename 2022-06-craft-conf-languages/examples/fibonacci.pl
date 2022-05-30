sub fib {
    my $x = shift(@_);
    my $a = 0;
    my $b = 1;
    foreach (0..$x - 1) {
        my $next = $a + $b;
        $a = $b;
        $b = $next;
    }
    return $a;
}

print(fib(10));
print "\n"
