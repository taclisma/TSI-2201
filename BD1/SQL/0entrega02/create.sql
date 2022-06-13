/* petshop01logico: */
----------CREATE
CREATE TABLE animal(
    id_animal NUMBER constraint pk_animal PRIMARY KEY,
    nome VARCHAR(15),
    tamanho VARCHAR(20), --trocar por peso ou porte?
    raca VARCHAR(16),
    id_pessoa NUMBER
);

CREATE TABLE pessoa (
    id_pessoa NUMBER constraint pk_pessoa PRIMARY KEY,
    nome VARCHAR(30),
    endereco VARCHAR(50)
);

CREATE TABLE veterinario (
    id_veterinario NUMBER PRIMARY KEY,
    nome VARCHAR(30),
    especializacao VARCHAR(15)
);

CREATE TABLE funcionario_banho (
    id_funcionario NUMBER PRIMARY KEY,
    nome VARCHAR(30)
);

CREATE TABLE banho (
    id_animal NUMBER,
    id_funcionario NUMBER,
    ---tosa BOOLEAN,
    data_banho DATE PRIMARY KEY
);

CREATE TABLE consulta (
    data_consulta DATE PRIMARY KEY,
    id_animal NUMBER,
    id_veterinario NUMBER
);

CREATE TABLE medicacao (
    cod_medicamento NUMBER PRIMARY KEY,
    preco NUMBER,
    nome_med VARCHAR(40));
--    bula BLOB(10M));

CREATE TABLE prescricao (
    cod_medicamento NUMBER,
    data_consulta DATE,
    --- add id animal
    id_animal NUMBER
);

-------------------ALTER
ALTER TABLE animal add( 
    constraint FK_animal_id_pessoa
    FOREIGN KEY (id_pessoa) REFERENCES pessoa
    );

ALTER TABLE banho add(
    constraint FK_banho_id_animal 
    FOREIGN KEY(id_animal) REFERENCES animal (id_animal),
 
    constraint FK_banho_id_funcionario 
    FOREIGN KEY (id_funcionario) REFERENCES funcionario_banho (id_funcionario)
    );

ALTER TABLE consulta add(
    constraint FK_consulta_id_animal 
    FOREIGN KEY (id_animal) REFERENCES animal (id_animal),

    constraint FK_consulta_id_funcionario 
    FOREIGN KEY (id_veterinario) REFERENCES veterinario (id_veterinario)
    );

ALTER TABLE prescricao add(
    constraint FK_cod_medicamento
    FOREIGN KEY (cod_medicamento) REFERENCES medicacao (cod_medicamento),

    constraint FK_data_consulta
    FOREIGN KEY (data_consulta) REFERENCES consulta (data_consulta)
    );
--------------SEQUENCES
CREATE SEQUENCE s_pessoa start with 100 nocache;

CREATE SEQUENCE s_animal start with 200 nocache;

CREATE SEQUENCE s_func start with 450 nocache;

CREATE SEQUENCE s_vet start with 400 nocache;

CREATE SEQUENCE s_med start with 500 nocache;

------------------- roda ok ate aqui
