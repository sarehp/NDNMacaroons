# NDNMacaroons
===============

Installation instructions
-------------------------

### Prerequisites

Required:

* [ndn-cxx and its dependencies](http://named-data.net/doc/ndn-cxx/)
* Boost libraries

### Build

To build `NDNMacaroons` library run the following commands from 
`NDNMacaroons/` folder:

    cd libNDNMacaroon
    ./waf configure
    ./waf
    ./waf install
  
To build `NDNMacaroons` examples run the following commands from 
`NDNMacaroons/` folder:

    ./waf configure
    ./waf

### Run the example

There are 4 principals:
   - Producer: produces data and provides a macaroon to access data.
   - Consumer1: gets macaroon from Producer and provides attenuated macaroon to other consumer: Consumer2.
   - Consumer2: gets attenuated macaroon from Consumer1, it contains a Third Party Caveat. 
                Gets discharge macaroon from Third Party and sends macaroon and discharge macaroon to Producer in order to access data.
   - Third Party: provides discharge macaroon to principals.
   
First, create DSK/KSK keys required to run this example. From `NDNMacaroons/` folder:

    ./createKeys.sh

Run each principal, each one in a different terminal, from `NDNMacaroons/` folder:
    ./build/bin/producer/producer
    ./build/bin/third-party/third-party
    ./build/bin/consumer1/consumer1
    ./build/bin/consumer2/consumer2

   
   
