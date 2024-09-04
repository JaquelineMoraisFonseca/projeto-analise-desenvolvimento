import json

with open('faturamento.json') as f:
    faturamento = json.load(f)

valores = [dia['valor'] for dia in faturamento if dia['valor'] > 0]

menor = min(valores)
maior = max(valores)
media = sum(valores) / len(valores)
dias_acima_da_media = len([valor for valor in valores if valor > media])

print(f"Menor faturamento: {menor}")
print(f"Maior faturamento: {maior}")
print(f"Dias acima da média: {dias_acima_da_media}")
