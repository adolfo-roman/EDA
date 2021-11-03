def activities(s, f, n):

    print("Selected activities are: ")

    i = 0

    print(f"A{i + 1}: Begin: {s[i]}, End: {f[i]}")

    for j in range(n):

        if s[j] >= f[i]:

            i = j

            print(f"A{j + 1}: Begin: {s[j]}, End: {f[i]}")

def main():

    # Arreglos originales

    #s = [1,2,3,2,4,5,6,8,7]
    #f = [4,5,6,8,6,7,7,12,9]

    # Arreglos ordenados

    s = [1,2,2,3,4,5,6,7,8]
    f = [4,5,8,6,6,7,7,9,12]

    n = len(s)

    activities(s,f,n)

    input()

if __name__ == "__main__":
    main()
