# Boilerplate Projeto em C

Este é um boilerplate básico para projetos em C, estruturado para facilitar o desenvolvimento, compilação e organização de código. A estrutura do projeto inclui pastas para os arquivos de código-fonte, cabeçalhos, e configurações para compilar o projeto automaticamente no Visual Studio Code.

## Estrutura do Projeto

## Instruções para Uso

1. **Clone o repositório**

   Para começar a usar este boilerplate, clone o repositório para sua máquina local:

   ```bash
   git clone https://github.com/grebechi/boilerplate-c-project.git
   cd boilerplate-c-project

2. **Estrutura de Arquivos**
   - **src/**: Aqui você coloca os arquivos de código fonte (.c). Exemplo: `main.c`, `utils.c`, etc..
   - **include/**: Coloque seus arquivos de cabeçalho (.h) aqui. Exemplo: `main.h`, `utils.h`, etc..
   - **build/**: Esta pasta é gerada automaticamente ao compilar o projeto. Ela contém o `executável do seu projeto`.
   - **.vscode/**: A pasta contém as configurações necessárias para a tarefa de compilação automática no VSCode. O arquivo `task.json` está configurado para compilar o projeto com `gcc`.

3. **Compilação Automática no VSCode**
   
   Se você estiver usando o Visual Studio Code, este boilerplate já vem com uma tarefa de compilação automática configurada. Para compilar o projeto, siga os passos abaixo:

   - Abra o projeto no Visual Studio Code.
   - Vá até o menu Terminal e selecione Run Build Task... ou pressione `Ctrl+Shift+B`.
   - O código será compilado e o `executável` gerado na pasta `build/`.
  
## Exemplo de Uso

    Para testar, crie um arquivo main.c dentro da pasta /src/ com o seguinte conteúdo:

    ```c
        #include <stdio.h>

        int main() {
            printf("Hello, World!\n");
        return 0;
        }

    Depois de compilar, o executável será executado automaticamente no terminal.


### Explicações sobre os Arquivos:
- **task.json (no diretório .vscode/)**: Este arquivo contém a configuração para compilar o projeto automaticamente. Ele usa o GCC para compilar os arquivos `.c` e gerar o executável na pasta `/build/`.
  
- **.gitignore**: Ele ignora o diretório `/build/` para evitar o upload de arquivos binários para o GitHub.

Esse boilerplate oferece uma estrutura simples, mas eficiente, para começar rapidamente com projetos em C.
