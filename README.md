🚦 Semáforos Inteligentes para Mitigação de Tráfego
<div align="center"> <img src="img/tinkercad.png" alt="Simulação no Tinkercad" width="500"> 

📌 Visão Geral
Sistema de semáforos adaptativos desenvolvido no Tinkercad que utiliza Arduino para controlar dinamicamente os tempos dos sinais de trânsito com base na detecção simulada de veículos.

🔹 Objetivo: Reduzir congestionamentos priorizando vias com maior fluxo
🔹 Destaque: Algoritmo que ajusta tempos em tempo real
🔹 Tecnologias: Arduino, Tinkercad, C++

🎯 Funcionalidades
✅ Controle dinâmico de semáforos

✅ Simulação de sensores de tráfego

✅ Priorização de vias com maior movimento

✅ Fácil adaptação para hardware real

🛠️ Tecnologias Utilizadas
Tecnologia	Descrição
<img src="https://upload.wikimedia.org/wikipedia/commons/8/87/Arduino_Logo.svg" width="20"> Arduino	Plataforma de prototipagem eletrônica
<img src="https://www.tinkercad.com/favicon.ico" width="20"> Tinkercad	Ambiente de simulação online
<img src="https://upload.wikimedia.org/wikipedia/commons/1/18/ISO_C%2B%2B_Logo.svg" width="20"> C++	Linguagem de programação

🚀 Como Executar
bash
# Clone o repositório
git clone https://github.com/seu-usuario/semaforos-inteligentes.git
cd semaforos-inteligentes

# Para simulação no Tinkercad:
1. Acesse https://www.tinkercad.com/
2. Crie novo circuito Arduino
3. Copie o código de firmware/semaforo.ino
4. Conecte os sensores de acordo com a imagem disponibilizada. 
5. Execute a simulação


**📄 Licença
MIT © 2024 - [EdsonVST]

<button onclick="copyReadme()" style="padding: 10px 20px; background-color: #2ecc71; color: white; border: none; border-radius: 5px; cursor: pointer; font-size: 16px;">Copiar README</button>

<script> function copyReadme() { const readmeContent = `# **🚦 Semáforos Inteligentes para Mitigação de Tráfego** <div align="center"> <img src="./docs/simulacao_tinkercad.png" alt="Simulação no Tinkercad" width="500"> <p><em>(Adicione aqui uma imagem da sua simulação no Tinkercad)</em></p> </div> [... TODO O CONTEÚDO DO README ...] [MIT](./LICENSE) © 2024 - [Seu Nome]`; navigator.clipboard.writeText(readmeContent) .then(() => alert('README copiado com sucesso!')) .catch(err => alert('Erro ao copiar: ' + err)); } </script>