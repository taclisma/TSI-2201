drop table funcionario;
drop table departamento;
drop sequence s_depto;
drop sequence s_funcionario;

Create table departamento
(id_departamento NUMBER constraint pk_depatamento PRIMARY KEY,
 nome VARCHAR2(15)
 );

Create table funcionario
(id_funcionario NUMBER constraint pk_funcionario PRIMARY KEY,
 nome VARCHAR2(15),
 salario number,
 id_departamento number
);

alter table funcionario add
 constraint FK_Funcionario_id_departamento 
   foreign key (id_departamento) references departamento;

create sequence s_depto;
create sequence s_funcionario start with 100;

insert into departamento(id_departamento,nome)
values(s_depto.nextval,'Vendas');

insert into departamento(id_departamento,nome)
values(s_depto.nextval,'Rh');

select *
from departamento;

insert into funcionario(id_funcionario,nome,salario,id_departamento)
values(s_funcionario.nextval,'Antonio',3000,null);

insert into funcionario(id_funcionario,nome,salario,id_departamento)
values(s_funcionario.nextval,'Pedro',2000,1);

insert into funcionario(id_funcionario,nome,salario,id_departamento)
values(s_funcionario.nextval,'Maria',5000,1);

