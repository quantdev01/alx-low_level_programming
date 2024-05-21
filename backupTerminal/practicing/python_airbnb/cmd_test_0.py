#!/usr/bin/python3
"""
Testing out the Cmd class
"""

import cmd

class HelloDan(cmd.Cmd):
    """
    implementation of cmd interpreter
    """
    prompt = "-> "

    def do_greet(self, name):
        if name:
            print(f"Hey {name}")
        else:
            print("Hey")

    def help_greet(self):
        print('use:\ngreet [name]\n$ Hey [name]')





    def do_EOF(self, line):
        """
        exit the app with Ctrl+D
        """
        return True
    
    def postloop(self):
        """
        Will execute after the loop
        """
        print()

    def default(self, line):
        print(f"{line} command not found")

if __name__ == "__main__":
    HelloDan().cmdloop()
