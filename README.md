# Rocket Tank Sketch

> Sketch de operação do Rocket Tank da RoboCore para Arduino UNO/BlackBoard UNO

## Descrição

O projeto visa por em operação o veículo de esteiras Rocket Tank da RoboCore, controlando as esteiras e fazendo o veículo se locomover.

Inicialmente foi programado uma operação simples fazendo o tanque se mover para frente e para trás em loop, mas aos poucos vamos incremento e fazendo com que ele possa ser operado atráves de Joystick ou via WiFi por algum aplicativo, é o objetivo final do projeto.

## Hardware

- Rocket Tank
  - Chassi
  - Esteiras
  - Roldanas
  - Eixos
  - Motores elétricos
  - Bancadas de acoplamento
- Placa controladora
  - RoboCore BlackBoard UNO (baseada no Arduino UNO)
- Placas adicionais
  - Ponte H L298n de 2 canais 2a
  - Regulador De Tensão Ajustável Lm2596 DC-DC com Display
  - Módulo Bateria 18650 Para Esp32/Arduino/Raspberry Pi c/ Cabo
- Baterias
  - Bateria recarregável 12v 800mAh (de furadeira)
  - Bateria 18650 Li-ion 8800mAh 4.2V

## Configuração do ambiente

> Este projeto foi criado utilizando o PlatformIO IDE para VS Code

1. Instale os drivers do seu Arduino e certifique-se que ele está sendo reconhecido pelo computador
   1. [Arduino](https://www.robocore.net/tutoriais/instalando-driver-do-arduino)
   2. [RoboCore BlackBoard UNO](https://www.robocore.net/tutoriais/instalacao-driver-da-blackboard)
2. Instale o PlatformIO IDE no VS Code
   1. [Instruções para instalação](https://docs.platformio.org/en/latest/integration/ide/vscode.html)
3. Abra o PlatformIO IDE e deixe-o instalar suas dependências e fazer as configurações necessárias
4. Clone o código do projeto para seu computador
5. Abra a pasta do projeto com o VS Code
6. Utilize os comandos do PlatformIO IDE para fazer o _build_ e _upload_ do projeto para seu Arduino

## Bibliotecas utilizadas

- em breve...

## Esquema de montagem

- em breve...
