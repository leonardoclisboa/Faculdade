DELIMITER //

CREATE PROCEDURE consultarClientes (
    IN p_nome VARCHAR(100)
)
BEGIN
    SELECT * 
    FROM aula.cliente
    WHERE nome LIKE CONCAT('%', p_nome, '%');
END //

DELIMITER ;
