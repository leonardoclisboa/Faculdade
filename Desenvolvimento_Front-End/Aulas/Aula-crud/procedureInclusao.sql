-- Criando o banco de dados da aula CRUD
CREATE DATABASE IF NOT EXISTS AULA;

USE AULA;

CREATE TABLE IF NOT EXISTS cliente (
    id            INT auto_increment PRIMARY KEY,
    nome        varchar(100) NOT NULL,
    email        varchar(100) NOT NULL,
    telefone    varchar(20),
    endereco    varchar(255)
);

DELIMITER //

CREATE PROCEDURE inserirCliente (
    in p_nome varchar(100),
    in p_email varchar(100),
    in p_telefone varchar(20),
    in p_endereco varchar(255)
)
BEGIN
    INSERT INTO cliente (nome, email, telefone, endereco)
    
    VALUES     (p_nome, p_email, p_telefone, p_endereco);
    
    END