insert into medicacao (cod_medicamento, preco, nome_med)
VALUES(s_med.nextval, 20.20, 'pred');

insert into pessoa (id_pessoa, nome, endereco)
VALUES(s_pessoa.nextval, 'marcelle', 'aveiro');

insert into animal(id_animal,nome, tamanho,raca, id_pessoa) 
VALUES(s_animal.nextval, 'léia', 'medio', 'vira lata', '101');

insert into funcionario_banho(id_funcionario, nome)
VALUES(s_func.nextval, 'juliane');

insert into veterinario (id_veterinario, nome, especializacao)
VALUES(S_VET.nextval, 'ana', 'geral');

insert into banho(data_banho,id_animal,id_funcionario)
VALUES(to_date('01/06/22','dd/mm/yy'), 200, 450);

-- faz falta id consulta
insert into consulta(data_consulta, id_animal, id_veterinario)
VALUES(to_date('02/05/22','dd/mm/yy'),200, 400);

insert into prescricao(cod_medicamento, data_consulta, id_animal)
VALUES(500, to_date('02/05/22','dd/mm/yy'), 200);
