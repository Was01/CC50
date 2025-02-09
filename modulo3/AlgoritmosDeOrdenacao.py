## Busca por menor elemento da lista
"""

lista=[7,5,1,8,3]

def MenorElemento(lista):
  min=lista[0]
  for i in range(len(lista)):
    if(lista[i]<min):
      min=lista[i]
  return min

print(MenorElemento(lista))

"""## Selection Sort"""

lista=[7,5,9,1,8,3,2]

def SelectonSort(lista):
  n=len(lista)
  for j in range(n-1):
    min_index=j
    for i in range(j,n):
      if lista[i]<lista[min_index]:
        lista[i],lista[min_index]=lista[min_index],lista[i]
    if lista[j]<lista[min_index]:
      lista[j],lista[min_index]=lista[min_index],lista[j]
  return lista

print(SelectonSort(lista))
