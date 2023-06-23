# Prototipacao_IOT_IFSP
Projeto desenvolvido por: Jean C. Galhardi e 
                          Julio Cesar Becker M. Pinto
    
Projeto de Monitoramento de Produção de Vinhos com ESP32
Este é um projeto que utiliza o microcontrolador ESP32 e sensores de umidade e temperatura para monitorar a produção de vinhos. Ele permite coletar informações precisas sobre as condições ambientais durante o processo de produção, garantindo que as condições ideais sejam mantidas para obter um vinho de alta qualidade.

Visão Geral do Projeto
O objetivo deste projeto é fornecer um sistema de monitoramento contínuo e em tempo real das condições de umidade e temperatura em uma vinícola. O ESP32 é o microcontrolador utilizado para realizar a aquisição dos dados dos sensores e enviar essas informações para um dispositivo externo, como um computador ou smartphone, para visualização e análise.

Os sensores de umidade e temperatura são conectados ao ESP32, que é programado para ler os dados desses sensores em intervalos regulares. Esses dados são então enviados via MQTT para um banco de dados, onde podem ser visualizados e armazenados para análise posterior.

Componentes Necessários
Microcontrolador ESP32
Sensor de umidade e temperatura DHT11 
Placa de desenvolvimento (protoboard) ou PCB para montagem dos componentes
Cabos jumper para conexões
Fonte de alimentação adequada para o ESP32 e os sensores
Dispositivo externo para visualização dos dados (computador, smartphone, etc.)
Instruções de Instalação
Montagem do Circuito: Conecte os sensores de umidade e temperatura ao ESP32 seguindo as especificações do fabricante. Certifique-se de fazer as conexões corretamente, ligando os pinos de sinal dos sensores aos pinos corretos do ESP32.

Programação do ESP32: Utilize a IDE do Arduino ou outra plataforma de desenvolvimento compatível com o ESP32 para programar o microcontrolador. Escreva o código necessário para ler os dados dos sensores e enviar essas informações para o dispositivo externo por meio da comunicação sem fio escolhida.

Configuração da Comunicação Sem Fio: Defina as configurações de comunicação sem fio, como SSID e senha da rede Wi-Fi, ou configure as opções de comunicação Bluetooth ou LoRa, de acordo com as necessidades do projeto.

Teste e Depuração: Faça testes para garantir que os sensores estejam funcionando corretamente e que os dados estejam sendo transmitidos com sucesso para o dispositivo externo. Verifique se as leituras de umidade e temperatura são precisas e se a comunicação sem fio está estável.

Integração com Aplicativo ou Plataforma de Monitoramento: Desenvolva ou utilize um aplicativo ou plataforma de monitoramento para receber e exibir os dados enviados pelo ESP32. Certifique-se de configurar a integração corretamente, inserindo as credenciais de conexão necessárias.

Funcionamento do Projeto
Após a conclusão da instalação e configuração do projeto, o ESP32 começará a ler os dados dos sensores de umidade e temperatura em intervalos regulares




