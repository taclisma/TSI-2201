-- 1. Write a Oracle SQL query to get the details of all employees 
--    and also display the specific information of all employees.

select employee_id, first_name, last_name, job_id from employees;
-- certo

-----------------------------

-- 2. Write a Oracle SQL query to display the employee name, 
--    job and annual salary for all employees.

select (first_name + last_name), job_id, salary from employees; 
-- primeira tentativa erro: parenteses nao e usado para isso no oracle, 

select first_name || ' ' || last_name as name, job_id, salary from employees;
-- apos pesquisa, descobri que concatenar colunas é feito por pipes, e depois é possivel nomear a coluna conjunta usando a palavra chave 'AS "nome_da_coluna"' 

select first_name || ' ' || last_name as name, job_id, (12*salary) as annual salary from employees;
-- ao corrigir vi que faltou mostrar o salario anual, ai sim utiliza-se parenteses e também e possivel renomear a coluna com a palavra chave 'AS'

*** (12*salary) as "annual salary" from employees;
-- tambem faltou as aspas no nome da coluna, já que tem um espaço entre as palavras é necessário.
*** (12*(salary+NVL(commission_pct,0))) as "annual salary" from employees;
-- a função NVL recebe dois parametros, NVL(coluna, valor_default_caso_NULL), por ex NVL(rg, 'rg invalido')

----------------------------------------

-- 3 . Write a Oracle SQL query to get the total number of employees working in the company.
select count(employee_id) from employees;
-- certo, e so usar a função count na coluna.

-- 4. Write a Oracle SQL query to get the total salary being paid to all employees. 
select sum(salary) from employees;
-- certo, é só usar a função SUM na coluna.

-- 5. Write a Oracle SQL query to get the maximum and minimum salary from the employees table. 
select min(salary) as "menor salario", max(salary) as "maior salario" from employees;
-- certo ficou ate melhor do que a resposta oficial.

--6. Write a Oracle SQL query to display the name of the employees in order to earning from lowest salary to highest. 