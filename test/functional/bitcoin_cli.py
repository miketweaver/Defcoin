#!/usr/bin/env python3
# Copyright (c) 2017 The Bitcoin Core developers
# Distributed under the MIT software license, see the accompanying
# file COPYING or http://www.opensource.org/licenses/mit-license.php.
"""Test bitcoin-cli"""
from test_framework.test_framework import BitcoinTestFramework
from test_framework.util import assert_equal

class TestBitcoinCli(BitcoinTestFramework):

    def set_test_params(self):
        self.setup_clean_chain = True
        self.num_nodes = 1

    def run_test(self):
        """Main test logic"""

<<<<<<< HEAD
        self.log.info("Compare responses from getinfo RPC and `defcoin-cli getinfo`")
=======
        self.log.info("Compare responses from getinfo RPC and `litecoin-cli getinfo`")
>>>>>>> 567c0d737f0f3ab65977fcabaa1483e449d69702
        cli_get_info = self.nodes[0].cli.getinfo()
        rpc_get_info = self.nodes[0].getinfo()

        assert_equal(cli_get_info, rpc_get_info)

if __name__ == '__main__':
    TestBitcoinCli().main()
