from bs4 import BeautifulSoup
import requests
html_text = requests.get('https://www.google.com').text
 soup = BeautifulSoup(html_text,'lxml')
