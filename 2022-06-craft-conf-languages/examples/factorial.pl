sub factorial {
    my $x = shift(@_);
    my $result = 1;
    foreach (1..$x) {
        $result *= $_;
    }
    return $result;
}

print(factorial(10));
print "\n"
