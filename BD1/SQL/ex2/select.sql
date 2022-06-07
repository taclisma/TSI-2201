--1. Apresentar o nomes dos produtos em ordem crescente.
select nome 
    from produto 
    order by nome;

--2. Apresentar os nomes dos produtos, a quantidade em estoque e o preço para os produtos que tem quantidade em estoque superior a 50 ou com preço inferior a 10.
select nome, quantidade_estoque, preco 
    from produto 
    where (quantidade_estoque > 50) or (preco < 10);

--3. Apresentar o código do pedido, a data do pedido e o nome do cliente.
select pedido.id_pedido, pedido.data_pedido, cliente.nome 
    from pedido, cliente;

-----------COM INNER JOIN
--3. Apresentar o código do pedido, a data do pedido e o nome do cliente.
select p.id_pedido, p.data_pedido, c.nome 
    from cliente c inner join pedido p 
    on c.id_cliente = p.id_cliente; --o que liga as tabelas
----------------------------------------------

--4. Apresentar o código do pedido, o código do produto, o nome do produto, o preço de venda, ordenar pelo código do pedido.
select pedido.id_pedido, produto.id_produto, produto.nome, produto.preco 
    from pedido, produto 
    order by pedido.id_pedido;
    
------------COM INNER JOIN,, envolvendo menos tabelas
--4. Apresentar o código do pedido, o código do produto, o nome do produto, o preço de venda, ordenar pelo código do pedido.
select pedido_produto.id_pedido, pedido_produto.id_produto, produto.nome, pedido_produto.valor_venda 
    from pedido_produto inner join produto
    on pedido_produto.id_produto = produto.id_produto  
    order by pedido_produto.id_pedido;
--------------------------------------
--
-- com o order by nao fica repetindo as tuplas desnecessariamente
--
----------------------------------------

--5. Apresentar os nomes dos produtos que foram pedidos em quantidade superior a 10.
select produto.nome--, pedido_produto.quantidade <- nao mostra so ordena
    from pedido_produto inner join produto
    on pedido_produto.id_produto = produto.id_produto
    where (pedido_produto.quantidade > 10);

--6. Apresentar o código do pedido, a data, o nome do cliente para os pedidos do produto de código 1. 
select pedido.id_pedido, pedido.data_pedido, cliente.nome 
    from cliente, pedido
    where (pedido.id_pedido = 101); --NAO CORRIGUGIGRR VER RESP


--7. Apresentar o código do pedido, a data, o nome do cliente para os pedidos do produto mesa.
select pedido.id_pedido, pedido.data_pedido, cliente.nome 
    from cliente, pedido
    where (produto.nome = 'mesa');

--8. Apresentar o código do pedido, o nome do cliente e a data do pedido para os pedidos que ainda não foram entregues.
select pedido.id_pedido, cliente.nome, pedido.data_pedido 
    from (p.data_entrega is NULL);

--9. Apresentar o código do pedido, nome do cliente, nome do produto, total produto (quantidade*preço do produto). Ordenar pelo código do pedido e pelo nome do produto.
select pedido.id_pedido, cliente.nome, produto.nome, pedido_produto.quantidade