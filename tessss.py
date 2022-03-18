# @bot.message_handler(commands=['igvid'])
# def downloadig(message):
#     bot.send_message(message.chat.id, "1. Unduh Video/Reels/IGTV linknya langsung paste dichat\n2. /stalk username > stalking akun instagram")

# @bot.message_handler(commands=['tiktokVid'])
# def downloadig(message):
#     bot.send_message(message.chat.id, "Paste aja linknya di chat...")
    
# @bot.message_handler(commands=['stalk'])
# def stalkingInstagram(message):
#      masukan = message.text
#      link = masukan.split()

#      response = requests.get(f'https://mhankbarbar.herokuapp.com/api/stalk?username={link[1]}')
#      data = response.json()
#      fotoProfile = data['Profile_pic']

#     #  namaFile = f"{data['Username']}.jpg"
#      req = requests.get(fotoProfile)
#      with open(f"{data['Username']}.jpg", 'wb') as f:
#         for chunk in req.iter_content(chunk_size=8192):
#             f.write(chunk)
#         f.close()
#     #  urllib.request.urlretrieve(fotoProfile, f"{data['Username']}.jpg")
     
#      out = f"Username : {data['Username']}\nName     : {data['Name']}\nFollowers  : {data['Jumlah_Followers']}\nFollowing  : {data['Jumlah_Following']}\nPost      : {data['Jumlah_Post']}\nBiodata :\n{data['Biodata']}"

#      foto = open(f"{data['Username']}.jpg", 'rb')
#      bot.send_photo(message.chat.id, foto)
#      bot.send_message(message.chat.id, out)
#      foto.close()
import re

url = 'https://www.facebook.com/BBCNewsIndonesia/videos/1736415089892756/'
x = re.match(r'^(https:|)[/][/]www.([^/]+[.])*facebook.com', url)

print(x)