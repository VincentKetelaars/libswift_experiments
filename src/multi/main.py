'''
Created on Aug 22, 2013

@author: Vincent Ketelaars
'''

import subprocess
import argparse

from multi.instance import MyMainInstance

def main():
    parser = argparse.ArgumentParser(description='Start multiple Swift instances')
    parser.add_argument("-d", "--dir", metavar="Swift Directory", default="", help='Provides the location of libswift')
    args = parser.parse_args()
    
    instance = MyMainInstance(args.dir)

if __name__ == '__main__':
    main()