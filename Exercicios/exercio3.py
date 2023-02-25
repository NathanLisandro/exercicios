import json


with open('faturamento.json', 'r') as f:
    faturamento = json.load(f)

total_faturamento = 0
dias_com_faturamento = 0
for valor in faturamento:
    if valor != 0:
        total_faturamento += valor
        dias_com_faturamento += 1

media_faturamento = total_faturamento / dias_com_faturamento


menor_faturamento = min(faturamento)
maior_faturamento = max(faturamento)


dias_acima_da_media = 0
for valor in faturamento:
    if valor > media_faturamento:
        dias_acima_da_media += 1


print(f"Menor valor de faturamento: R${menor_faturamento:.2f}")
print(f"Maior valor de faturamento: R${maior_faturamento:.2f}")
print(f"Número de dias com faturamento acima da média mensal: {dias_acima_da_media}")