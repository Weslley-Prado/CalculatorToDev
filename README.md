
## Funcionalidades

A calculadora possui as seguintes funcionalidades:

1. Adição
2. Subtração
3. Multiplicação
4. Divisão
5. Conversão de binário para decimal
6. Conversão de decimal para binário
7. Conversão de hexadecimal para decimal
8. Conversão de decimal para hexadecimal

## Como Compilar e Executar

### Usando Code::Blocks

1. **Crie um Novo Projeto:**
   - Abra o Code::Blocks.
   - Vá para `File` > `New` > `Project`.
   - Selecione `Empty Project` e clique em `Go`.
   - Dê um nome ao projeto, por exemplo, `CalculatorProject`, e escolha um local para salvar.

2. **Adicione os Arquivos ao Projeto:**
   - Clique com o botão direito no nome do projeto no painel `Projects`.
   - Selecione `Add files...`.
   - Adicione `main.c`, `src/calculator.c`, e `include/calculator.h` ao projeto.

3. **Configuração do Caminho de Inclusão:**
   - Clique com o botão direito no nome do projeto no painel `Projects`.
   - Selecione `Build options...`.
   - Vá para a aba `Search directories`.
   - Adicione o caminho para a pasta `include`, por exemplo, `CalculatorProject/include`.

4. **Compilação e Execução:**
   - Certifique-se de que todas as configurações estejam corretas.
   - Clique em `Build` > `Build`.
   - Após a compilação bem-sucedida, clique em `Build` > `Run`.

### Usando Terminal

1. Abra o terminal.

2. Navegue até o diretório do projeto:

```sh
cd /caminho/para/CalculatorProject

gcc -o bin/calculator main.c src/calculator.c

./bin/calculator
