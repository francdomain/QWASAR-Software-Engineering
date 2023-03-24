const express = require('express');
app = express();
const port = 8080;

const sinatraSongs = ["Accidents Will Happen", "Body and Soul", "Adeste Fideles", "Ad-Lib Blues",
                    "How About You?", "The Good Life", "Air For English Horn", "Come Back to Sorrento",
                    "Alice Blue Gown", "All Alone", "All By Myself", "Desafinado", "All My Tomorrows",
                    "All of Me", "All of You", "Ebb Tide", "All or Nothing at All", "A Fine Romance",
                    "New York, New York", "My Way", "Oh Marie", "Once in a While"];

const sinatra = {
    'songs': sinatraSongs,
    'birth_date': 'December 12, 1915',
    'birth_city': 'Hoboken, New Jersey, U.S',
    'wives': "Nancy Barbato, Ava Gardner, Mia Farrow, Barbara Marx",
    'picture': 'https://en.wikipedia.org/wiki/Frank_Sinatra#/media/File:Frank_Sinatra2,_Pal_Joey.jpg'
}


app.get('/', (req, res) => {
    function randomSong(min, max) {
        min = Math.ceil(min);
        max = Math.floor(max);
        return Math.floor(Math.random() * (max - min + 1) + min)
    }
    let songIndex = randomSong(0, sinatraSongs.length - 1);
    res.status(200).send(sinatra.songs[songIndex]);
})

app.get('/birth_date', (req, res) => {
    res.status(200).send(sinatra['birth_date']);
})

app.get('/birth_city', (req, res) => {
    res.status(200).send(sinatra['birth_city']);
})

app.get('/wives', (req, res) => {
    res.status(200).send(sinatra.wives);
})

app.get('/picture', (req, res) => {
    res.redirect(sinatra.picture);
})

app.get('/public', (req, res) => {
    res.status(200).send("Everybody can see this page");
})

app.use('/protected', (req, res, next) => {
    if (!req.get('Authorization')) {
        let err = res.status(401).send('Not authorized')
        res.status(401).set('WWW-Authenticate', 'Basic realm="Restricted Area"');
        next(err);
    } 
    else {
        let authDetails = Buffer.from(req.get('Authorization').split(' ')[1], 'Base64').toString().split(':')

        let username = authDetails[0]
        let password = authDetails[1]

        if (!(username === 'admin' && password === 'admin')) {
            let err = res.status(401).send('Not authorized')
            res.status(401).set('WWW-Authenticate', 'Basic realm="Restricted Area"');
            next(err);
        }
        res.status(200);
        next();
    }
})
app.get('/protected', (req, res) => {
    res.send('Welcome, authenticated client');
})

app.listen(port, '0.0.0.0', () => {
    console.log('Server started on port ' + port)
})

