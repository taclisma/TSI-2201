--mínimo de 6 consultas
--4 consultas com no mínimo 3 tabelas
--3 consultas com grupo by e having

--1. quantidade de cachorros de cada tamanho
SELECT tamanho, count(tamanho) 
    FROM animal
    group by tamanho
    having count(tamanho) > 2;

--2. nome da pessoa, nome do cachorro e data do ultimo banho
SELECT pessoa.nome, animal.nome, MAX(banho.data_banho)
    from pessoa inner join animal
    on pessoa.id_pessoa = animal.id_pessoa
    inner join banho
    on banho.id_animal = animal.id_animal
    group by pessoa.nome, animal.nome;

--3. id dos animais que fizeram consultas com o veterinario clinico geral 
SELECT
