#!/bin/python3
#PROBLEM LINK : https://www.hackerrank.com/challenges/find-the-merge-point-of-two-joined-linked-lists/problem?h_l=interview&playlist_slugs%5B%5D=arcesium
import math
import os
import random
import re
import sys

class SinglyLinkedListNode:
    def __init__(self, node_data):
        self.data = node_data
        self.next = None

class SinglyLinkedList:
    def __init__(self):
        self.head = None
        self.tail = None

    def insert_node(self, node_data):
        node = SinglyLinkedListNode(node_data)

        if not self.head:
            self.head = node
        else:
            self.tail.next = node


        self.tail = node

def print_singly_linked_list(node, sep, fptr):
    while node:
        fptr.write(str(node.data))

        node = node.next

        if node:
            fptr.write(sep)

# Complete the findMergeNode function below.

#
# For your reference:
#
# SinglyLinkedListNode:
#     int data
#     SinglyLinkedListNode next
#
#
def findMergeNode(head1, head2):
    ptr1 = head1
    ptr2 = head2
    count = 0
    while True:
        count+=1 
        if(ptr1==ptr2):
            break
        ptr1 = ptr1.next
        ptr2 = ptr2.next
        
        if(ptr1==None):
            ptr1 = head1
        if(ptr2 == None):
            ptr2 = head2
   
    return ptr2.data
    
    
    
    

if __name__ == '__main__':
