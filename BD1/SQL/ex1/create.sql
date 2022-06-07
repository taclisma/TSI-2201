--cliente(id_cliente,nome,endereco,telefone)
create table cliente(
id_cliente number constraint pk_cliente PRIMARY KEY,
nome varchar2(20),
endereco varchar2(30),
telefone number(15));


--produto(id_produto, nome, preco, quantidade_estoque)
create table produto(
id_produto number constraint pk_produto PRIMARY KEY,
nome varchar2(20),
preco number(6,2),
quantidade_estoque number);


--pedido (id_pedido, id_cliente, data_pedido, data_entrega) fk: id_cliente
create table pedido(
id_pedido number constraint pk_pedido PRIMARY KEY,
id_cliente number,
data_pedido date,
data_entrega date);


--pedido_produto(id_pedido,id_produto,preco_venda,quantidade) fk: id_pedido, id_produto
create table pedido_produto(
 id_pedido number constraint FK_Pedido_id_pedido references pedido,
 id_produto number constraint FK_Produto_id_produto references produto,
 quantidade number,
 preco_venda number
);

create sequence s_cliente start with 100
	increment by 1
	nocache;
create sequence s_produto start with 200
	increment by 1
	nocache;
create sequence s_pedido start with 300 
	increment by 1
	nocache;