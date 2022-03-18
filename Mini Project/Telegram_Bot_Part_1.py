# mengimport package pyTelegramBotAPI
import telebot

# inisialisasi Token Bot Kita
bot = telebot.TeleBot('TOKENBOT')

# Menghandle Pesan /start
@bot.message_handler(commands=['start'])
def welcome(message):
    # membalas pesan
    bot.reply_to(message, 'Halo bro, ada apa?')

# Menghandle Pesan hai
@bot.message_handler(regexp='hai')
def welcome(message):
    # membalas pesan
    bot.reply_to(message, "what's up!")

print('bot running!!!')
bot.polling()
