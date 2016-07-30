exports.post = function(request, response) {
    // Use "request.service" to access features of your mobile service, e.g.:
    //   var tables = request.service.tables;
    //   var push = request.service.push;

    response.send(statusCodes.OK, { message : 'Trigger Sent from POST API!' });
};

exports.get = function(request, response) {
    
    var https = require('https');

    var optionsget = {
        host : 'api.particle.io',
        port : 443,
// Nick's Particle Photon        
        path : '/v1/devices/54ff74066678574925210367/pour?access_token=e37d142649b2d941aaa933200c9ea68c44b72d9d',
// Stacey's Particle Core
//        path : '/v1/devices/53ff6f066667574846462367/opentap?access_token=6b04dacd5371d09abf25f5b69254303970f196df',
        method : 'POST'
    };
   
    // do the GET request
    var reqPost = https.request(optionsget, function(res) {

    });
    
    reqPost.end();
    reqPost.on('error', function(e) {
        // Log the error somewhere
    });
    
    response.send(statusCodes.OK, { message : 'Trigger Sent FROM GET API!' });
};