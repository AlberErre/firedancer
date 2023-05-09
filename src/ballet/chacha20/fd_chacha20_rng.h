#ifndef HEADER_fd_src_ballet_chacha20_fd_chacha20_h
#define HEADER_fd_src_ballet_chacha20_fd_chacha20_h

#include "../fd_ballet_base.h"

typedef uint32_t fd_chacha20_rng_t;

#define FD_CHACHA20_KEY_SIZE 32   // 32 bytes, 256 bits
#define FD_CHACHA20_NONCE_SIZE 12 // 12 bytes, 96 bits

/*
  This method generates a cryptographically secure random number, it expects a key (32 bytes) and nonce (12 bytes)
  Note this random number will be stored on a buffer passed as 'random_number' param (fd_chacha20_rng_t)
*/
int fd_chacha20_generate_random_number(const uchar *key, const uchar *nonce, fd_chacha20_rng_t *random_number);

#endif /* HEADER_fd_src_ballet_chacha20_fd_chacha20_h */