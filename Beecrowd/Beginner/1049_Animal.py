catagory = input()
word_one = input()
word_two = input()
if catagory == "vertebrado":
    if word_one == "ave":
        if word_two == "carnivoro":
            print("aguia")
        else:
            print("pomba")
    else:
        if word_two == "onivoro":
            print("homem")
        else:
            print("vaca")


else:
    if word_one == "anelideo":
        if word_two == "onivoro":
            print("minhoca")
        else:
            print("sanguessuga")
    else:
        if word_two == "hematofago":
            print("pulga")
        else:
            print("lagarta")