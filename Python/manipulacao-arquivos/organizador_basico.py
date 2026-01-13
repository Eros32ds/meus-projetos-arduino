import os

# Criar pasta de teste
if not os.path.exists("teste_python"):
    os.mkdir("teste_python")
    print("Pasta 'teste_python' criada!")

# Criar e escrever em arquivo
with open("teste_python/exemplo.txt", "w") as arquivo:
    arquivo.write("Primeira linha\n")
    arquivo.write("Segunda linha\n")

# Ler e mostrar conteúdo
with open("teste_python/exemplo.txt", "r") as arquivo:
    print("\nConteúdo do arquivo:")
    for numero, linha in enumerate(arquivo, 1):
        print(f"Linha {numero}: {linha.strip()}")
