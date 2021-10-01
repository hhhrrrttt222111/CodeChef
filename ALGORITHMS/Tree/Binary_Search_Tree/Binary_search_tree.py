
#a program used to demonstrate simple operations in a binary search tree

class Node:
    def __init__(self,node):
        self.left=None
        self.right=None
        self.node=node
    def insert(self,objnode):
        if self.node:
            if objnode<self.node:
                if self.left is None:
                    self.left=Node(objnode)
                else:
                    self.left.insert(objnode)
            elif objnode>self.node:
                if self.right is None:
                    self.right=Node(objnode)
                else:
                    self.right.insert(objnode)
            else:
                self.node=objnode
    def printBST(self):
        if self.left:
            self.left.printBST()
        print(self.node)
        if self.right:
            self.right.printBST()
    def Search(self,root, key):
        while root != None:
            
            # pass right subtree as new tree
            if key > root.node:
                root = root.right
    
            # pass left subtree as new tree
            elif key < root.node:
                root = root.left
            else:
                return True # if the key is found return 1
        return False        
            
n=int(input('Enter your Root node'))
root=Node(n)
while 1:
    a=int(input("enter the node you want to insert"))
    root.insert(a)
    ch=input("Do you want to continue Y or N")
    if ch=="Y"or ch=="y":
        continue
    else:
        break
print("Your final binary search tree is\n")
root.printBST()
x=int(input("Enter key to search for"))
if root.Search(root, x):
        print("Yes key exists in the tree")
else:
    print("Not found!")

