print("    Xn      Xn+1      Xt       F(Xt)    F(Xn)   F(Xn+1)  F(Xn+1).F(Xt)")
soal = "x**3+x**2-3*x-3"
batasAtas = [1]
batasBawah= [batasAtas[0]+1]


while True:
    
    var1, var2 = batasAtas[len(batasAtas)-1], batasBawah[len(batasBawah)-1]
    epsilon = 0.0001
    # calculate function
    fungsiSatu, fungsiDua = eval('var1'.join(soal.split("x"))), eval('var2'.join(soal.split("x")))
    Xt         = (var1 + var2)/2 # 3.
    fungsiXt   = eval("Xt**3+Xt**2-3*Xt-3")

    # check whether the value of the Xt function is?
    # logic to determine positive or negative sign
    if (fungsiXt*fungsiSatu) > 0:
        sign = "+"
        # 5. check the relationship between the value of the Xt function and epsilon
        if abs(fungsiXt) > epsilon:
        
            print(f"|  {var1:.2f}  |  {var2:.2f}  |  {Xt:.2f}  |  {fungsiSatu:.2f}  |  {fungsiDua:.2f}  |  {fungsiXt:.2f}  |     {sign}     |")
            batasAtas.append(Xt)
            batasBawah.append(var2) 

        else:
            print(f'The result is {Xt}' )
            break
            
    else:
        sign = '-'

        # 5. check the relationship between the value of the Xt function and epsilon
        if abs(fungsiXt) > epsilon:
        
            print(f"|  {var1:.2f}  |  {var2:.2f}  |  {Xt:.2f}  |  {fungsiSatu:.2f}  |  {fungsiDua:.2f}  |  {fungsiXt:.2f}   |     {sign}     |")
            batasAtas.append(var1)
            batasBawah.append(Xt)

        else:
            print(f'The result is {Xt}' )
            break