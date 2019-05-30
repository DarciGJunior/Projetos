//--------------------------------------------------------------------//
//Modelagem de poluentes em um rio                                             //
//Objetivo:                                                           //
//Autor: Darci Junior                                                 //
//data: 21/09/16                                                      //
//--------------------------------------------------------------------//

clear //limpa a memoria
close //fecha janelas
clc //limpa a janela do prompt

// v é o volume do tanque em que as bactérias fazem a decomposição da matéria orgânica


function [func] = funcf(x,y)
    q=
    v=
    func(1) = (1.3/v)*x*y-(10^-5)*x-(q/v)*x;
    func(2) = (10^-2)*q-(0.1/v)*x*y-(q/v)*y;
    
endfunction

t= 0:.1:10;
x0=
y0=

// w(1) é a saída de x, e w(2) é a saída de y

w=ode (x0,y0,t, funcf(x,y));
