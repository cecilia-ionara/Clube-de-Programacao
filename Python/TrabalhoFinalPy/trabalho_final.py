# -*- coding: utf-8 -*-
"""trabalho final.ipynb

Automatically generated by Colab.

Original file is located at
    https://colab.research.google.com/drive/14eKbwq2qtW0h61JbVOK7jxk_3V_38Y5c
"""

pip install numpy pandas matplotlib beautifulsoup4 requests

import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
import requests
from bs4 import BeautifulSoup

# menu principal
def exibir_menu():
    print("\n=== APLICATIVO DE CLIMA - BELÉM (PA) ===")
    print("1 - Ver estatísticas climáticas")
    print("2 - Visualizar gráfico de temperaturas")
    print("3 - Coletar temperatura atual de Belém")
    print("4 - Sair")
    return input("Escolha uma opção: ")

# função 1: estatísticas com dados simulados
def estatisticas_climaticas():
    print("\n--- Estatísticas Climáticas Semanais ---")
    # Temperaturas simuladas para Belém (°C)
    temperaturas = np.array([28.5, 29.1, 27.8, 28.0, 28.9, 29.3, 28.7])
    dias = ['Seg', 'Ter', 'Qua', 'Qui', 'Sex', 'Sáb', 'Dom']

    df = pd.DataFrame({
        'Dia': dias,
        'Temperatura (°C)': temperaturas
    })

    media = temperaturas.mean()
    maxima = temperaturas.max()
    minima = temperaturas.min()
    desvio = temperaturas.std()

    print(df)
    print(f"\nTemperatura média: {media:.2f}°C")
    print(f"Temperatura máxima: {maxima:.2f}°C")
    print(f"Temperatura mínima: {minima:.2f}°C")
    print(f"Desvio padrão: {desvio:.2f}")

# função 2: gráfico das temperaturas
def grafico_temperaturas():
    print("\n--- Gráfico de Temperaturas Semanais ---")
    temperaturas = [28.5, 29.1, 27.8, 28.0, 28.9, 29.3, 28.7]
    dias = ['Seg', 'Ter', 'Qua', 'Qui', 'Sex', 'Sáb', 'Dom']

    plt.figure(figsize=(8, 5))
    plt.plot(dias, temperaturas, marker='o')
    plt.title('Temperaturas Semanais em Belém')
    plt.xlabel('Dia da Semana')
    plt.ylabel('Temperatura (°C)')
    plt.grid(True)
    plt.tight_layout()
    plt.show()

# função 3: Web Scraping da previsão atual
def previsao_hoje():
    print("\n--- Coletando dados climáticos atuais de Belém (Time and Date) ---")
    url = "https://www.timeanddate.com/weather/brazil/belem"

    try:
        response = requests.get(url)
        response.raise_for_status()
    except requests.RequestException as e:
        print(f"Erro na requisição: {e}")
        return

    soup = BeautifulSoup(response.text, 'html.parser')
    qlook = soup.find(id='qlook')
    if not qlook:
        print("Container de temperatura não encontrado.")
        return

    temp_div = qlook.find('div', class_='h2')
    temperatura = temp_div.get_text(strip=True) if temp_div else 'N/A'

    cond_p = qlook.find('p')
    condicao = cond_p.get_text(strip=True) if cond_p else 'N/A'

    print(f"\nDADOS ATUAIS - BELÉM/PA")
    print(f"Temperatura: {temperatura}")
    print(f"Condição: {condicao}")

# função main
def main():
    while True:
        opcao = exibir_menu()
        if opcao == '1':
            estatisticas_climaticas()
        elif opcao == '2':
            grafico_temperaturas()
        elif opcao == '3':
            previsao_hoje()
        elif opcao == '4':
            print("Encerrando o programa. Até logo!")
            break
        else:
            print("Opção inválida. Tente novamente.")

if __name__ == "__main__":
    main()