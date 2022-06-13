/* petshop01logico: */
----------CREATE
CREATE TABLE animal(
    id_animal NUMBER constraint pk_animal PRIMARY KEY ON DELETE CASCADE,
    nome VARCHAR(15),
    tamanho VARCHAR(20), --trocar por peso ou porte?
    raca VARCHAR(16),
    id_pessoa NUMBER
);

CREATE TABLE pessoa (
    id_pessoa NUMBER constraint pk_pessoa PRIMARY KEY ON DELETE CASCADE,
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
    data_banho DATE
);


-- invalid datatype no live
CREATE TABLE consulta (
    data_consulta DATE,
    id_animal FK_id_animal_consulta
    REFERENCES animal (id_animal) ON DELETE CASCADE,
    id_veterinario NUMBER ,
    constraint PK_constulta PRIMARY KEY(data_consulta, id_animal) ON DELETE CASCADE
);

CREATE TABLE medicacao (
    cod_medicamento NUMBER PRIMARY KEY,
    preco NUMBER,
    nome_med VARCHAR(40));
--    bula BLOB(10M));



    ---adicionei o id_animal -- invalid dadatype no live
CREATE TABLE prescricao (
    cod_medicamento FK_cod_medicamento 
    REFERENCES medicacao (cod_medicamento) ON DELETE CASCADE,

    data_consulta FK_data_presc 
    REFERENCES consulta (data_consulta) ON DELETE CASCADE,

    id_animal FK_id_animal_presc 
    REFERENCES animal (id_animal) ON DELETE CASCADE,
    
    constraint PK_presc PRIMARY KEY(data_consulta, id_animal) ON DELETE CASCADE
);

-------------------ALTER
ALTER TABLE animal add( 
    constraint FK_animal_id_pessoa
    FOREIGN KEY (id_pessoa) REFERENCES pessoa (id_pessoa)
    );

ALTER TABLE banho add (
    constraint FK_banho_id_animal
    FOREIGN KEY (id_animal) REFERENCES animal (id_animal),

    constraint FK_banho_id_func
    FOREIGN KEY (id_funcionario) REFERENCES funcionario_banho (id_funcionario),
    constraint PK_banho PRIMARY KEY(id_animal, data_banho)
);

--------------SEQUENCES
CREATE SEQUENCE s_pessoa start with 100 nocache;

CREATE SEQUENCE s_animal start with 200 nocache;

CREATE SEQUENCE s_func start with 450 nocache;

CREATE SEQUENCE s_vet start with 400 nocache;

CREATE SEQUENCE s_med start with 500 nocache;
