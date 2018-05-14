##########################################
# QUESTÃO 1 DO LABORATÓRIO 3
##########################################

Não foi necessário sobrecarregar o operador de inserção na classe Fruta e nas seguintes, pois isso já foi definido na classe base, "Produto". As classes derivadas só precisaram definir como funcionaria a impressão para cada uma delas, através do comando "print" definido previamente em Produto.

O destrutor da classe Produto foi declarado como virtual para que ele pudesse ser redefinido como necessário por suas classes derivadas, no caso Fruta, Bebida ou Roupa,
sem causar conflitos entre elas.
