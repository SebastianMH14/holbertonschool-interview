#!/usr/bin/node
const request = require('request');

const args = process.argv.slice(2);

request(`https://swapi-api.hbtn.io/api/films/${args[0]}/`, (error, response, body) => {
  if (error) {
    console.error(error);
  } else {
    const json = JSON.parse(body);
    json.characters.forEach((character) => {
      request(character, (error, response, body) => {
        if (error) {
          console.error(error);
        } else {
          const json = JSON.parse(body);
          console.log(json.name);
        }
      });
    });
  }
});
