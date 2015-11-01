# unsolved-conjectures
ESORICS’11 test cases of unsolved-conjectures
Trigger-based code (malicious in many cases, but not necessarily)
only executes when specific inputs are received. Symbolic execution
has been one of the most powerful techniques in discovering
such malicious code and analyzing the trigger condition. We propose a
novel automatic malware obfuscation technique to make analysis based
on symbolic execution difficult. Unlike previously proposed techniques,
the obfuscated code from our tool does not use any cryptographic operations
and makes use of only linear operations which symbolic execution
is believed to be good in analyzing. The obfuscated code incorporates
unsolved conjectures and adds a simple loop to the original code, making
it a few hundreds of bytes longer and hard to be differentiated from
normal programs.

[ESORICS 2011] Zhi Wang, Jiang Ming, Chunfu Jia and Debin Gao, Linear Obfuscation to Combat Symbolic Execution, 
In Proceedings of the 16th European Symposium on Research in Computer Security , Leuven, Belgium, September 2011.
