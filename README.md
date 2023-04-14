# Sistema de detecção de poluição do ar

## Objetivo
O objetivo deste projeto é desenvolver um dispositivo que possa analisar a qualidade do ar em um ambiente fechado e exibir as informações em um monitor LCD. Isso pode ser útil para monitorar a poluição do ar em ambientes internos, como salas de aula, escritórios, residências, etc.

## Descrição do desafio
O desafio foi propor soluções de sustentabilidade para os centros urbanos, usando tecnologia e os conhecimentos adquiridos ao longo do curso, podendo assim contribuir para a conscientização da população e das organizações, para o monitoramento ambiental, o tratamento de problemas ou mesmo para propiciar a recuperação do impacto de problemas que afetem o meio ambiente e o bem estar dos cidadãos.

## Como executar o projeto
Para executar o projeto, é necessário seguir os seguintes passos:

### Montagem

1. Conecte o pino GND do monitor LCD ao GND da placa Arduino;
1. Conecte o pino VCC do monitor LCD ao 5V da placa Arduino;
2. Conecte o pino VO do monitor LCD ao terminal central do potenciômetro;
3. Conecte um dos terminais do potenciômetro ao GND da placa Arduino;
4. Conecte o outro terminal do potenciômetro ao 5V da placa Arduino;
5. Conecte o pino RS do monitor LCD ao pino digital 12 da placa Arduino;
6. Conecte o pino Enable do monitor LCD ao pino digital 11 da placa Arduino;
7. Conecte o pino D4 do monitor LCD ao pino digital 5 da placa Arduino;
8. Conecte o pino D5 do monitor LCD ao pino digital 4 da placa Arduino;
9. Conecte o pino D6 do monitor LCD ao pino digital 3 da placa Arduino;
10. Conecte o pino D7 do monitor LCD ao pino digital 2 da placa Arduino;
11. Conecte o pino RW do monitor LCD ao GND da placa Arduino;
12. Conecte o pino A do sensor de gás ao pino analógico A5 da placa Arduino;
13. Conecte o pino K do sensor de gás ao GND da placa Arduino;
14. Conecte o resistor de 220 ohms entre o pino VO do monitor LCD e o terminal central do potenciômetro;

### Como executar o programa

1. Abra o arquivo <a href="https://github.com/devCaiqueWS/Sprint01/main.ino">"main.ino"</a> no software Arduino IDE;
2. Conecte a placa Arduino ao computador usando um cabo USB;
3. Selecione a placa e a porta corretas no menu "Tools" do software;
4. Compile e carregue o programa na placa Arduino clicando no botão "Upload";
5. Observe o monitor LCD para verificar o valor do sensor de gás;

## Pré-requisitos
Para executar este projeto, é necessário ter os seguintes materiais:

- Microcontrolador Arduino Uno;
- Sensor de qualidade do ar MQ-135;
- Monitor LCD 16x2;
- Resistor de 10k Ohms;
- Jumpers e protoboard;
- Fonte de alimentação.

Também é necessário ter conhecimentos básicos em eletrônica e programação em Arduino.

## Esquema elétrico
O esquema elétrico do circuito pode ser encontrado no seguinte link:<a href="https://www.tinkercad.com/things/7Qot2fRLKQA"> esquema elétrico</a>

<br><img src="https://github.com/devCaiqueWS/Sprint01/blob/main/circuit_ino.PNG">

## Funcionamento
O sensor MQ-135 mede a quantidade de gases tóxicos no ar, como CO, amônia, benzeno, entre outros. Essas informações são processadas pelo microcontrolador Arduino, que as exibe no monitor LCD.

## Link para Video explicativo
Um vídeo explicativo sobre este projeto pode ser encontrado no seguinte link: <a href="https://www.youtube.com/watch?v=0RMNj6OlUhY"> link vídeo explicativo</a>
<a href="https://www.youtube.com/watch?v=0RMNj6OlUhY"> vídeo 2</a>

## Conclusão
Este projeto mostrou que é possível desenvolver um dispositivo simples e eficiente para monitorar a qualidade do ar em ambientes fechados. Com algumas adaptações, é possível expandir o projeto para monitorar outros parâmetros, como temperatura, umidade, luminosidade, etc.


