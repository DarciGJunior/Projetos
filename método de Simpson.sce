//--------------------------------------------------------------------//
//Regra 1/3 de Simpson                                                //
//Objetivo: Integrar numericamente uma funcao                         //
//Autor: Darci Junior                                                 //
//data: 26/02/16                                                      //
//--------------------------------------------------------------------//

clear //limpa a memoria
close //fecha janelas
clc //limpa a janela do prompt

t = input('qual o valor inicial do intervalo? to=?');
y = input('qual o valor inicial do intervalo? y0=?');
delta = input('qual o valor inicial do intervalo? delta=?');
tf = input('qual o valor final do intervalo? tf=?');

function dydt = funcf(t,y)
    dydt = t+y;
endfunction

while (t<tf)
    
    y=y+funcf(t,y)*delta
    t=t+delta
    
    disp(y)
end