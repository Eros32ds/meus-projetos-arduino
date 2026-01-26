# 🔐 Caesar Cipher (Encode & Decode)

Projeto em Python que implementa a **Cifra de César**, permitindo **criptografar** e **descriptografar** mensagens usando deslocamento de letras no alfabeto.

O usuário pode escolher entre **encode** (criptografar) ou **decode** (descriptografar), definir o texto, o valor do deslocamento (*shift*) e repetir o processo quantas vezes quiser.

---

## 📌 Funcionalidades

- 🔄 Criptografa e descriptografa mensagens
- 🔢 Suporte a qualquer valor de shift (com correção automática)
- 🧠 Mantém espaços, números e símbolos inalterados
- 🔁 Permite repetir o processo até o usuário encerrar
- 🎨 Exibe um logo ASCII ao iniciar o programa

---

## 🧠 Como funciona a Cifra de César

A Cifra de César desloca cada letra do texto um número fixo de posições no alfabeto.

Exemplo com `shift = 3`:

a → d
b → e
c → f

No modo **decode**, o deslocamento ocorre para trás.

---

## 🚀 Como executar o projeto

1. Certifique-se de ter o **Python 3** instalado
2. Clone este repositório ou copie o código
3. Execute o arquivo principal:

🧪 Exemplo de uso


Type 'encode' to encrypt, type 'decode' to decrypt:
encode
Type your message:
hello world!
Type the shift number:
5
Here is the encoded result: mjqqt btwqi!

🧩 Estrutura do código
Função principal
def caesar(original_text, shift_amount, encode_or_decode):


original_text: texto digitado pelo usuário

shift_amount: número de posições a deslocar

encode_or_decode: define se o texto será criptografado ou descriptografado

A função:

ajusta o shift automaticamente no modo decode

percorre cada caractere do texto

desloca apenas letras do alfabeto

mantém caracteres não alfabéticos inalterados

✨ Autor

Desenvolvido por Eros Macedo - baseado no curso = 100 Days of Code™: The Complete Python Pro Bootcamp

Projeto educacional baseado em desafios clássicos de Python.
Este projeto é livre para uso educacional.
