#!/usr/bin/node
const request = require('request');

const args = process.argv.slice(2);

request('https://swapi-api.hbtn.io/api/films/' + args[0], async (err, response, body) => {
  if (err) console.log(err);
  for (const name of JSON.parse(body).characters) {
    await new Promise((resolve, reject) => {
      request(name, (err, response, body) => {
        console.log(JSON.parse(body).name);
        resolve();
      });
    });
  }
});
