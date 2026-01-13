🌡️ Projeto: Monitor de Temperatura e Umidade com Arduino
Um sistema interativo que monitora condições ambientais usando um sensor DHT11 e exibe os dados em um display LCD, controlado por um teclado matricial.

🎯 Objetivo
Criar uma estação meteorológica simples e interativa que permite ao usuário visualizar temperatura, umidade e sensação térmica através de comandos em um teclado.

🛠️ Componentes Utilizados
Componente	Quantidade	Descrição
Arduino (ESP32)	1	Microcontrolador principal
Sensor DHT11	1	Mede temperatura e umidade
Display LCD 16x2 com I2C	1	Exibe os dados
Teclado Matricial 4x4	1	Interface de controle
Jumpers	Vários	Conexões entre componentes
🔌 Esquema de Conexões
Componente	Pino Arduino	Observação
DHT11 - DATA	GPIO 16	Resistor pull-up de 10kΩ recomendado
LCD I2C - SDA	GPIO 21	Conforme padrão I2C do ESP32
LCD I2C - SCL	GPIO 22	Conforme padrão I2C do ESP32
Teclado - Linhas	13, 12, 14, 27	Linhas 1-4 do teclado
Teclado - Colunas	4, 5, 18, 19	Colunas 1-4 do teclado
📋 Funcionalidades
Leitura Ambiental: Mede temperatura (°C), umidade (%) e calcula sensação térmica.

Display LCD: Exibe informações de forma clara em duas linhas.

Controle por Teclado:

Tecla A: Exibe sequencialmente umidade, temperatura e sensação térmica

Tecla C: Limpa o display

Outras teclas: Exibem o caractere pressionado

🚀 Como Usar
Montagem: Conecte os componentes conforme o esquema acima.

Carregar Código:

Abra o código no Arduino IDE

Instale as bibliotecas necessárias: LiquidCrystal_I2C, Keypad, DHT

Selecione a placa ESP32 e a porta correta

Faça o upload do código

Operação:

Pressione A para iniciar a leitura ambiental

Pressione C para limpar o display

Pressione qualquer tecla para ver o caractere no display
