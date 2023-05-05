#ifndef HEADER_fd_src_ballet_chacha20_fd_chacha20_h
#define HEADER_fd_src_ballet_chacha20_fd_chacha20_h

#include <openssl/evp.h>

typedef unsigned int fd_chacha20_rng_t;

#define FD_CHACHA20_KEY_SIZE 32   // 32 bytes, 256 bits
#define FD_CHACHA20_NONCE_SIZE 12 // 12 bytes, 96 bits

int fd_chacha20_rng_init(unsigned char *key, unsigned char *nonce);
int fd_chacha20_rng_get_uint32(fd_chacha20_rng_t *num);

#endif /* HEADER_fd_src_ballet_chacha20_fd_chacha20_h */