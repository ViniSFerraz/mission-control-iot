# Mission Control IoT

## Sistema IoT para Monitoramento de Cápsula Espacial

Projeto desenvolvido para a Global Solution da disciplina de Computer Organization and Architecture do curso de Ciência da Computação da FIAP.


### Integrantes

* Vinícius Souza Ferraz - RM: 570622


## Sobre o Projeto

O Mission Control IoT é um sistema embarcado desenvolvido utilizando Arduino Uno e sensores eletrônicos para simular o monitoramento inteligente de uma cápsula espacial.

O sistema realiza leitura de sensores em tempo real e exibe informações importantes no display LCD e no Monitor Serial da IDE Arduino.

O projeto foi desenvolvido utilizando a plataforma Tinkercad para simulação eletrônica.


## Objetivos

O projeto possui como objetivo:

* monitorar temperatura interna;
* monitorar temperatura externa;
* simular níveis de umidade;
* monitorar luminosidade;
* detectar vibrações da cápsula;
* exibir informações em tempo real;
* gerar alertas operacionais.


## Componentes Utilizados

| Componente    | Quantidade |
| ------------- | ---------- |
| Arduino Uno   | 1          |
| LCD 16x2      | 1          |
| TMP36         | 2          |
| LDR           | 1          |
| Tilt Sensor   | 1          |
| Potenciômetro | 2          |
| Resistores    | Diversos   |
| Protoboard    | 1          |
| Jumpers       | Diversos   |


## Sensores Implementados

### Temperatura Interna

Sensor TMP36 conectado à porta A0.

### Temperatura Externa

Sensor TMP36 conectado à porta A1.

### Umidade

Simulada utilizando potenciômetro conectado à porta A2.

### Luminosidade

Sensor LDR conectado à porta A3.

### Vibração

Tilt Sensor conectado à porta digital 8.


## Funcionalidades

* Leitura de sensores analógicos
* Leitura de sensor digital
* Conversão de temperatura
* Exibição no LCD
* Monitoramento em tempo real
* Alertas de vibração
* Exibição no Monitor Serial


## Estrutura do Projeto

```text
mission-control-iot/
│
├── README.md
├── mission_control_iot.ino
└── relatorio_tecnico.pdf
```


## Funcionamento do Sistema

O sistema realiza leitura contínua dos sensores e alterna automaticamente entre diferentes telas no display LCD.

### Tela 1

* Temperatura interna
* Umidade

### Tela 2

* Temperatura externa
* Luminosidade

### Tela 3

* Status da missão
* Alertas de vibração


## Tecnologias Utilizadas

* Arduino UNO
* Linguagem C++
* Tinkercad
* Sensores analógicos e digitais
* LCD 16x2


## Link do Tinkercad

(https://www.tinkercad.com/things/7bHHT8vQoD3-missioncontroliot?sharecode=HVwoxgh-4jG27lcpAFNarWObfFyEzB4Ibrz0LgRrCqM)


## Relatório Técnico

O relatório técnico completo está disponível no arquivo:

```text
relatorio_tecnico.pdf
```

## Considerações Finais

O projeto permitiu aplicar conceitos de Internet das Coisas (IoT), sistemas embarcados, sensores eletrônicos e monitoramento em tempo real.

A solução desenvolvida simula um sistema básico de monitoramento espacial, permitindo acompanhamento contínuo das condições operacionais da cápsula espacial.
