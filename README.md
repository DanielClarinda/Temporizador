Desenvolvido por DACLA Automação - https://dacla-automacao.github.io/site/
Instagram - https://www.instagram.com/daclaautomacao/

Biblioteca para uso de delay sem a função delay

Construtor(vazio);

Métodos do obbjeto

void setAlarme(unsigned long alarmeTime);
- Passar o tempo em ms que o alarme deve disparar

void checkTime(void (*callback)());
- Passar a função callback que deve ser chamada quando o alarme disparar (será chamada apenas 1 vez, se quiser periodos usar recursividade)
