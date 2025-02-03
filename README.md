# OblivionDecoder

## Project Overview

OblivionDecoder is a lightweight text encryption and decryption utility developed in C, created as a deliberate exercise in C programming.

## Motivation

This project was intentionally implemented in C as a personal learning and practice opportunity. While contemporary languages like Python or C++ might offer more streamlined approaches to encryption and provide built-in libraries for such tasks, the choice of C was driven by several strategic considerations:

- Deepen understanding of low-level programming concepts
- Practice manual memory management
- Develop a more intimate understanding of string manipulation
- Challenge myself with a language that requires more explicit implementation
- Gain hands-on experience with fundamental cryptographic principles

By choosing C, the project became more than just an encryption tool—it transformed into a learning journey through manual implementation, type management, and algorithmic thinking.

## Etymology of the Name

### Oblivion
Derived from the Latin *"oblivio"*, meaning "forgetting" or "disappearance". In broader context, the term evokes:
- Mysterious and enigmatic connotations
- A state of profound anonymity
- Conceptual depth associated with obscurity

### Decoder
A technical term representing:
- Systems capable of deciphering encrypted messages
- Mechanisms for translating complex, hidden information
- Breaking through communication barriers

## Technical Specifications

### Encryption Methodology
- Variant of the Vigenère cipher
- Algorithmic character shifting based on password
- Cyclic alphabet transformation
- Case-normalization for consistent processing

### Supported Character Set
- Encrypts: Alphabetic characters (A-Z)
- Preserves: Non-alphabetic characters (spaces, punctuation, numbers)

## System Requirements

### Prerequisites
- C Compiler (GCC recommended)
- Standard C standard library
- POSIX-compatible operating system

### Compilation Instructions
```bash
gcc -o Oblivion-Decoder src/main.c
```

### Execution
```bash
./Oblivion-Decoder
```

## Usage Workflow
1. Select encryption mode (Encrypt/Decrypt)
2. Input message
3. Provide encryption password
4. Receive processed text

## Security Considerations

**Disclaimer**: This implementation provides minimal cryptographic protection. It is not suitable for securing sensitive information and should be considered a learning tool or recreational utility.

## Potential Improvements
- Enhanced character set support
- Advanced encryption algorithms
- File-based encryption capabilities
- User interface refinements

## License
This project is licensed under the MIT License – see the [LICENSE](LICENSE.md) file for details.

