//--------------------------------------------------------------------//
//Método de Runge-Kutta 4a ordem                                             //
//Objetivo:                                                           //
//Autor: Darci Junior                                                 //
//data: 18/03/16                                                      //
//--------------------------------------------------------------------//

clear //limpa a memoria
close //fecha janelas
clc //limpa a janela do prompt

t0 = input('qual o valor inicial do intervalo? to=?');
y0 = input('qual o valor inicial do intervalo? y0=?');
delta = input('qual o valor inicial do intervalo? delta=?');
tf = input('qual o valor final do intervalo? tf=?');

function dydt = funcf(t,y)
    dydt = t+y;
endfunction

i=1
t(i)= t0
y(i)=y0

while (t(i)<tf)
    
    k1 = funcf(t(i),y(i))
    o = t(i)+delta/2
    p=y(i)+((delta*k1)/2)
    
    k2=funcf(o,p)
    p=y(i)+((k2*delta)/2)
    
    k3=funcf(o,p)
    p=y(i)+(k3*delta)
    
    t(i+1)=t(i) + delta
    k4=funcf(t(i+1),p)
    
   y(i+1)=y(i)+((delta/6)*(k1+(2*k2)+(2*k3)+k4))  
        i = i + 1
    
end

  disp(y(i))

tg= linspace(t0,tf,0.1)

function yg= fplot(t)
    yg= (2*exp(t))-t-1
endfunction

plot (t,y,'+')
plot (tg,fplot,'r')