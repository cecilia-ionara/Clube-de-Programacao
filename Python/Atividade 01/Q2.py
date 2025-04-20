parede_largura = 5.0  
parede_altura = 2.8  
quantidade_janelas = 8
material_portas = "Madeira"
nome_arquitetor = "Izeth da Silva"
quantidade_comodos = 6
quantidade_portas = 6  

area_parede = parede_largura * parede_altura

area_total_paredes = area_parede * quantidade_comodos

print(f"\nÁrea total das paredes: {area_total_paredes} m²")

quantidade_janelas -= 2  
print(f"Nova quantidade de janelas: {quantidade_janelas}")

padrao_casa_simples = (quantidade_janelas == quantidade_comodos) and (quantidade_portas == quantidade_comodos)

print("A casa segue o padrão simples?", padrao_casa_simples)
  