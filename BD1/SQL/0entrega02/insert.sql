insert into medicacao (cod_medicamento, preco, nome_med)
VALUES(s_med.nextval, 20.20, 'prednisona');

insert into medicacao (cod_medicamento, preco, nome_med)
VALUES(s_med.nextval, 5.60, 'vetmax');

insert into medicacao (cod_medicamento, preco, nome_med)
VALUES(s_med.nextval, 75.60, 'ciprovet');
-----------------

insert into pessoa (id_pessoa, nome, endereco)
VALUES(s_pessoa.nextval, 'marcelle', 'av. aveiro, 44');

insert into pessoa (id_pessoa, nome, endereco)
VALUES(s_pessoa.nextval, 'lara', 'rua rio grande, 432');

insert into pessoa (id_pessoa, nome, endereco)
VALUES(s_pessoa.nextval, 'aline', 'rua 3 de abril, 61');

-----------------

insert into animal(id_animal,nome, tamanho, raca, id_pessoa) 
VALUES(s_animal.nextval, 'léia', 'medio', 'vira lata', '100');

insert into animal(id_animal,nome, tamanho, raca, id_pessoa) 
VALUES(s_animal.nextval, 'atlas', 'grande', 'dogue alemao', '101');

insert into animal(id_animal,nome, tamanho, raca, id_pessoa) 
VALUES(s_animal.nextval, 'lulu', 'medio', 'collie', '102');


-----------------

insert into funcionario_banho(id_funcionario, nome)
VALUES(s_func.nextval, 'juliane');

insert into funcionario_banho(id_funcionario, nome)
VALUES(s_func.nextval, 'paula');

----------------

insert into veterinario (id_veterinario, nome, especializacao)
VALUES(S_VET.nextval, 'ana', 'geral');

insert into veterinario (id_veterinario, nome, especializacao)
VALUES(S_VET.nextval, 'guilherme', 'oftalmo');

----------------

insert into banho(data_banho,id_animal,id_funcionario)
VALUES(to_date('19/05/22','dd/mm/yy'), 200, 450);

insert into banho(data_banho,id_animal,id_funcionario)
VALUES(to_date('01/06/22','dd/mm/yy'), 200, 450);

insert into banho(data_banho,id_animal,id_funcionario)
VALUES(to_date('03/03/21','dd/mm/yy'), 201, 451);

insert into banho(data_banho,id_animal,id_funcionario)
VALUES(to_date('05/04/22','dd/mm/yy'), 203, 450);

insert into banho(data_banho,id_animal,id_funcionario)
VALUES(to_date('05/05/22','dd/mm/yy'), 203, 451);

insert into banho(data_banho,id_animal,id_funcionario)
VALUES(to_date('05/06/22','dd/mm/yy'), 203, 451);

----------------

-- consulta n tem valor
insert into consulta(data_consulta, id_animal, id_veterinario)
VALUES(to_date('02/05/22','dd/mm/yy'),203, 401);

insert into consulta(data_consulta, id_animal, id_veterinario)
VALUES(to_date('03/07/22','dd/mm/yy'),200, 400);

----------------

insert into prescricao(cod_medicamento, data_consulta, id_animal)
VALUES(502, to_date('02/05/22','dd/mm/yy'), 203);

insert into prescricao(cod_medicamento, data_consulta, id_animal)
VALUES(501, to_date('03/07/22','dd/mm/yy'), 200);
----------------------
