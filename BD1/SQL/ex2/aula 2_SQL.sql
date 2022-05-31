-- NAO EXISTE OPERADORES DE AGREGAÇAO NA CLAUSULA WHERE (SUM, AVG, MIN / MAX, COUNT)

-- teste 1
-- vai contar todas as linhas
select count(*)
from funcionario;

-- se tiver null nao vai contar
select count(id_departamento)
from funcionario;

-- teste 2
select * 
from funcionario;

update funcionario
set salario=null
where id_funcionario=101;

select avg(salario)
from funcionario;

-- teste 3
update funcionario 
set id_departamento=2
where id_funcionario=100;

update funcionario 
set salario = 2000
where id_funcionario=101;

select * from funcionario;

select id_departamento,avg(salario)
from funcionario
group by id_departamento; --FORMA GRUOP por departamento
--group by id_departamento, salario; <criaria grupos de (id=id dep=dep);

-- teste 4
select d.nome,avg(salario)
from funcionario f inner join departamento d
on f.id_departamento = d.id_departamento
group by nome; -- se tira isso n funciona tem que agrupar as coisa macaco

-- Por que deu erro?

select d.nome,avg(salario)
from funcionario f inner join departamento d
on f.id_departamento = d.id_departamento
group by d.nome;

-- teste 5
select d.id_departamento,d.nome,avg(salario)
from funcionario f inner join departamento d
on f.id_departamento = d.id_departamento
group by d.nome;

-- Por que deu erro?

-- teste 6 
select id_departamento,avg(salario)
from funcionario
group by id_departamento
having count(*) > 4;

-- teste 7

alter table funcionario add data_admissao date;

select * from funcionario;

insert into funcionario(id_funcionario,nome,salario,id_departamento,data_admissao)
values(s_funcionario.nextval,'Paulo',2000,1,sysdate);

select * from funcionario;

-- teste 8

select nome, to_char(data_admissao,'dd/mm/yyyy hh24:mi')
from funcionario
where data_admissao is not null;

-- teste 9
update funcionario
set data_admissao = sysdate -2
where id_funcionario=100;

select *
from funcionario;

-- teste 10

Select nome
From funcionario
Where data_admissao = to_date('02/08/2021','dd/mm/yyyy');

-- Por que não apareceu nenhum funcionario?

Select nome,to_char(data_admissao,'dd/mm/yyyy hh24:mi')
From funcionario;

Select nome
From funcionario
Where data_admissao >= to_date('02/08/2021','dd/mm/yyyy')
and data_admissao < to_date('03/08/2021','dd/mm/yyyy');

--ou

Select nome
From funcionario
Where trunc(data_admissao) = to_date('02/08/2021','dd/mm/yyyy');
