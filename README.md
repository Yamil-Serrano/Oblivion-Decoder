# OblivionDecoder

**OblivionDecoder** is a secure and enhanced Caesar cipher implementation that uses a password-based dynamic shift for encryption and decryption. This project is designed to provide a more secure alternative to the traditional Caesar cipher by introducing a password-based key extension mechanism.

---

## Features

- **Password-based encryption**: Uses a user-provided password to determine dynamic shifts for each character.
- **Enhanced security**: Extends the password to match the length of the text, making it resistant to simple frequency analysis attacks.
- **Customizable**: Supports uppercase letters, lowercase letters, and non-alphabetic characters (optional).
- **Lightweight and fast**: Written in C for optimal performance.

---

## How It Works

1. **Password to Numbers**: Each letter in the password is converted to a number (A=0, B=1, ..., Z=25).
2. **Key Extension**: The password is repeated to match the length of the input text.
3. **Encryption**: Each character in the input text is shifted forward in the alphabet by the corresponding number in the extended key.
4. **Decryption**: Each character in the encrypted text is shifted backward in the alphabet by the corresponding number in the extended key.

---

## Example

### Encryption
- **Input Text**: `HELLO`
- **Password**: `CODE`
- **Extended Key**: `CODEC`
- **Encrypted Text**: `JSOPQ`

### Decryption
- **Encrypted Text**: `JSOPQ`
- **Password**: `CODE`
- **Extended Key**: `CODEC`
- **Decrypted Text**: `HELLO`

---

## Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/your-username/OblivionDecoder.git
