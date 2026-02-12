 try:
    with open('dados.txt', 'r') as arquivo:
        conteudo = arquivo.read()
except FileNotFoundError:
    print("Arquivo não encontrado.")
except PermissionError:
    print("Permissão negada.")
except Exception as e:
    print(f"Erro inesperado: {e}")

#esta errado graças ao inicio, o espaço, eu não sabia agora sei como corrigir, confira o certo no abrir certo