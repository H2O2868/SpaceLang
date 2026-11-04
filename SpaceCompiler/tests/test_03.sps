// test03.space
if (1) {
    if (0) {
        print("never");
    } else {
        while (x < 3) {
            x = x + 1;
            if (x == 2) {
                print("x is two");
            }
        }
    }
}
{ print("bare block"); }   // block как отдельный statement
if (x > 0) { }             // пустой блок — тоже валиден по грамматике