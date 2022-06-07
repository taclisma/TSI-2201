insert into cliente(id_cliente, nome, endereco, telefone) values(s_cliente.nextval, 'Pedro', 'RuaA', '1111-1111');

insert into cliente(id_cliente, nome, endereco, telefone) values(s_cliente.nextval, 'Ana', 'RuaB', '2222-2222');

insert into cliente(id_cliente, nome, endereco, telefone) values(s_cliente.nextval, 'Maria', 'RuaC', '3333-3333');

insert into produto(id_produto, nome, preco, quantidade_estoque) values(s_produto.nextval, 'mesa', 800, 90);

insert into produto(id_produto, nome, preco, quantidade_estoque) values(s_produto.nextval, 'cadeira', 180, 100);

insert into produto(id_produto, nome, preco, quantidade_estoque) values(s_produto.nextval, 'Poltrona', 350, 20);

insert into pedido(id_pedido, id_cliente, data_pedido, data_entrega) 
values(s_pedido.nextval, 100, to_date('01/06/2018 11:00','dd/mm/yyyy hh24:mi'), to_date('12/06/2018 16:00','dd/mm/yyyy hh24:mi'));

insert into pedido(id_pedido, id_cliente, data_pedido, data_entrega) 
values(s_pedido.nextval, 102, to_date('20/08/2018 14:00','dd/mm/yyyy hh24:mi'), null);

insert into pedido(id_pedido, id_cliente, data_pedido, data_entrega) 
values(s_pedido.nextval, 102, to_date('10/09/2018 14:00','dd/mm/yyyy hh24:mi'), to_date('15/09/2018 19:00','dd/mm/yyyy hh24:mi'));

insert into pedido(id_pedido, id_cliente, data_pedido, data_entrega) 
values(s_pedido.nextval, 100, to_date('07/06/2018 07:30','dd/mm/yyyy hh24:mi'), null);

insert into pedido_produto(id_pedido, id_produto, valor_venda,quantidade) values(300, 200, 800,5);

insert into pedido_produto(id_pedido, id_produto, valor_venda,quantidade) values(301, 201, 180,25);

insert into pedido_produto(id_pedido, id_produto, valor_venda,quantidade) values(301, 200, 800,8);

insert into pedido_produto(id_pedido, id_produto, valor_venda,quantidade) values(302, 201,180, 10);

insert into pedido_produto(id_pedido, id_produto, valor_venda,quantidade) values(302, 200, 800,20);

insert into pedido_produto(id_pedido, id_produto, valor_venda,quantidade) values(303, 201, 180,30);