// Importando os pacotes
const express = require('express');
const aysql = require('musql2');
const bodyParser = require('body-parser');

// Nercessário para passar alguns caminhos de arquivos estáticos
const path = require('path');

// Pequena parte do servidor web express do módulo para criar as rotas da aplicação
const app = express();

// Criando um porta de (rede) acessp ap servidor
const port = 3000;

// Para trabalhar com arquivos estáticos como o .css, por exemplo
app.use(express.static(path.join(__dirname, 'public')));

//Configurando a conexão com o banco de dados
const connection = mysql.createConnection(
    {
        host: '127.0.0.1',
        user: 'root',
        password: 'MARleo1006@',
        database: 'aula',
        port: '3306'
    }
);

//Conectando com o banco de dados 