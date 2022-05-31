public class ParseDigit {
    public static int parseDigit(char ch)
            throws NumberFormatException {
        if (ch >= '0' && ch <= '9') {
            return ch - '0';
        }
        throw new NumberFormatException();
    }
}
