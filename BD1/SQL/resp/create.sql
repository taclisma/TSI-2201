create table cliente
(
id_cliente number constraint pk_cliente primary key, 
nome varchar2(10), 
endereco varchar2(10), 
telefone varchar2(10)
);

create table produto
(id_produto number constraint pk_produto primary key, 
 nome varchar2(10),
 preco number, 
 quantidade_estoque number
);

create table pedido
(id_pedido number constraint pk_pedido primary key,
 id_cliente number, 
 data_pedido date, 
 data_entrega date
);

create table pedido_produto
(id_pedido number, 
 id_produto number, 
 quantidade number, 
 valor_venda number,
 constraint pk_pedido_produto primary key(id_pedido, id_produto)
);


-- adiciona depois os fk's com alter table
alter table pedido add constraint fk_pedido_produto_id_cliente foreign key(id_cliente) references cliente;

alter table pedido_produto add
(constraint fk_pedido_produto_id_produto foreign key(id_produto) references produto, 
 constraint fk_pedido_produto_id_pedido foreign key(id_pedido) references pedido);

create sequence s_cliente start with 100 nocache;

create sequence s_produto start with 200 nocache;

create sequence s_pedido start with 300 nocache;
