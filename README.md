# ALL STILL WIP. THE README STATES GOALS OF THE PROJECT 
# AND MIGHT NOT REFLECT THE CURRENT STATE


# USL - A compiler toolchain project
## The language
Uprise Scripting Language is a safe by default,AOT compiled systems language.
### History
Originaly USL was intendet to just be the language the scripts for my game engine were written in (since c++ has no reflection wich would make writing a unity like edditor painfull)
but over time my vision for the language changed and while writing my own bootloader and kernel i go so frustrated that i decided to change USL into a full Systems language.
this means that USL will include both high level abstractions like automatic refcounting for Heap objects and low level primitives to interact with hardware.
## Design
USL is a safe by default, reflection enabled, AOT compiled system language. 
USL has a split/ hybrid Memory Model
on one hand manual allocation is allowed in unsafe scopes (with both normal new and placement new existing).
and on the other hand automatic Heap Promotion of ceartain obects(more about that in the wiki INSERT LINK).
USL Is primarily Object Oriented but also partialy allows other proraming styles.
USL also features Static Exception notation wich forces programers to list all possible exceptions that can escape a function or 'maybe' if unknown (further information on the wiki INSERT LINK)
USL avoids most of the dangers of UB in C/C++ by defining prts of it and turing other ones into Compile time errors 
Certin types of UB still Exist and are exlicitly listed in the Language Spec and the Wiki
USL features unsafe scopes to contain the occurence of most types of ub into explicit easy to find scopes.
most types of pointer arithmatic and dereferencing is baned outside of unsafe scopes (unless proven safe). only Variables marked as 'unsafe' or proven safe may escape unsafe scopes.


## The compiler
Its the for now Only implementation of the language and it only targets x86_64
it uses boost::program_options for ARg parsing, ANTLR4 as the Parser and Lexer and LLVM as a backend


## The linker

## The Runtime

## The STD

## The Executable Format




# Dependencies
## This project utilizes variouse 3rd party libraries.Tthose libraries are not included but will be build with VCPKG
## The following List Contains all Explicitly imported libraries using vcpkg.json. Those are all used Libraries
### (if this list is ever different from the actual libs included with vcpgk.json please open an issiue or pull request)
### ANTLR4
### LLVM
### boost::program_options 
### libzip

