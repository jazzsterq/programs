import argparse
import sys
import sort
import remove_duplicate

# Create an argument parser
parser = argparse.ArgumentParser(description='Process some integers.')
parser.add_argument('-f', '--file',  help="csv file to read from",dest="input_filename")
parser.add_argument('-o', '--output', help="csv file to write to", dest="output_filename")
parser.add_argument('-c', '--columns', help="columns to do action on",dest="column")
parser.add_argument('-a', '--action', help="action to run", dest="action")

args = parser.parse_args()

# Basic error handling
if args.input_filename is None:
    sys.exit('Error: No file name provided.')
if args.action is None:
    sys.exit('Error: No action provided.')

# Action execution based on user input
if args.action == "sort":
    sort.sort_file(args.input_filename, args.output_filename,args.column)
elif args.action == "remove_duplicate":
    remove_duplicate.remove_duplicate(args.input_filename, args.output_filename,args.column)

import sys
import csv
import operator

def remove_duplicate(read_filename, write_filename, column):
    data = csv.reader(open(read_filename), delimiter=',')
    newrows = []
    for row in rows:
        if row not in newrows:
            newrows.append(row)
    writer = csv.writer(open(write_filename, 'w'))
    writer.writerows(newrows)

import sys
import csv
import operator

def sort_file(read_filename, write_filename, column):
    data = csv.reader(open(read_filename), delimiter=',')
    sortedlist = sorted(data, key=operator.itemgetter(column))
    filewriter = csv.writer(open(write_filename, 'w'), delimiter=',')
    for row in sortedlist:
        filewriter.writerow(row)


