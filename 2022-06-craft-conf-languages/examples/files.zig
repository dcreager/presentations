const std = @import("std");

fn save_file(filename: []const u8) !void {
    const cwd = std.fs.cwd();
    var fp = try cwd.createFile(filename, .{});
    defer fp.close();
    _ = try fp.write("lots of interesting data");
}

pub fn main() !void {
    try save_file("out.dat");
}
