import tweepy
import serial
from time import sleep


consumer_key = '8cdGRP1ZNnHcSippjnGKZdABZ'
consumer_secret = 'j2hplYUJZv42rU5aipne2K9hc1WxzITN7AXCI5yWPzc9mcbeY1'
access_token = '950805952407769088-vl2aTdmiuIJL6W4RpLbj3Atic1czlJd'
access_token_secret = 'TllyrwocPAnk5WHm9ZcTB3GhYLv5BKa5xQqE6g2uzQiPE'

ser = serial.Serial('/dev/ttyACM0',115200)

#Authenticate
auth = tweepy.OAuthHandler(consumer_key, consumer_secret)
auth.set_access_token(access_token, access_token_secret)
api = tweepy.API(auth)

def tweet():
    laskuri = 1
    while True:
        if not (access_token and access_token_secret and consumer_key and consumer_secret):      
            raise Exception('VIRHE!!!')

        read_serial=ser.readline()
        status = "#" + str(laskuri) + " Mullan kosteustaso " + str(read_serial.decode('utf-8'))
        api.update_status(status)
        print(status)
        laskuri += 1
        sleep(15)

if __name__ == '__main__':
    tweet()
      
        

