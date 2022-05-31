def save_file(filename):
    with open(filename, "w") as fp:
        fp.write("lots of interesting data")

save_file("out.dat")
