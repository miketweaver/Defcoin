Defcoin integration/staging tree
================================

[![Build Status](https://travis-ci.org/NaH012/Defcoin.svg?branch=master)](https://travis-ci.org/NaH012/Defcoin)

http://www.defcoin-ng.org

Copyright (c) 2009-2018 Bitcoin Developers<br>
Copyright (c) 2011-2018 Litecoin Developers<br>
Copyright (c) 2011-2018 Defcoin Developers

What is Defcoin?
----------------

Defcoin is a fork of Litecoin which is a lite version of Bitcoin using scrypt as a proof-of-work algorithm.
 - 2 minute block targets
 - 720 blocks to retarget difficulty

 The rest is the same as Litecoin.
 - subsidy halves in 840k blocks (~4 years)
 - ~84 million total coins
 - 50 coins per block. Now 25 coins after first halving event

For more information, as well as an immediately useable, binary version of
the Defcoin client sofware, see http://www.defcoin-ng.org.

License
-------

Defcoin is released under the terms of the MIT license. See [`COPYING`](COPYING) for more
information or see http://opensource.org/licenses/MIT.

Development process
-------------------

Developers work in their own trees, then submit pull requests when they think
their feature or bug fix is ready.

If it is a simple/trivial/non-controversial change, then one of the defcoin
development team members simply pulls it.

If it is a *more complicated or potentially controversial* change, then the patch
submitter will be asked to start a discussion (if they haven't already) on the
[reddit](https://www.reddit.com/r/defcoin/).

The patch will be accepted if there is broad consensus that it is a good thing.
Developers should expect to rework and resubmit patches if the code doesn't
match the project's coding conventions (see `doc/coding.txt`) or are
controversial.

The `master` branch is regularly built and tested, but is not guaranteed to be
completely stable. [Tags](https://github.com/NaH012/defcoin/tags) are created
regularly to indicate new official, stable release versions of defcoin.


### Automated Testing

Developers are strongly encouraged to write unit tests for new code, and to
submit new unit tests for old code.

Unit tests for the core code are in `src/test/` and `test/`. To compile and run them:

    make check
    python3.4 test/functional/test_runner.py

Unit tests for the GUI code are in `src/qt/test/`. They are compiled with the Qt code and run with `make check`

----------------------------------
### Themeing

The theme data for the Qt GUI is stored in `src/qt/theme.h`. 

----------------------------------
## To Do

Rename the Defcoin units from mDFC and μDFC in favor of a more flavorful name similar to [Litecoin](https://github.com/litecoin-project/litecoin/blob/master/src/qt/bitcoinunits.cpp#L43).
This is stored in the file [```src/qt/bitcoinunits.cpp```](https://github.com/nah012/defcoin/blob/master/src/qt/bitcoinunits.cpp) on [lines 43 - 45](https://github.com/nah012/defcoin/blob/master/src/qt/bitcoinunits.cpp#L43-L45)
```
    case BTC: return QString("DFC");
    case mBTC: return QString("mDFC");
    case uBTC: return QString::fromUtf8("μDFC");
```
and on [lines 54 - 56](https://github.com/nah012/defcoin/blob/master/src/qt/bitcoinunits.cpp#L54-L56)
```
    case BTC: return QString("Defcoins");
    case mBTC: return QString("Milli-Defcoins (1 / 1" THIN_SP_UTF8 "000)");
    case uBTC: return QString("Micro-Defcoins (1 / 1" THIN_SP_UTF8 "000" THIN_SP_UTF8 "000)");
```
