// test02.space — проверка приоритетов через структуры дерева
a = 2 + 3 * 4;          // MultiplicativeExpr внутри AdditiveExpr: 14, а не 20
b = (2 + 3) * 4;        // Parenthesized меняет порядок: 20
c = -a + 10;            // UnaryMinus имеет приоритет выше аддитивного: 4
d = 1 < 2 && 3 < 4;     // LogicalExpr сверху, Relationa внутри: true
e = 10 - 2 - 3;         // левоассоциативность: (10 - 2) - 3 = 5, не 11
f = 10 / 2 / 5;         // тоже левоассоциативность: 1
print(a); print(b); print(c); print(d); print(e); print(f);