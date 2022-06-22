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

-- 6. Write a Oracle SQL query to display the name of the employees in order to earning from lowest salary to highest. 
select first_name || ' ' || last_name as name, salary 
	from employees
	order by salary asc;

-- 7. Write a Oracle SQL query to display the name of the employees in order to earning from highest salary to lowest
select first_name || ' ' || last_name as name, salary
	from employees
	order by salary desc;
-- a palavra chave para decrescente é "desc"

--8. Write a Oracle SQL query to display the name of the employees in order to alphabetically ascending order. 
select first_name || ' ' || last_name as name
	from employees
	order by name;

-- 9. Write a Oracle SQL query to display employee id, name, department no, salary of the employees. The output first based on the employee name in ascending order, for unique name department will come in ascending order, and for same name and department the highest salary will come first.
select employee_id, first_name || ' ' || last_name as name, department_id, salary
	from employees
	order by first_name asc, department_id asc, salary desc;

-- 11. Write a Oracle SQL query to display department id and total number of employees working in each department.
select department_id, count(employee_id)
	from employees
	group by department_id;

-- 12. Write a Oracle SQL query to display the designation (job id) and total number of employees working in each designation. 
select job_id, count(employee_id)
	from employees
	group by job_id;

-- 13. Write a Oracle SQL query to display the department number and total salary for each department. 
select department_id, sum(salary)
	from employees
	group by department_id;

-- 14. Write a Oracle SQL query to display the department number and maximum salary for each department. 
select department_id, max(salary)
	from employees
	group by department_id;

--------------operators
-- 2. Write a query to list the employees name and total salary of a year and yearly salary is more than $10000
select first_name || ' ' || last_name as name, (salary*12) as "yearly salary"
	from employees
	where ("yearly salary" > 10000);

-- 3. Write a query to list the employees name and salary who?s daily salary is more than $100. 
select first_name || ' ' || last_name as name, (salary/30) as "daily earning"
	from employees
	where ((salary/30) > 100);

-- 4. Write a query to list the name of all the employees who are not working in department number 20. 
select first_name || ' ' || last_name as name, department_id
	from employees
	where (department_id != 20);

-- 7. Write a query to list the name of all the employees who are working as accountant in finance section and drawing a salary is greater than equal to $5000 and less than equal to $20000. 

select first_name || ' ' || last_name as name, salary, job_id
	from employees
	where (job_id = 'fi_account' and (salary >= 5000 and salary<=20000));

-- 8. Write a query to list the names, salary of all the employees who are working with a commission package.
select first_name, salary
	from employees
	where commission_pct is not null;

-- 9. Write a query to list the name, salary of all the employees where employee first name belongs in a specified list. 
select first_name, salary
	from employees
	where first_name in ('John', 'Guy');

-- 10. Write a query to list the first name, last name, Job id of all the employees except "PRESIDENT" & "MGR" in asc order of Salaries. 
select first_name || ' ' || last_name as name, job_id
	from employees
	where job_id NOT IN('PRESIDENT', 'MGR')
	order by salary;

-- 11. Write a query to list the name (first and last name), hire date of all the employees who joined before or after 2005. 
select first_name || ' ' || last_name as name, hire_date
	from employees
	where (to_date(hire_date,'yyyy')> 2005 and to_date(hire_date,'yyyy')<2005);

select first_name || ' ' || last_name as name, hire_date
	from employees
	where (to_date(hire_date,'yyyy') not in 2005);

-- 13. Write a query to concatenate first name, last name and job id from employees table in the following format. 
select first_name || ' ' || last_name || ' ' || 'is a' || job_id
	from employees;

-- 14. Write a query to list the employees who are joined in the year between '01-Jan-2004' and '31-Dec-2008'
select first_name || ' ' || last_name as name, hire_date
	from employees
	where hire_date between ('01-Jan-2004','31-Dec-2008');