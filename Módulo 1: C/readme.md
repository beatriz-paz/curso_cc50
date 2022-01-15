# Aula 1 

## Ambiente de desenvolvimento integrado: https://ide.cs50.io

> PRIMEIRO HELLO WORLD NA LINGUAGEM C:

_Nosso código-fonte foi escrito em caracteres que podemos ler, mas precisa ser compilado: convertido em código de máquina, padrões de zeros e uns que nosso computador possa entender diretamente._
  
![image](https://user-images.githubusercontent.com/75676327/148661642-58e968b5-5a9b-4394-b0f8-e49c81aa09cd.png)

> Para adicionar um input, precisamos importar outra biblioteca C para usar os comandos dela, nesse caso importamos "#include <cs50.h>":

![image](https://user-images.githubusercontent.com/75676327/148663358-b28d014b-b111-47c8-8436-742ef6d74a08.png)

> Simulando um ERRO:

![image](https://user-images.githubusercontent.com/75676327/148663922-1dc8450f-0df0-46fc-9848-d71994ec0a08.png)

> Verificando se o código está "bonito" com o comando STYLE50, e checando a funcionalidade do código com o comando CHECK50:

![image](https://user-images.githubusercontent.com/75676327/148687048-c700bb5d-7d74-458c-8fff-b2bacce05b05.png)

> Alguns comandos do terminal:

![image](https://user-images.githubusercontent.com/75676327/148697656-84019f8e-98fb-44c4-a2e8-024860ae1218.png)

1. **Tipos e Códigos de Formato:**

Existem muitos tipos de dados que podemos usar para nossas variáveis, que indicam ao computador que tipo de dados eles representam:

- bool: uma expressão booleana verdadeira ou falsa
- char: um único caractere ASCII como a ou 2
- double: um valor de vírgula flutuante com mais dígitos do que um float
- float: um valor de vírgula flutuante ou número real com um valor decimal
- int: inteiros até um certo tamanho ou número de bits
- long: inteiros com mais bits, para que possam contar mais do que um int
- string: uma linha de caracteres

E a biblioteca CS50 tem funções correspondentes para obter entrada de vários tipos:

- get_char 
- get_double 
- get_float 
- get_int 
- get_long 
- get_string
 
Para *printf*, também, existem diferentes marcadores de posição para cada tipo:

- %c: para caracteres
- %f: para flutuadores, duplos
- %i: para ints
- %li: para longos
- %s: para strings

