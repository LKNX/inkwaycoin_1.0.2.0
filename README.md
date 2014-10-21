InkWayCoin integration/staging tree
================================

http://inkway.com

Copyright (c) 2014 InkWayCoin Developers
Copyright (c) 2013-2014 NovaCoin Developers  
Copyright (c) 2011-2012 PPCoin Developers  
Copyright (c) 2011-2014 Litecoin Developers  
Copyright (c) 2009-2014 Bitcoin Developers  

What is InkWayCoin?
----------------

InkWayCoin is an asset-backed cryptocurrency.

 - 1 minute block targets
 - 10,000,000 total coins


Getting Started
----------------
### How to build InkWayCoin

    sudo apt-get install build-essential \
                         libssl-dev \
                         libdb5.1++-dev \
                         libboost-all-dev \
                         libqrencode-dev \
                         libminiupnpc-dev

    cd src/
    make -f makefile.unix USE_UPNP=- USE_IPV6=1 USE_QRCODE=1

### Quickstart for Linux Users

    cd ~
    sudo apt-get install build-essential libboost-all-dev libcurl4-openssl-dev libdb5.1-dev \
                         libdb5.1++-dev qt4* libqrencode-dev
    download src
    cd inkwaycoin
    qmake USE_UPNP=- USE_IPV6=1 USE_QRCODE=1 && make
    
For more information and options, please look at doc/build-unix.md.
