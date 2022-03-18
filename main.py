
def arithmetic_arranger(problems, tampilkan_hasil = False):
# pisahkan setiap value
    atas = [i.split()[0] for i in problems] 
    bawah = [i.split()[2] for i in problems] 
    operator = [i.split()[1] for i in problems] 

    if tampilkan_hasil:
        return "hasil" #
    
    output_atas = ""
    output_bawah = ""
 
    for j in range( len(problems) ):
        output_atas += f"{atas[j]:>8}"
        output_bawah += f"{operator[j]}  {bawah[j]:>5}"

    atas, operator, bawah = zip(*[i.split() for i in problems])
# cara mencetak string garis putus putus dan mengatur nilai bawahnya biar rata kanan
    print(atas, operator, bawah )
    print(output_bawah)

    # return arranged_problems

arithmetic_arranger(["32 + 698", "3801 - 2", "45 + 43", "123 + 49"]) 