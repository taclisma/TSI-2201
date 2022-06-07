--10. Apresentar o id_cliente, o mês e quantidade de pedidos por mês.
select ped.id_cliente, ped.data_pedido, prod.quantidade from 
	from pedido ped inner join pedido_produto pp
	on ped.id_pedido = pp.id_pedido;

--11. Apresentar o valor médio dos produtos.
select AVG(preco) from produto;
select preco from produto;

--12. Apresentar o valor médio dos pedidos.

--13. Apresentar o nome do cliente e a quantidade de pedidos deste cliente. (Se o cliente não fez pedidos ele não precisa aparecer no resultado)

--14. Apresentar o id do pedido e o valor total do pedido para os pedidos entre 01/01/2018 a 10/02/2018.

--15. Apresentar o código do pedido, nome do cliente e o total a ser pago para cada pedido. Ordenar pelo código do pedido.

--16. Apresentar o id dos pedidos somente para os pedidos com mais de 2 produtos diferentes.
