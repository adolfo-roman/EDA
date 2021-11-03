def funcion3(L,n):
    if n==1:
        return L[0]
    else:
        return L[0] + funcion3(L[1:], n-1)

lista1=[2,4,6,8,10,12]
lista2=funcion3(lista1, len(lista1))

print(lista2)