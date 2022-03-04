program Electrostatica;
uses crt;
var
F, q1, q2, r: real;
begin
clrscr;
       write('Carga1: ');
       read(q1);
       write('Carga2: ');
       read(q2);
       write('Distancia entra as particulas: ');
       F := 8.99*10 * q1*q2/(r*r);
readkey;
end.
